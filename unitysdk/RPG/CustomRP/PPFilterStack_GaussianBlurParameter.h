#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/GaussianBlurGradual.h"
#include "unitysdk/System/ValueType.h"

#define RPG_CUSTOMRP_PPFILTERSTACK_GAUSSIANBLURPARAMETER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3A98F50)
#define RPG_CUSTOMRP_PPFILTERSTACK_GAUSSIANBLURPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x3A98EF0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int PPFilterStack_GaussianBlurParameter_TypeDefinitionIndex = 52153;

	struct alignas(4) PPFilterStack_GaussianBlurParameter
	{
		::System::Boolean GaussianBlurOverrideState; // 0x10
		::System::Boolean GaussianBlurLightenoverrideState; // 0x11
		::System::Single GaussianBlurLightenIntensity; // 0x14
		::System::Boolean BlurScaleoverrideState; // 0x18
		::System::Single BlurScale; // 0x1C
		::System::Boolean GaussianBlurGradualParamoverrideState; // 0x20
		::RPG::CustomRP::GaussianBlurGradual GaussianBlurGradualParam; // 0x24
		::System::Boolean CenterXoverrideState; // 0x28
		::System::Single CenterX; // 0x2C
		::System::Boolean CenterYoverrideState; // 0x30
		::System::Single CenterY; // 0x34
		::System::Boolean StartRadiusoverrideState; // 0x38
		::System::Single StartRadius; // 0x3C
		::System::Boolean BlendRadiusoverrideState; // 0x40
		::System::Single BlendRadius; // 0x44
		::System::Boolean AngleoverrideState; // 0x48
		::System::Single Angle; // 0x4C

		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PPFILTERSTACK_GAUSSIANBLURPARAMETER__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::RPG::CustomRP::PPFilterStack_GaussianBlurParameter a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::PPFilterStack_GaussianBlurParameter, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PPFILTERSTACK_GAUSSIANBLURPARAMETER__CTOR_1_OFFSET))(this, a1, a2);
		}
	};
}
