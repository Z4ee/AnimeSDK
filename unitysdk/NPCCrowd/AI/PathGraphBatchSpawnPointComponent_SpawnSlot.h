#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/TransformTR.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphBatchSpawnPointComponent_SpawnSlot_TypeDefinitionIndex = 49389;

	struct alignas(4) PathGraphBatchSpawnPointComponent_SpawnSlot
	{
		::NPCCrowd::AI::TransformTR transform; // 0x10
		::System::Int32 laneIndex; // 0x2C
		::System::Single laneInnerOffset; // 0x30
	};
}
