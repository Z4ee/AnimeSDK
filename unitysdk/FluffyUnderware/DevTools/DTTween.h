#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/DevTools/DTTween_EasingMethod.h"
#include "unitysdk/System/Object.h"

#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_CIRCINOUT_1_OFFSET UNITYSDK_OFFSET(0x1B2CED30)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_CIRCINOUT_OFFSET UNITYSDK_OFFSET(0x1B2CD780)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_CIRCIN_1_OFFSET UNITYSDK_OFFSET(0x1B2CEC70)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_CIRCIN_OFFSET UNITYSDK_OFFSET(0x1B2CD690)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_CIRCOUTIN_1_OFFSET UNITYSDK_OFFSET(0x1B2CEDE0)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_CIRCOUTIN_OFFSET UNITYSDK_OFFSET(0x1B2CD840)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_CIRCOUT_1_OFFSET UNITYSDK_OFFSET(0x1B2CECD0)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_CIRCOUT_OFFSET UNITYSDK_OFFSET(0x1B2CD700)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_CUBICINOUT_1_OFFSET UNITYSDK_OFFSET(0x1B2CF1F0)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_CUBICINOUT_OFFSET UNITYSDK_OFFSET(0x1B2CDD50)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_CUBICIN_1_OFFSET UNITYSDK_OFFSET(0x1B2CF1A0)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_CUBICIN_OFFSET UNITYSDK_OFFSET(0x1B2CDCC0)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_CUBICOUTIN_1_OFFSET UNITYSDK_OFFSET(0x1B2CF260)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_CUBICOUTIN_OFFSET UNITYSDK_OFFSET(0x1B2CDDD0)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_CUBICOUT_1_OFFSET UNITYSDK_OFFSET(0x1B2CF1C0)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_CUBICOUT_OFFSET UNITYSDK_OFFSET(0x1B2CDCF0)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_EASE_1_OFFSET UNITYSDK_OFFSET(0x1B2CE230)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_EASE_OFFSET UNITYSDK_OFFSET(0x1B2CC910)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_EXPOINOUT_1_OFFSET UNITYSDK_OFFSET(0x1B2CEB20)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_EXPOINOUT_OFFSET UNITYSDK_OFFSET(0x1B2CD500)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_EXPOIN_1_OFFSET UNITYSDK_OFFSET(0x1B2CEA60)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_EXPOIN_OFFSET UNITYSDK_OFFSET(0x1B2CD410)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_EXPOOUTIN_1_OFFSET UNITYSDK_OFFSET(0x1B2CEBC0)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_EXPOOUTIN_OFFSET UNITYSDK_OFFSET(0x1B2CD5B0)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_EXPOOUT_1_OFFSET UNITYSDK_OFFSET(0x1B2CEAC0)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_EXPOOUT_OFFSET UNITYSDK_OFFSET(0x1B2CD480)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_LINEAR_1_OFFSET UNITYSDK_OFFSET(0x1B2CF560)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_LINEAR_OFFSET UNITYSDK_OFFSET(0x1B2CE210)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUADINOUT_1_OFFSET UNITYSDK_OFFSET(0x1B2CEEF0)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUADINOUT_OFFSET UNITYSDK_OFFSET(0x1B2CD9A0)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUADIN_1_OFFSET UNITYSDK_OFFSET(0x1B2CEEB0)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUADIN_OFFSET UNITYSDK_OFFSET(0x1B2CD930)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUADOUTIN_1_OFFSET UNITYSDK_OFFSET(0x1B2CEF60)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUADOUTIN_OFFSET UNITYSDK_OFFSET(0x1B2CDA10)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUADOUT_1_OFFSET UNITYSDK_OFFSET(0x1B2CEED0)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUADOUT_OFFSET UNITYSDK_OFFSET(0x1B2CD960)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUARTINOUT_1_OFFSET UNITYSDK_OFFSET(0x1B2CF320)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUARTINOUT_OFFSET UNITYSDK_OFFSET(0x1B2CDF00)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUARTIN_1_OFFSET UNITYSDK_OFFSET(0x1B2CF2D0)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUARTIN_OFFSET UNITYSDK_OFFSET(0x1B2CDE80)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUARTOUTIN_1_OFFSET UNITYSDK_OFFSET(0x1B2CF390)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUARTOUTIN_OFFSET UNITYSDK_OFFSET(0x1B2CDF80)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUARTOUT_1_OFFSET UNITYSDK_OFFSET(0x1B2CF2F0)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUARTOUT_OFFSET UNITYSDK_OFFSET(0x1B2CDEB0)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUINTINOUT_1_OFFSET UNITYSDK_OFFSET(0x1B2CF460)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUINTINOUT_OFFSET UNITYSDK_OFFSET(0x1B2CE0C0)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUINTIN_1_OFFSET UNITYSDK_OFFSET(0x1B2CF410)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUINTIN_OFFSET UNITYSDK_OFFSET(0x1B2CE030)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUINTOUTIN_1_OFFSET UNITYSDK_OFFSET(0x1B2CF4E0)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUINTOUTIN_OFFSET UNITYSDK_OFFSET(0x1B2CE150)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUINTOUT_1_OFFSET UNITYSDK_OFFSET(0x1B2CF430)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUINTOUT_OFFSET UNITYSDK_OFFSET(0x1B2CE060)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_SINEINOUT_1_OFFSET UNITYSDK_OFFSET(0x1B2CF060)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_SINEINOUT_OFFSET UNITYSDK_OFFSET(0x1B2CDB50)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_SINEIN_1_OFFSET UNITYSDK_OFFSET(0x1B2CEFD0)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_SINEIN_OFFSET UNITYSDK_OFFSET(0x1B2CDAA0)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_SINEOUTIN_1_OFFSET UNITYSDK_OFFSET(0x1B2CF110)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_SINEOUTIN_OFFSET UNITYSDK_OFFSET(0x1B2CDC10)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_SINEOUT_1_OFFSET UNITYSDK_OFFSET(0x1B2CF020)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_SINEOUT_OFFSET UNITYSDK_OFFSET(0x1B2CDB00)

