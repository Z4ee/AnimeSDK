#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/TransformTR.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphBatchSpawnPointConfig_SpawnSlot_TypeDefinitionIndex = 61762;

	struct alignas(4) PathGraphBatchSpawnPointConfig_SpawnSlot
	{
		::NPCCrowd::AI::TransformTR transform; // 0x10
		::System::Int32 laneIndex; // 0x2C
		::System::Single laneInnerOffset; // 0x30
	};
}
