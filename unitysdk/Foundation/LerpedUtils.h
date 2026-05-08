#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/LerpFunc.h"
#include "unitysdk/System/Object.h"

#define FOUNDATION_LERPEDUTILS_CALCULATEALPHACLAMPED_OFFSET UNITYSDK_OFFSET(0x1C137710)
#define FOUNDATION_LERPEDUTILS_CALCULATEALPHAUNCLAMPED_OFFSET UNITYSDK_OFFSET(0x1C136D40)
#define FOUNDATION_LERPEDUTILS__CALCULATEALPHAUNCLAMPED_G__CIRCULARINOUT_1_17_OFFSET UNITYSDK_OFFSET(0x1C1375F0)
#define FOUNDATION_LERPEDUTILS__CALCULATEALPHAUNCLAMPED_G__CIRCULARIN_1_15_OFFSET UNITYSDK_OFFSET(0x1C137570)
#define FOUNDATION_LERPEDUTILS__CALCULATEALPHAUNCLAMPED_G__CIRCULAROUT_1_16_OFFSET UNITYSDK_OFFSET(0x1C1375C0)
#define FOUNDATION_LERPEDUTILS__CALCULATEALPHAUNCLAMPED_G__EASEINOUT_1_11_OFFSET UNITYSDK_OFFSET(0x1C1373D0)
#define FOUNDATION_LERPEDUTILS__CALCULATEALPHAUNCLAMPED_G__EASEIN_1_9_OFFSET UNITYSDK_OFFSET(0x1C137380)
#define FOUNDATION_LERPEDUTILS__CALCULATEALPHAUNCLAMPED_G__EASEOUT_1_10_OFFSET UNITYSDK_OFFSET(0x1C137390)
#define FOUNDATION_LERPEDUTILS__CALCULATEALPHAUNCLAMPED_G__EXPOINOUT_1_14_OFFSET UNITYSDK_OFFSET(0x1C1374C0)
#define FOUNDATION_LERPEDUTILS__CALCULATEALPHAUNCLAMPED_G__EXPOIN_1_12_OFFSET UNITYSDK_OFFSET(0x1C137440)
#define FOUNDATION_LERPEDUTILS__CALCULATEALPHAUNCLAMPED_G__EXPOOUT_1_13_OFFSET UNITYSDK_OFFSET(0x1C137470)
#define FOUNDATION_LERPEDUTILS__CALCULATEALPHAUNCLAMPED_G__LINEAR_1_0_OFFSET UNITYSDK_OFFSET(0x1C137260)
#define FOUNDATION_LERPEDUTILS__CALCULATEALPHAUNCLAMPED_G__LOWERHALFALPHA_1_2_OFFSET UNITYSDK_OFFSET(0x1C137C00)
#define FOUNDATION_LERPEDUTILS__CALCULATEALPHAUNCLAMPED_G__LOWERHALFVALUE_1_4_OFFSET UNITYSDK_OFFSET(0x1C137C20)
#define FOUNDATION_LERPEDUTILS__CALCULATEALPHAUNCLAMPED_G__SININOUT_1_8_OFFSET UNITYSDK_OFFSET(0x1C137300)
#define FOUNDATION_LERPEDUTILS__CALCULATEALPHAUNCLAMPED_G__SININ_1_6_OFFSET UNITYSDK_OFFSET(0x1C1372B0)
#define FOUNDATION_LERPEDUTILS__CALCULATEALPHAUNCLAMPED_G__SINOUT_1_7_OFFSET UNITYSDK_OFFSET(0x1C1372F0)
#define FOUNDATION_LERPEDUTILS__CALCULATEALPHAUNCLAMPED_G__SMOOTHARRIVAL_1_18_OFFSET UNITYSDK_OFFSET(0x1C1376B0)
#define FOUNDATION_LERPEDUTILS__CALCULATEALPHAUNCLAMPED_G__SMOOTHDEPARTURE_1_19_OFFSET UNITYSDK_OFFSET(0x1C1376E0)
#define FOUNDATION_LERPEDUTILS__CALCULATEALPHAUNCLAMPED_G__SMOOTHSTEP_1_20_OFFSET UNITYSDK_OFFSET(0x1C1376F0)
#define FOUNDATION_LERPEDUTILS__CALCULATEALPHAUNCLAMPED_G__STEP_1_1_OFFSET UNITYSDK_OFFSET(0x1C137270)
#define FOUNDATION_LERPEDUTILS__CALCULATEALPHAUNCLAMPED_G__UPPERHALFALPHA_1_3_OFFSET UNITYSDK_OFFSET(0x1C137C10)
#define FOUNDATION_LERPEDUTILS__CALCULATEALPHAUNCLAMPED_G__UPPERHALFVALUE_1_5_OFFSET UNITYSDK_OFFSET(0x1C137C30)

namespace Foundation
{
	inline static constexpr unsigned int LerpedUtils_TypeDefinitionIndex = 8855;

	class LerpedUtils : public ::System::Object
	{
	public:
		static ::System::Single CalculateAlphaUnclamped(::System::Single ratio, ::Foundation::LerpFunc func, ::System::Single metaParam)
		{
			return ((::System::Single(*)(::System::Single, ::Foundation::LerpFunc, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_LERPEDUTILS_CALCULATEALPHAUNCLAMPED_OFFSET))(ratio, func, metaParam);
		}

		static ::System::Single CalculateAlphaClamped(::System::Single ratio, ::Foundation::LerpFunc func, ::System::Single metaParam)
		{
			return ((::System::Single(*)(::System::Single, ::Foundation::LerpFunc, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_LERPEDUTILS_CALCULATEALPHACLAMPED_OFFSET))(ratio, func, metaParam);
		}

		static ::System::Single _CalculateAlphaUnclamped_g__Linear_1_0(::System::Single alpha)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_LERPEDUTILS__CALCULATEALPHAUNCLAMPED_G__LINEAR_1_0_OFFSET))(alpha);
		}

