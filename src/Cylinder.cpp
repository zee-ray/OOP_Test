# ifndef CYLINDER_CPP
# define CYLINDER_CPP

# include "Cylinder.h"
const double PI = 3.14159265;
#include<iomanip>
double Cylinder :: SurfaceArea(){
    return (radius*PI*2.0*(radius+height));
}

double Cylinder :: Volume(){

    return (PI*radius*radius*height);
}

double Cylinder :: Circumference(){

    return (2.0*PI*radius);
}

istream & operator>>(istream & in, Cylinder & cldr)
{
    in>>cldr.radius>>cldr.height;
    return in;
}

ostream & operator<<(ostream & out, Cylinder & cldr)
{
    out<<fixed;
    out<<std::setprecision(3);
    out<<"Circumference: "<<cldr.Circumference()<<endl
       <<"SurfaceArea: "<<cldr.SurfaceArea()<<endl
       <<"Volume: "<<cldr.Volume();
    return out;
}

# endif