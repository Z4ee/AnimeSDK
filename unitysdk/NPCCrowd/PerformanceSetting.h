#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd
{
	inline static constexpr unsigned int PerformanceSetting_TypeDefinitionIndex = 76460;

	struct alignas(4) PerformanceSetting
	{
		::System::Int32 npcLimit; // 0x10
		::System::Single populationRatio; // 0x14
	};
}
