#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_BACKEASEINOUT_OFFSET UNITYSDK_OFFSET(0x1D98F0F0)
#define LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_BACKEASEIN_OFFSET UNITYSDK_OFFSET(0x1D98F030)
#define LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_BACKEASEOUTIN_OFFSET UNITYSDK_OFFSET(0x1D98F200)
#define LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_BACKEASEOUT_OFFSET UNITYSDK_OFFSET(0x1D98EF60)
#define LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_BOUNCEEASEINOUT_OFFSET UNITYSDK_OFFSET(0x1D98EBA0)
#define LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_BOUNCEEASEIN_OFFSET UNITYSDK_OFFSET(0x1D98E9E0)
#define LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_BOUNCEEASEOUTIN_OFFSET UNITYSDK_OFFSET(0x1D98ED90)
#define LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_BOUNCEEASEOUT_OFFSET UNITYSDK_OFFSET(0x1D98E890)
#define LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_CIRCEASEINOUT_OFFSET UNITYSDK_OFFSET(0x1D98CD00)
#define LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_CIRCEASEIN_OFFSET UNITYSDK_OFFSET(0x1D98CC30)
#define LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_CIRCEASEOUTIN_OFFSET UNITYSDK_OFFSET(0x1D98CE20)
#define LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_CIRCEASEOUT_OFFSET UNITYSDK_OFFSET(0x1D98CB70)
#define LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_CUBICEASEINOUT_OFFSET UNITYSDK_OFFSET(0x1D98D820)
#define LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_CUBICEASEIN_OFFSET UNITYSDK_OFFSET(0x1D98D780)
#define LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_CUBICEASEOUTIN_OFFSET UNITYSDK_OFFSET(0x1D98D920)
#define LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_CUBICEASEOUT_OFFSET UNITYSDK_OFFSET(0x1D98D6D0)
#define LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_ELASTICEASEINOUT_OFFSET UNITYSDK_OFFSET(0x1D98E4A0)
#define LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_ELASTICEASEIN_OFFSET UNITYSDK_OFFSET(0x1D98E340)
#define LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_ELASTICEASEOUTIN_OFFSET UNITYSDK_OFFSET(0x1D98E630)
#define LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_ELASTICEASEOUT_OFFSET UNITYSDK_OFFSET(0x1D98E1F0)
#define LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_EXPOEASEINOUT_OFFSET UNITYSDK_OFFSET(0x1D98C8C0)
#define LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_EXPOEASEIN_OFFSET UNITYSDK_OFFSET(0x1D98C7F0)
#define LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_EXPOEASEOUTIN_OFFSET UNITYSDK_OFFSET(0x1D98C9F0)
#define LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_EXPOEASEOUT_OFFSET UNITYSDK_OFFSET(0x1D98C720)
#define LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_LINEAR_OFFSET UNITYSDK_OFFSET(0x1D98C680)
#define LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_QUADEASEINOUT_OFFSET UNITYSDK_OFFSET(0x1D98D0F0)
#define LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_QUADEASEIN_OFFSET UNITYSDK_OFFSET(0x1D98D050)
#define LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_QUADEASEOUTIN_OFFSET UNITYSDK_OFFSET(0x1D98D1E0)
#define LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_QUADEASEOUT_OFFSET UNITYSDK_OFFSET(0x1D98CFA0)
#define LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_QUARTEASEINOUT_OFFSET UNITYSDK_OFFSET(0x1D98DBD0)
#define LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_QUARTEASEIN_OFFSET UNITYSDK_OFFSET(0x1D98DB20)
#define LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_QUARTEASEOUTIN_OFFSET UNITYSDK_OFFSET(0x1D98DCD0)
#define LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_QUARTEASEOUT_OFFSET UNITYSDK_OFFSET(0x1D98DA60)
#define LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_QUINTEASEINOUT_OFFSET UNITYSDK_OFFSET(0x1D98DF90)
#define LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_QUINTEASEIN_OFFSET UNITYSDK_OFFSET(0x1D98DEE0)
#define LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_QUINTEASEOUTIN_OFFSET UNITYSDK_OFFSET(0x1D98E0A0)
#define LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_QUINTEASEOUT_OFFSET UNITYSDK_OFFSET(0x1D98DE20)
#define LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_SINEEASEINOUT_OFFSET UNITYSDK_OFFSET(0x1D98D470)
#define LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_SINEEASEIN_OFFSET UNITYSDK_OFFSET(0x1D98D3C0)
#define LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_SINEEASEOUTIN_OFFSET UNITYSDK_OFFSET(0x1D98D590)
#define LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION_SINEEASEOUT_OFFSET UNITYSDK_OFFSET(0x1D98D310)
#define LOOKORFEEL_ANIMATION_PENNERDOUBLEANIMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D98F370)

namespace LookOrFeel::Animation
{
	inline static constexpr unsigned int PennerDoubleAnimation_TypeDefinitionIndex = 8450;

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
