#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/GaussianBlurGradual.h"
#include "unitysdk/System/ValueType.h"

#define RPGTOOLS_TIMELINE_POSTPROCESSING_GAUSSIANBLURPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x8AA10)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int GaussianBlurParameter_TypeDefinitionIndex = 39375;

	struct alignas(4) GaussianBlurParameter
	{
		::System::Boolean overrideState; // 0x10
		::System::Boolean GaussianBlurLightenEnable; // 0x11
		::System::Single GaussianBlurLightenIntensity; // 0x14
		::System::Single BlurScale; // 0x18
		::RPG::CustomRP::GaussianBlurGradual GaussianBlurGradualParam; // 0x1C
		::System::Single CenterX; // 0x20
		::System::Single CenterY; // 0x24
		::System::Single StartRadius; // 0x28
		::System::Single BlendRadius; // 0x2C
		::System::Single Angle; // 0x30

		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_GAUSSIANBLURPARAMETER__CTOR_OFFSET))(this, a1);
		}
	};
}
