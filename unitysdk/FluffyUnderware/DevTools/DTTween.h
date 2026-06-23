#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/DevTools/DTTween_EasingMethod.h"
#include "unitysdk/System/Object.h"

#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_CIRCINOUT_1_OFFSET UNITYSDK_OFFSET(0x1D697070)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_CIRCINOUT_OFFSET UNITYSDK_OFFSET(0x1D695AC0)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_CIRCIN_1_OFFSET UNITYSDK_OFFSET(0x1D696FB0)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_CIRCIN_OFFSET UNITYSDK_OFFSET(0x1D6959D0)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_CIRCOUTIN_1_OFFSET UNITYSDK_OFFSET(0x1D697120)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_CIRCOUTIN_OFFSET UNITYSDK_OFFSET(0x1D695B80)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_CIRCOUT_1_OFFSET UNITYSDK_OFFSET(0x1D697010)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_CIRCOUT_OFFSET UNITYSDK_OFFSET(0x1D695A40)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_CUBICINOUT_1_OFFSET UNITYSDK_OFFSET(0x1D697530)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_CUBICINOUT_OFFSET UNITYSDK_OFFSET(0x1D696090)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_CUBICIN_1_OFFSET UNITYSDK_OFFSET(0x1D6974E0)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_CUBICIN_OFFSET UNITYSDK_OFFSET(0x1D696000)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_CUBICOUTIN_1_OFFSET UNITYSDK_OFFSET(0x1D6975A0)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_CUBICOUTIN_OFFSET UNITYSDK_OFFSET(0x1D696110)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_CUBICOUT_1_OFFSET UNITYSDK_OFFSET(0x1D697500)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_CUBICOUT_OFFSET UNITYSDK_OFFSET(0x1D696030)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_EASE_1_OFFSET UNITYSDK_OFFSET(0x1D696570)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_EASE_OFFSET UNITYSDK_OFFSET(0x1D694C50)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_EXPOINOUT_1_OFFSET UNITYSDK_OFFSET(0x1D696E60)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_EXPOINOUT_OFFSET UNITYSDK_OFFSET(0x1D695840)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_EXPOIN_1_OFFSET UNITYSDK_OFFSET(0x1D696DA0)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_EXPOIN_OFFSET UNITYSDK_OFFSET(0x1D695750)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_EXPOOUTIN_1_OFFSET UNITYSDK_OFFSET(0x1D696F00)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_EXPOOUTIN_OFFSET UNITYSDK_OFFSET(0x1D6958F0)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_EXPOOUT_1_OFFSET UNITYSDK_OFFSET(0x1D696E00)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_EXPOOUT_OFFSET UNITYSDK_OFFSET(0x1D6957C0)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_LINEAR_1_OFFSET UNITYSDK_OFFSET(0x1D6978A0)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_LINEAR_OFFSET UNITYSDK_OFFSET(0x1D696550)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUADINOUT_1_OFFSET UNITYSDK_OFFSET(0x1D697230)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUADINOUT_OFFSET UNITYSDK_OFFSET(0x1D695CE0)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUADIN_1_OFFSET UNITYSDK_OFFSET(0x1D6971F0)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUADIN_OFFSET UNITYSDK_OFFSET(0x1D695C70)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUADOUTIN_1_OFFSET UNITYSDK_OFFSET(0x1D6972A0)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUADOUTIN_OFFSET UNITYSDK_OFFSET(0x1D695D50)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUADOUT_1_OFFSET UNITYSDK_OFFSET(0x1D697210)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUADOUT_OFFSET UNITYSDK_OFFSET(0x1D695CA0)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUARTINOUT_1_OFFSET UNITYSDK_OFFSET(0x1D697660)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUARTINOUT_OFFSET UNITYSDK_OFFSET(0x1D696240)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUARTIN_1_OFFSET UNITYSDK_OFFSET(0x1D697610)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUARTIN_OFFSET UNITYSDK_OFFSET(0x1D6961C0)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUARTOUTIN_1_OFFSET UNITYSDK_OFFSET(0x1D6976D0)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUARTOUTIN_OFFSET UNITYSDK_OFFSET(0x1D6962C0)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUARTOUT_1_OFFSET UNITYSDK_OFFSET(0x1D697630)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUARTOUT_OFFSET UNITYSDK_OFFSET(0x1D6961F0)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUINTINOUT_1_OFFSET UNITYSDK_OFFSET(0x1D6977A0)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUINTINOUT_OFFSET UNITYSDK_OFFSET(0x1D696400)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUINTIN_1_OFFSET UNITYSDK_OFFSET(0x1D697750)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUINTIN_OFFSET UNITYSDK_OFFSET(0x1D696370)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUINTOUTIN_1_OFFSET UNITYSDK_OFFSET(0x1D697820)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUINTOUTIN_OFFSET UNITYSDK_OFFSET(0x1D696490)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUINTOUT_1_OFFSET UNITYSDK_OFFSET(0x1D697770)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUINTOUT_OFFSET UNITYSDK_OFFSET(0x1D6963A0)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_SINEINOUT_1_OFFSET UNITYSDK_OFFSET(0x1D6973A0)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_SINEINOUT_OFFSET UNITYSDK_OFFSET(0x1D695E90)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_SINEIN_1_OFFSET UNITYSDK_OFFSET(0x1D697310)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_SINEIN_OFFSET UNITYSDK_OFFSET(0x1D695DE0)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_SINEOUTIN_1_OFFSET UNITYSDK_OFFSET(0x1D697450)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_SINEOUTIN_OFFSET UNITYSDK_OFFSET(0x1D695F50)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_SINEOUT_1_OFFSET UNITYSDK_OFFSET(0x1D697360)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_SINEOUT_OFFSET UNITYSDK_OFFSET(0x1D695E40)

namespace FluffyUnderware::DevTools
{
	inline static constexpr unsigned int DTTween_TypeDefinitionIndex = 28332;

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
