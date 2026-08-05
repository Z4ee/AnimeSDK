#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCPathGraphManager_PopulationLimitEntry_TypeDefinitionIndex = 51826;

	struct alignas(4) NPCPathGraphManager_PopulationLimitEntry
	{
		::System::Int32 Count; // 0x10
		::System::Int32 Max; // 0x14
	};
}