		static ::System::Single _CalculateAlphaUnclamped_g__Step_1_1(::System::Single alpha, ::System::Int32 step)
		{
			return ((::System::Single(*)(::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_LERPEDUTILS__CALCULATEALPHAUNCLAMPED_G__STEP_1_1_OFFSET))(alpha, step);
		}

		static ::System::Single _CalculateAlphaUnclamped_g__LowerHalfAlpha_1_2(::System::Single alpha)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_LERPEDUTILS__CALCULATEALPHAUNCLAMPED_G__LOWERHALFALPHA_1_2_OFFSET))(alpha);
		}

		static ::System::Single _CalculateAlphaUnclamped_g__UpperHalfAlpha_1_3(::System::Single alpha)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_LERPEDUTILS__CALCULATEALPHAUNCLAMPED_G__UPPERHALFALPHA_1_3_OFFSET))(alpha);
		}

		static ::System::Single _CalculateAlphaUnclamped_g__LowerHalfValue_1_4(::System::Single value)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_LERPEDUTILS__CALCULATEALPHAUNCLAMPED_G__LOWERHALFVALUE_1_4_OFFSET))(value);
		}

		static ::System::Single _CalculateAlphaUnclamped_g__UpperHalfValue_1_5(::System::Single value)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_LERPEDUTILS__CALCULATEALPHAUNCLAMPED_G__UPPERHALFVALUE_1_5_OFFSET))(value);
		}

		static ::System::Single _CalculateAlphaUnclamped_g__SinIn_1_6(::System::Single alpha)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_LERPEDUTILS__CALCULATEALPHAUNCLAMPED_G__SININ_1_6_OFFSET))(alpha);
		}

		static ::System::Single _CalculateAlphaUnclamped_g__SinOut_1_7(::System::Single alpha)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_LERPEDUTILS__CALCULATEALPHAUNCLAMPED_G__SINOUT_1_7_OFFSET))(alpha);
		}

		static ::System::Single _CalculateAlphaUnclamped_g__SinInOut_1_8(::System::Single alpha)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_LERPEDUTILS__CALCULATEALPHAUNCLAMPED_G__SININOUT_1_8_OFFSET))(alpha);
		}

		static ::System::Single _CalculateAlphaUnclamped_g__EaseIn_1_9(::System::Single alpha, ::System::Single exp)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_LERPEDUTILS__CALCULATEALPHAUNCLAMPED_G__EASEIN_1_9_OFFSET))(alpha, exp);
		}

		static ::System::Single _CalculateAlphaUnclamped_g__EaseOut_1_10(::System::Single alpha, ::System::Single exp)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_LERPEDUTILS__CALCULATEALPHAUNCLAMPED_G__EASEOUT_1_10_OFFSET))(alpha, exp);
		}

		static ::System::Single _CalculateAlphaUnclamped_g__EaseInOut_1_11(::System::Single alpha, ::System::Single exp)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_LERPEDUTILS__CALCULATEALPHAUNCLAMPED_G__EASEINOUT_1_11_OFFSET))(alpha, exp);
		}

		static ::System::Single _CalculateAlphaUnclamped_g__ExpoIn_1_12(::System::Single alpha)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_LERPEDUTILS__CALCULATEALPHAUNCLAMPED_G__EXPOIN_1_12_OFFSET))(alpha);
		}

		static ::System::Single _CalculateAlphaUnclamped_g__ExpoOut_1_13(::System::Single alpha)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_LERPEDUTILS__CALCULATEALPHAUNCLAMPED_G__EXPOOUT_1_13_OFFSET))(alpha);
		}

		static ::System::Single _CalculateAlphaUnclamped_g__ExpoInOut_1_14(::System::Single alpha)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_LERPEDUTILS__CALCULATEALPHAUNCLAMPED_G__EXPOINOUT_1_14_OFFSET))(alpha);
		}

		static ::System::Single _CalculateAlphaUnclamped_g__CircularIn_1_15(::System::Single alpha)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_LERPEDUTILS__CALCULATEALPHAUNCLAMPED_G__CIRCULARIN_1_15_OFFSET))(alpha);
		}

		static ::System::Single _CalculateAlphaUnclamped_g__CircularOut_1_16(::System::Single alpha)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_LERPEDUTILS__CALCULATEALPHAUNCLAMPED_G__CIRCULAROUT_1_16_OFFSET))(alpha);
		}

		static ::System::Single _CalculateAlphaUnclamped_g__CircularInOut_1_17(::System::Single alpha)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_LERPEDUTILS__CALCULATEALPHAUNCLAMPED_G__CIRCULARINOUT_1_17_OFFSET))(alpha);
		}

		static ::System::Single _CalculateAlphaUnclamped_g__SmoothArrival_1_18(::System::Single alpha)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_LERPEDUTILS__CALCULATEALPHAUNCLAMPED_G__SMOOTHARRIVAL_1_18_OFFSET))(alpha);
		}

		static ::System::Single _CalculateAlphaUnclamped_g__SmoothDeparture_1_19(::System::Single alpha)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_LERPEDUTILS__CALCULATEALPHAUNCLAMPED_G__SMOOTHDEPARTURE_1_19_OFFSET))(alpha);
		}

		static ::System::Single _CalculateAlphaUnclamped_g__SmoothStep_1_20(::System::Single alpha)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_LERPEDUTILS__CALCULATEALPHAUNCLAMPED_G__SMOOTHSTEP_1_20_OFFSET))(alpha);
		}
	};
}
