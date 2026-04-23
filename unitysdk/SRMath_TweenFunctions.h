#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SRMATH_TWEENFUNCTIONS_BACKEASEINOUT_OFFSET UNITYSDK_OFFSET(0x19EB3E60)
#define SRMATH_TWEENFUNCTIONS_BACKEASEIN_OFFSET UNITYSDK_OFFSET(0x19EB3E30)
#define SRMATH_TWEENFUNCTIONS_BACKEASEOUTIN_OFFSET UNITYSDK_OFFSET(0x19EB3EE0)
#define SRMATH_TWEENFUNCTIONS_BACKEASEOUT_OFFSET UNITYSDK_OFFSET(0x19EB3DF0)
#define SRMATH_TWEENFUNCTIONS_BOUNCEEASEINOUT_OFFSET UNITYSDK_OFFSET(0x19EB3A50)
#define SRMATH_TWEENFUNCTIONS_BOUNCEEASEIN_OFFSET UNITYSDK_OFFSET(0x19EB3980)
#define SRMATH_TWEENFUNCTIONS_BOUNCEEASEOUTIN_OFFSET UNITYSDK_OFFSET(0x19EB3C20)
#define SRMATH_TWEENFUNCTIONS_BOUNCEEASEOUT_OFFSET UNITYSDK_OFFSET(0x19EB38A0)
#define SRMATH_TWEENFUNCTIONS_CIRCEASEINOUT_OFFSET UNITYSDK_OFFSET(0x19EB3040)
#define SRMATH_TWEENFUNCTIONS_CIRCEASEIN_OFFSET UNITYSDK_OFFSET(0x19EB2FE0)
#define SRMATH_TWEENFUNCTIONS_CIRCEASEOUTIN_OFFSET UNITYSDK_OFFSET(0x19EB30F0)
#define SRMATH_TWEENFUNCTIONS_CIRCEASEOUT_OFFSET UNITYSDK_OFFSET(0x19EB2F80)
#define SRMATH_TWEENFUNCTIONS_CUBICEASEINOUT_OFFSET UNITYSDK_OFFSET(0x19EB2C10)
#define SRMATH_TWEENFUNCTIONS_CUBICEASEIN_OFFSET UNITYSDK_OFFSET(0x19EB2BF0)
#define SRMATH_TWEENFUNCTIONS_CUBICEASEOUTIN_OFFSET UNITYSDK_OFFSET(0x19EB2C80)
#define SRMATH_TWEENFUNCTIONS_CUBICEASEOUT_OFFSET UNITYSDK_OFFSET(0x19EB2BC0)
#define SRMATH_TWEENFUNCTIONS_ELASTICEASEINOUT_OFFSET UNITYSDK_OFFSET(0x19EB3580)
#define SRMATH_TWEENFUNCTIONS_ELASTICEASEIN_OFFSET UNITYSDK_OFFSET(0x19EB3480)
#define SRMATH_TWEENFUNCTIONS_ELASTICEASEOUTIN_OFFSET UNITYSDK_OFFSET(0x19EB36F0)
#define SRMATH_TWEENFUNCTIONS_ELASTICEASEOUT_OFFSET UNITYSDK_OFFSET(0x19EB3390)
#define SRMATH_TWEENFUNCTIONS_EXPOEASEINOUT_OFFSET UNITYSDK_OFFSET(0x19EB2A70)
#define SRMATH_TWEENFUNCTIONS_EXPOEASEIN_OFFSET UNITYSDK_OFFSET(0x19EB2A10)
#define SRMATH_TWEENFUNCTIONS_EXPOEASEOUTIN_OFFSET UNITYSDK_OFFSET(0x19EB2B10)
#define SRMATH_TWEENFUNCTIONS_EXPOEASEOUT_OFFSET UNITYSDK_OFFSET(0x19EB29B0)
#define SRMATH_TWEENFUNCTIONS_LINEAR_OFFSET UNITYSDK_OFFSET(0x19EB2880)
#define SRMATH_TWEENFUNCTIONS_QUADEASEINOUT_OFFSET UNITYSDK_OFFSET(0x19EB28D0)
#define SRMATH_TWEENFUNCTIONS_QUADEASEIN_OFFSET UNITYSDK_OFFSET(0x19EB28B0)
#define SRMATH_TWEENFUNCTIONS_QUADEASEOUTIN_OFFSET UNITYSDK_OFFSET(0x19EB2940)
#define SRMATH_TWEENFUNCTIONS_QUADEASEOUT_OFFSET UNITYSDK_OFFSET(0x19EB2890)
#define SRMATH_TWEENFUNCTIONS_QUARTEASEINOUT_OFFSET UNITYSDK_OFFSET(0x19EB2D40)
#define SRMATH_TWEENFUNCTIONS_QUARTEASEIN_OFFSET UNITYSDK_OFFSET(0x19EB2D20)
#define SRMATH_TWEENFUNCTIONS_QUARTEASEOUTIN_OFFSET UNITYSDK_OFFSET(0x19EB2DB0)
#define SRMATH_TWEENFUNCTIONS_QUARTEASEOUT_OFFSET UNITYSDK_OFFSET(0x19EB2CF0)
#define SRMATH_TWEENFUNCTIONS_QUINTEASEINOUT_OFFSET UNITYSDK_OFFSET(0x19EB2E80)
#define SRMATH_TWEENFUNCTIONS_QUINTEASEIN_OFFSET UNITYSDK_OFFSET(0x19EB2E60)
#define SRMATH_TWEENFUNCTIONS_QUINTEASEOUTIN_OFFSET UNITYSDK_OFFSET(0x19EB2F00)
#define SRMATH_TWEENFUNCTIONS_QUINTEASEOUT_OFFSET UNITYSDK_OFFSET(0x19EB2E30)
#define SRMATH_TWEENFUNCTIONS_SINEEASEINOUT_OFFSET UNITYSDK_OFFSET(0x19EB3250)
#define SRMATH_TWEENFUNCTIONS_SINEEASEIN_OFFSET UNITYSDK_OFFSET(0x19EB3200)
#define SRMATH_TWEENFUNCTIONS_SINEEASEOUTIN_OFFSET UNITYSDK_OFFSET(0x19EB3300)
#define SRMATH_TWEENFUNCTIONS_SINEEASEOUT_OFFSET UNITYSDK_OFFSET(0x19EB31C0)

