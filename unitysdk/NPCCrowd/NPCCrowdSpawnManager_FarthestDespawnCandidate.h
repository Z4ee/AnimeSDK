#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCCrowdSpawnManager_FarthestDespawnCandidate_TypeDefinitionIndex = 48993;

	struct alignas(4) NPCCrowdSpawnManager_FarthestDespawnCandidate
	{
		::System::UInt32 entityID; // 0x10
		::System::Single distanceSq; // 0x14
	};
}
