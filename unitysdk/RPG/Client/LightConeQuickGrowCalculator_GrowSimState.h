#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client
{
	inline static constexpr unsigned int LightConeQuickGrowCalculator_GrowSimState_TypeDefinitionIndex = 62799;

	struct alignas(4) LightConeQuickGrowCalculator_GrowSimState
	{
		::System::UInt32 LightConeLevel; // 0x10
		::System::UInt32 AccumulatedExp; // 0x14
		::System::UInt32 PromotionLevel; // 0x18
	};
}
