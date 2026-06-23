#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_BACKEASEINOUT_OFFSET UNITYSDK_OFFSET(0x1C5F3D70)
#define LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_BACKEASEIN_OFFSET UNITYSDK_OFFSET(0x1C5F3CB0)
#define LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_BACKEASEOUTIN_OFFSET UNITYSDK_OFFSET(0x1C5F3E80)
#define LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_BACKEASEOUT_OFFSET UNITYSDK_OFFSET(0x1C5F3BE0)
#define LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_BOUNCEEASEINOUT_OFFSET UNITYSDK_OFFSET(0x1C5F3840)
#define LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_BOUNCEEASEIN_OFFSET UNITYSDK_OFFSET(0x1C5F3690)
#define LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_BOUNCEEASEOUTIN_OFFSET UNITYSDK_OFFSET(0x1C5F3A20)
#define LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_BOUNCEEASEOUT_OFFSET UNITYSDK_OFFSET(0x1C5F3550)
#define LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_CIRCEASEINOUT_OFFSET UNITYSDK_OFFSET(0x1C5F19B0)
#define LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_CIRCEASEIN_OFFSET UNITYSDK_OFFSET(0x1C5F18E0)
#define LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_CIRCEASEOUTIN_OFFSET UNITYSDK_OFFSET(0x1C5F1AD0)
#define LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_CIRCEASEOUT_OFFSET UNITYSDK_OFFSET(0x1C5F1820)
#define LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_CUBICEASEINOUT_OFFSET UNITYSDK_OFFSET(0x1C5F24D0)
#define LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_CUBICEASEIN_OFFSET UNITYSDK_OFFSET(0x1C5F2430)
#define LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_CUBICEASEOUTIN_OFFSET UNITYSDK_OFFSET(0x1C5F25C0)
#define LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_CUBICEASEOUT_OFFSET UNITYSDK_OFFSET(0x1C5F2380)
#define LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_ELASTICEASEINOUT_OFFSET UNITYSDK_OFFSET(0x1C5F3120)
#define LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_ELASTICEASEIN_OFFSET UNITYSDK_OFFSET(0x1C5F2FD0)
#define LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_ELASTICEASEOUTIN_OFFSET UNITYSDK_OFFSET(0x1C5F32F0)
#define LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_ELASTICEASEOUT_OFFSET UNITYSDK_OFFSET(0x1C5F2E80)
#define LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_EXPOEASEINOUT_OFFSET UNITYSDK_OFFSET(0x1C5F1570)
#define LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_EXPOEASEIN_OFFSET UNITYSDK_OFFSET(0x1C5F14A0)
#define LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_EXPOEASEOUTIN_OFFSET UNITYSDK_OFFSET(0x1C5F16A0)
#define LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_EXPOEASEOUT_OFFSET UNITYSDK_OFFSET(0x1C5F13D0)
#define LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_LINEAR_OFFSET UNITYSDK_OFFSET(0x1C5F1330)
#define LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_QUADEASEINOUT_OFFSET UNITYSDK_OFFSET(0x1C5F1DA0)
#define LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_QUADEASEIN_OFFSET UNITYSDK_OFFSET(0x1C5F1D00)
#define LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_QUADEASEOUTIN_OFFSET UNITYSDK_OFFSET(0x1C5F1E90)
#define LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_QUADEASEOUT_OFFSET UNITYSDK_OFFSET(0x1C5F1C50)
#define LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_QUARTEASEINOUT_OFFSET UNITYSDK_OFFSET(0x1C5F2870)
#define LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_QUARTEASEIN_OFFSET UNITYSDK_OFFSET(0x1C5F27C0)
#define LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_QUARTEASEOUTIN_OFFSET UNITYSDK_OFFSET(0x1C5F2970)
#define LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_QUARTEASEOUT_OFFSET UNITYSDK_OFFSET(0x1C5F2700)
#define LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_QUINTEASEINOUT_OFFSET UNITYSDK_OFFSET(0x1C5F2C30)
#define LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_QUINTEASEIN_OFFSET UNITYSDK_OFFSET(0x1C5F2B80)
#define LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_QUINTEASEOUTIN_OFFSET UNITYSDK_OFFSET(0x1C5F2D30)
#define LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_QUINTEASEOUT_OFFSET UNITYSDK_OFFSET(0x1C5F2AC0)
#define LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_SINEEASEINOUT_OFFSET UNITYSDK_OFFSET(0x1C5F2120)
#define LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_SINEEASEIN_OFFSET UNITYSDK_OFFSET(0x1C5F2070)
#define LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_SINEEASEOUTIN_OFFSET UNITYSDK_OFFSET(0x1C5F2240)
#define LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_SINEEASEOUT_OFFSET UNITYSDK_OFFSET(0x1C5F1FC0)
#define LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5F3FE0)

