#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/MotionBlurMethod.h"
#include "unitysdk/RPG/CustomRP/MotionBlurQuality.h"
#include "unitysdk/System/ValueType.h"

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int MotionBlurParameter_TypeDefinitionIndex = 46792;

	struct alignas(4) MotionBlurParameter
	{
		::System::Boolean MotionBlurMethodOverrideState; // 0x10
		::RPG::CustomRP::MotionBlurMethod BlurMethod; // 0x14
		::RPG::CustomRP::MotionBlurQuality BlurQuality; // 0x18
		::System::Single MotiongBlurAmount; // 0x1C
		::System::Int32 MotionBlurMax; // 0x20
	};
}