namespace FluffyUnderware::DevTools
{
	inline static constexpr unsigned int DTTween_TypeDefinitionIndex = 25838;

	class DTTween : public ::System::Object
	{
	public:
		static ::System::Single Ease(::FluffyUnderware::DevTools::DTTween_EasingMethod method, ::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::FluffyUnderware::DevTools::DTTween_EasingMethod, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_EASE_OFFSET))(method, t, b, c);
		}

		static ::System::Single Ease_1(::FluffyUnderware::DevTools::DTTween_EasingMethod method, ::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
		{
			return ((::System::Single(*)(::FluffyUnderware::DevTools::DTTween_EasingMethod, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_EASE_1_OFFSET))(method, t, b, c, d);
		}

		static ::System::Single Linear(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_LINEAR_OFFSET))(t, b, c);
		}

		static ::System::Single Linear_1(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_LINEAR_1_OFFSET))(t, b, c, d);
		}

		static ::System::Single ExpoOut(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_EXPOOUT_OFFSET))(t, b, c);
		}

		static ::System::Single ExpoOut_1(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_EXPOOUT_1_OFFSET))(t, b, c, d);
		}

		static ::System::Single ExpoIn(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_EXPOIN_OFFSET))(t, b, c);
		}

		static ::System::Single ExpoIn_1(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_EXPOIN_1_OFFSET))(t, b, c, d);
		}

		static ::System::Single ExpoInOut(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_EXPOINOUT_OFFSET))(t, b, c);
		}

		static ::System::Single ExpoInOut_1(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_EXPOINOUT_1_OFFSET))(t, b, c, d);
		}

		static ::System::Single ExpoOutIn(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_EXPOOUTIN_OFFSET))(t, b, c);
		}

		static ::System::Single ExpoOutIn_1(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_EXPOOUTIN_1_OFFSET))(t, b, c, d);
		}

		static ::System::Single CircOut(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_CIRCOUT_OFFSET))(t, b, c);
		}

		static ::System::Single CircOut_1(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_CIRCOUT_1_OFFSET))(t, b, c, d);
		}

		static ::System::Single CircIn(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_CIRCIN_OFFSET))(t, b, c);
		}

		static ::System::Single CircIn_1(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_CIRCIN_1_OFFSET))(t, b, c, d);
		}

		static ::System::Single CircInOut(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_CIRCINOUT_OFFSET))(t, b, c);
		}

		static ::System::Single CircInOut_1(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_CIRCINOUT_1_OFFSET))(t, b, c, d);
		}

		static ::System::Single CircOutIn(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_CIRCOUTIN_OFFSET))(t, b, c);
		}

		static ::System::Single CircOutIn_1(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_CIRCOUTIN_1_OFFSET))(t, b, c, d);
		}

		static ::System::Single QuadOut(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUADOUT_OFFSET))(t, b, c);
		}

		static ::System::Single QuadOut_1(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUADOUT_1_OFFSET))(t, b, c, d);
		}

		static ::System::Single QuadIn(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUADIN_OFFSET))(t, b, c);
		}

		static ::System::Single QuadIn_1(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUADIN_1_OFFSET))(t, b, c, d);
		}

		static ::System::Single QuadInOut(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUADINOUT_OFFSET))(t, b, c);
		}

		static ::System::Single QuadInOut_1(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUADINOUT_1_OFFSET))(t, b, c, d);
		}

		static ::System::Single QuadOutIn(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUADOUTIN_OFFSET))(t, b, c);
		}

		static ::System::Single QuadOutIn_1(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUADOUTIN_1_OFFSET))(t, b, c, d);
		}

		static ::System::Single SineOut(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_SINEOUT_OFFSET))(t, b, c);
		}

		static ::System::Single SineOut_1(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_SINEOUT_1_OFFSET))(t, b, c, d);
		}

		static ::System::Single SineIn(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_SINEIN_OFFSET))(t, b, c);
		}

		static ::System::Single SineIn_1(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_SINEIN_1_OFFSET))(t, b, c, d);
		}

		static ::System::Single SineInOut(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_SINEINOUT_OFFSET))(t, b, c);
		}

		static ::System::Single SineInOut_1(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_SINEINOUT_1_OFFSET))(t, b, c, d);
		}

		static ::System::Single SineOutIn(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_SINEOUTIN_OFFSET))(t, b, c);
		}

		static ::System::Single SineOutIn_1(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_SINEOUTIN_1_OFFSET))(t, b, c, d);
		}

		static ::System::Single CubicOut(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_CUBICOUT_OFFSET))(t, b, c);
		}

		static ::System::Single CubicOut_1(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_CUBICOUT_1_OFFSET))(t, b, c, d);
		}

		static ::System::Single CubicIn(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_CUBICIN_OFFSET))(t, b, c);
		}

		static ::System::Single CubicIn_1(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_CUBICIN_1_OFFSET))(t, b, c, d);
		}

		static ::System::Single CubicInOut(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_CUBICINOUT_OFFSET))(t, b, c);
		}

		static ::System::Single CubicInOut_1(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_CUBICINOUT_1_OFFSET))(t, b, c, d);
		}

		static ::System::Single CubicOutIn(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_CUBICOUTIN_OFFSET))(t, b, c);
		}

		static ::System::Single CubicOutIn_1(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_CUBICOUTIN_1_OFFSET))(t, b, c, d);
		}

		static ::System::Single QuartOut(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUARTOUT_OFFSET))(t, b, c);
		}

		static ::System::Single QuartOut_1(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUARTOUT_1_OFFSET))(t, b, c, d);
		}

		static ::System::Single QuartIn(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUARTIN_OFFSET))(t, b, c);
		}

		static ::System::Single QuartIn_1(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUARTIN_1_OFFSET))(t, b, c, d);
		}

		static ::System::Single QuartInOut(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUARTINOUT_OFFSET))(t, b, c);
		}

		static ::System::Single QuartInOut_1(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUARTINOUT_1_OFFSET))(t, b, c, d);
		}

		static ::System::Single QuartOutIn(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUARTOUTIN_OFFSET))(t, b, c);
		}

		static ::System::Single QuartOutIn_1(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUARTOUTIN_1_OFFSET))(t, b, c, d);
		}

		static ::System::Single QuintOut(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUINTOUT_OFFSET))(t, b, c);
		}

		static ::System::Single QuintOut_1(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUINTOUT_1_OFFSET))(t, b, c, d);
		}

		static ::System::Single QuintIn(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUINTIN_OFFSET))(t, b, c);
		}

		static ::System::Single QuintIn_1(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUINTIN_1_OFFSET))(t, b, c, d);
		}

		static ::System::Single QuintInOut(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUINTINOUT_OFFSET))(t, b, c);
		}

		static ::System::Single QuintInOut_1(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUINTINOUT_1_OFFSET))(t, b, c, d);
		}

		static ::System::Single QuintOutIn(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUINTOUTIN_OFFSET))(t, b, c);
		}

		static ::System::Single QuintOutIn_1(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUINTOUTIN_1_OFFSET))(t, b, c, d);
		}
	};
}