inline static constexpr unsigned int SRMath_TweenFunctions_TypeDefinitionIndex = 33264;

class SRMath_TweenFunctions : public ::System::Object
{
public:
	static ::System::Single Linear(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_LINEAR_OFFSET))(t, b, c, d);
	}

	static ::System::Single ExpoEaseOut(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_EXPOEASEOUT_OFFSET))(t, b, c, d);
	}

	static ::System::Single ExpoEaseIn(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_EXPOEASEIN_OFFSET))(t, b, c, d);
	}

	static ::System::Single ExpoEaseInOut(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_EXPOEASEINOUT_OFFSET))(t, b, c, d);
	}

	static ::System::Single ExpoEaseOutIn(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_EXPOEASEOUTIN_OFFSET))(t, b, c, d);
	}

	static ::System::Single CircEaseOut(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_CIRCEASEOUT_OFFSET))(t, b, c, d);
	}

	static ::System::Single CircEaseIn(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_CIRCEASEIN_OFFSET))(t, b, c, d);
	}

	static ::System::Single CircEaseInOut(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_CIRCEASEINOUT_OFFSET))(t, b, c, d);
	}

	static ::System::Single CircEaseOutIn(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_CIRCEASEOUTIN_OFFSET))(t, b, c, d);
	}

	static ::System::Single QuadEaseOut(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_QUADEASEOUT_OFFSET))(t, b, c, d);
	}

	static ::System::Single QuadEaseIn(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_QUADEASEIN_OFFSET))(t, b, c, d);
	}

	static ::System::Single QuadEaseInOut(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_QUADEASEINOUT_OFFSET))(t, b, c, d);
	}

	static ::System::Single QuadEaseOutIn(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_QUADEASEOUTIN_OFFSET))(t, b, c, d);
	}

	static ::System::Single SineEaseOut(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_SINEEASEOUT_OFFSET))(t, b, c, d);
	}

	static ::System::Single SineEaseIn(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_SINEEASEIN_OFFSET))(t, b, c, d);
	}

	static ::System::Single SineEaseInOut(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_SINEEASEINOUT_OFFSET))(t, b, c, d);
	}

	static ::System::Single SineEaseOutIn(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_SINEEASEOUTIN_OFFSET))(t, b, c, d);
	}

	static ::System::Single CubicEaseOut(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_CUBICEASEOUT_OFFSET))(t, b, c, d);
	}

	static ::System::Single CubicEaseIn(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_CUBICEASEIN_OFFSET))(t, b, c, d);
	}

	static ::System::Single CubicEaseInOut(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_CUBICEASEINOUT_OFFSET))(t, b, c, d);
	}

	static ::System::Single CubicEaseOutIn(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_CUBICEASEOUTIN_OFFSET))(t, b, c, d);
	}

	static ::System::Single QuartEaseOut(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_QUARTEASEOUT_OFFSET))(t, b, c, d);
	}

	static ::System::Single QuartEaseIn(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_QUARTEASEIN_OFFSET))(t, b, c, d);
	}

	static ::System::Single QuartEaseInOut(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_QUARTEASEINOUT_OFFSET))(t, b, c, d);
	}

	static ::System::Single QuartEaseOutIn(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_QUARTEASEOUTIN_OFFSET))(t, b, c, d);
	}

	static ::System::Single QuintEaseOut(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_QUINTEASEOUT_OFFSET))(t, b, c, d);
	}

	static ::System::Single QuintEaseIn(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_QUINTEASEIN_OFFSET))(t, b, c, d);
	}

	static ::System::Single QuintEaseInOut(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_QUINTEASEINOUT_OFFSET))(t, b, c, d);
	}

	static ::System::Single QuintEaseOutIn(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_QUINTEASEOUTIN_OFFSET))(t, b, c, d);
	}

	static ::System::Single ElasticEaseOut(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_ELASTICEASEOUT_OFFSET))(t, b, c, d);
	}

	static ::System::Single ElasticEaseIn(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_ELASTICEASEIN_OFFSET))(t, b, c, d);
	}

	static ::System::Single ElasticEaseInOut(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_ELASTICEASEINOUT_OFFSET))(t, b, c, d);
	}

	static ::System::Single ElasticEaseOutIn(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_ELASTICEASEOUTIN_OFFSET))(t, b, c, d);
	}

	static ::System::Single BounceEaseOut(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_BOUNCEEASEOUT_OFFSET))(t, b, c, d);
	}

	static ::System::Single BounceEaseIn(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_BOUNCEEASEIN_OFFSET))(t, b, c, d);
	}

	static ::System::Single BounceEaseInOut(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_BOUNCEEASEINOUT_OFFSET))(t, b, c, d);
	}

	static ::System::Single BounceEaseOutIn(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_BOUNCEEASEOUTIN_OFFSET))(t, b, c, d);
	}

	static ::System::Single BackEaseOut(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_BACKEASEOUT_OFFSET))(t, b, c, d);
	}

	static ::System::Single BackEaseIn(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_BACKEASEIN_OFFSET))(t, b, c, d);
	}

	static ::System::Single BackEaseInOut(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_BACKEASEINOUT_OFFSET))(t, b, c, d);
	}

	static ::System::Single BackEaseOutIn(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_BACKEASEOUTIN_OFFSET))(t, b, c, d);
	}
};
