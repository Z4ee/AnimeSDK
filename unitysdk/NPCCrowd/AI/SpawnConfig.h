#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/SpawnCheckType.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int SpawnConfig_TypeDefinitionIndex = 64299;

	struct alignas(4) SpawnConfig
	{
		::System::Single spawnInterval; // 0x10
		::System::Single spawnVarious; // 0x14
		::NPCCrowd::AI::SpawnCheckType spawnCheckType; // 0x18
		::System::Single checkRadius; // 0x1C
		::System::Single weight; // 0x20
		::System::Boolean ignoreInnerRange; // 0x24
		::System::Boolean isWandering; // 0x25
	};
}