namespace LookOrFeel::Animation
{
	inline static constexpr unsigned int PennerDoubleAnimation_TypeDefinitionIndex = 7831;

	class PennerDoubleAnimation : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION__CTOR_OFFSET))(this);
		}

		static ::System::Double Linear(::System::Double t, ::System::Double b, ::System::Double c, ::System::Double d)
		{
			return ((::System::Double(*)(::System::Double, ::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_LINEAR_OFFSET))(t, b, c, d);
		}

		static ::System::Double ExpoEaseOut(::System::Double t, ::System::Double b, ::System::Double c, ::System::Double d)
		{
			return ((::System::Double(*)(::System::Double, ::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_EXPOEASEOUT_OFFSET))(t, b, c, d);
		}

		static ::System::Double ExpoEaseIn(::System::Double t, ::System::Double b, ::System::Double c, ::System::Double d)
		{
			return ((::System::Double(*)(::System::Double, ::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_EXPOEASEIN_OFFSET))(t, b, c, d);
		}

		static ::System::Double ExpoEaseInOut(::System::Double t, ::System::Double b, ::System::Double c, ::System::Double d)
		{
			return ((::System::Double(*)(::System::Double, ::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_EXPOEASEINOUT_OFFSET))(t, b, c, d);
		}

		static ::System::Double ExpoEaseOutIn(::System::Double t, ::System::Double b, ::System::Double c, ::System::Double d)
		{
			return ((::System::Double(*)(::System::Double, ::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_EXPOEASEOUTIN_OFFSET))(t, b, c, d);
		}

		static ::System::Double CircEaseOut(::System::Double t, ::System::Double b, ::System::Double c, ::System::Double d)
		{
			return ((::System::Double(*)(::System::Double, ::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_CIRCEASEOUT_OFFSET))(t, b, c, d);
		}

		static ::System::Double CircEaseIn(::System::Double t, ::System::Double b, ::System::Double c, ::System::Double d)
		{
			return ((::System::Double(*)(::System::Double, ::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_CIRCEASEIN_OFFSET))(t, b, c, d);
		}

		static ::System::Double CircEaseInOut(::System::Double t, ::System::Double b, ::System::Double c, ::System::Double d)
		{
			return ((::System::Double(*)(::System::Double, ::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_CIRCEASEINOUT_OFFSET))(t, b, c, d);
		}

		static ::System::Double CircEaseOutIn(::System::Double t, ::System::Double b, ::System::Double c, ::System::Double d)
		{
			return ((::System::Double(*)(::System::Double, ::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_CIRCEASEOUTIN_OFFSET))(t, b, c, d);
		}

		static ::System::Double QuadEaseOut(::System::Double t, ::System::Double b, ::System::Double c, ::System::Double d)
		{
			return ((::System::Double(*)(::System::Double, ::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_QUADEASEOUT_OFFSET))(t, b, c, d);
		}

		static ::System::Double QuadEaseIn(::System::Double t, ::System::Double b, ::System::Double c, ::System::Double d)
		{
			return ((::System::Double(*)(::System::Double, ::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_QUADEASEIN_OFFSET))(t, b, c, d);
		}

		static ::System::Double QuadEaseInOut(::System::Double t, ::System::Double b, ::System::Double c, ::System::Double d)
		{
			return ((::System::Double(*)(::System::Double, ::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_QUADEASEINOUT_OFFSET))(t, b, c, d);
		}

		static ::System::Double QuadEaseOutIn(::System::Double t, ::System::Double b, ::System::Double c, ::System::Double d)
		{
			return ((::System::Double(*)(::System::Double, ::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_QUADEASEOUTIN_OFFSET))(t, b, c, d);
		}

		static ::System::Double SineEaseOut(::System::Double t, ::System::Double b, ::System::Double c, ::System::Double d)
		{
			return ((::System::Double(*)(::System::Double, ::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_SINEEASEOUT_OFFSET))(t, b, c, d);
		}

		static ::System::Double SineEaseIn(::System::Double t, ::System::Double b, ::System::Double c, ::System::Double d)
		{
			return ((::System::Double(*)(::System::Double, ::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_SINEEASEIN_OFFSET))(t, b, c, d);
		}

		static ::System::Double SineEaseInOut(::System::Double t, ::System::Double b, ::System::Double c, ::System::Double d)
		{
			return ((::System::Double(*)(::System::Double, ::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_SINEEASEINOUT_OFFSET))(t, b, c, d);
		}

		static ::System::Double SineEaseOutIn(::System::Double t, ::System::Double b, ::System::Double c, ::System::Double d)
		{
			return ((::System::Double(*)(::System::Double, ::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_SINEEASEOUTIN_OFFSET))(t, b, c, d);
		}

		static ::System::Double CubicEaseOut(::System::Double t, ::System::Double b, ::System::Double c, ::System::Double d)
		{
			return ((::System::Double(*)(::System::Double, ::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_CUBICEASEOUT_OFFSET))(t, b, c, d);
		}

		static ::System::Double CubicEaseIn(::System::Double t, ::System::Double b, ::System::Double c, ::System::Double d)
		{
			return ((::System::Double(*)(::System::Double, ::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_CUBICEASEIN_OFFSET))(t, b, c, d);
		}

		static ::System::Double CubicEaseInOut(::System::Double t, ::System::Double b, ::System::Double c, ::System::Double d)
		{
			return ((::System::Double(*)(::System::Double, ::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_CUBICEASEINOUT_OFFSET))(t, b, c, d);
		}

		static ::System::Double CubicEaseOutIn(::System::Double t, ::System::Double b, ::System::Double c, ::System::Double d)
		{
			return ((::System::Double(*)(::System::Double, ::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_CUBICEASEOUTIN_OFFSET))(t, b, c, d);
		}

		static ::System::Double QuartEaseOut(::System::Double t, ::System::Double b, ::System::Double c, ::System::Double d)
		{
			return ((::System::Double(*)(::System::Double, ::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_QUARTEASEOUT_OFFSET))(t, b, c, d);
		}

		static ::System::Double QuartEaseIn(::System::Double t, ::System::Double b, ::System::Double c, ::System::Double d)
		{
			return ((::System::Double(*)(::System::Double, ::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_QUARTEASEIN_OFFSET))(t, b, c, d);
		}

		static ::System::Double QuartEaseInOut(::System::Double t, ::System::Double b, ::System::Double c, ::System::Double d)
		{
			return ((::System::Double(*)(::System::Double, ::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_QUARTEASEINOUT_OFFSET))(t, b, c, d);
		}

		static ::System::Double QuartEaseOutIn(::System::Double t, ::System::Double b, ::System::Double c, ::System::Double d)
		{
			return ((::System::Double(*)(::System::Double, ::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_QUARTEASEOUTIN_OFFSET))(t, b, c, d);
		}

		static ::System::Double QuintEaseOut(::System::Double t, ::System::Double b, ::System::Double c, ::System::Double d)
		{
			return ((::System::Double(*)(::System::Double, ::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_QUINTEASEOUT_OFFSET))(t, b, c, d);
		}

		static ::System::Double QuintEaseIn(::System::Double t, ::System::Double b, ::System::Double c, ::System::Double d)
		{
			return ((::System::Double(*)(::System::Double, ::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_QUINTEASEIN_OFFSET))(t, b, c, d);
		}

		static ::System::Double QuintEaseInOut(::System::Double t, ::System::Double b, ::System::Double c, ::System::Double d)
		{
			return ((::System::Double(*)(::System::Double, ::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_QUINTEASEINOUT_OFFSET))(t, b, c, d);
		}

		static ::System::Double QuintEaseOutIn(::System::Double t, ::System::Double b, ::System::Double c, ::System::Double d)
		{
			return ((::System::Double(*)(::System::Double, ::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_QUINTEASEOUTIN_OFFSET))(t, b, c, d);
		}

		static ::System::Double ElasticEaseOut(::System::Double t, ::System::Double b, ::System::Double c, ::System::Double d)
		{
			return ((::System::Double(*)(::System::Double, ::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_ELASTICEASEOUT_OFFSET))(t, b, c, d);
		}

		static ::System::Double ElasticEaseIn(::System::Double t, ::System::Double b, ::System::Double c, ::System::Double d)
		{
			return ((::System::Double(*)(::System::Double, ::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_ELASTICEASEIN_OFFSET))(t, b, c, d);
		}

		static ::System::Double ElasticEaseInOut(::System::Double t, ::System::Double b, ::System::Double c, ::System::Double d)
		{
			return ((::System::Double(*)(::System::Double, ::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_ELASTICEASEINOUT_OFFSET))(t, b, c, d);
		}

		static ::System::Double ElasticEaseOutIn(::System::Double t, ::System::Double b, ::System::Double c, ::System::Double d)
		{
			return ((::System::Double(*)(::System::Double, ::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_ELASTICEASEOUTIN_OFFSET))(t, b, c, d);
		}

		static ::System::Double BounceEaseOut(::System::Double t, ::System::Double b, ::System::Double c, ::System::Double d)
		{
			return ((::System::Double(*)(::System::Double, ::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_BOUNCEEASEOUT_OFFSET))(t, b, c, d);
		}

		static ::System::Double BounceEaseIn(::System::Double t, ::System::Double b, ::System::Double c, ::System::Double d)
		{
			return ((::System::Double(*)(::System::Double, ::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_BOUNCEEASEIN_OFFSET))(t, b, c, d);
		}

		static ::System::Double BounceEaseInOut(::System::Double t, ::System::Double b, ::System::Double c, ::System::Double d)
		{
			return ((::System::Double(*)(::System::Double, ::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_BOUNCEEASEINOUT_OFFSET))(t, b, c, d);
		}

		static ::System::Double BounceEaseOutIn(::System::Double t, ::System::Double b, ::System::Double c, ::System::Double d)
		{
			return ((::System::Double(*)(::System::Double, ::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_BOUNCEEASEOUTIN_OFFSET))(t, b, c, d);
		}

		static ::System::Double BackEaseOut(::System::Double t, ::System::Double b, ::System::Double c, ::System::Double d)
		{
			return ((::System::Double(*)(::System::Double, ::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_BACKEASEOUT_OFFSET))(t, b, c, d);
		}

		static ::System::Double BackEaseIn(::System::Double t, ::System::Double b, ::System::Double c, ::System::Double d)
		{
			return ((::System::Double(*)(::System::Double, ::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_BACKEASEIN_OFFSET))(t, b, c, d);
		}

		static ::System::Double BackEaseInOut(::System::Double t, ::System::Double b, ::System::Double c, ::System::Double d)
		{
			return ((::System::Double(*)(::System::Double, ::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_BACKEASEINOUT_OFFSET))(t, b, c, d);
		}

		static ::System::Double BackEaseOutIn(::System::Double t, ::System::Double b, ::System::Double c, ::System::Double d)
		{
			return ((::System::Double(*)(::System::Double, ::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_BACKEASEOUTIN_OFFSET))(t, b, c, d);
		}
	};
}
