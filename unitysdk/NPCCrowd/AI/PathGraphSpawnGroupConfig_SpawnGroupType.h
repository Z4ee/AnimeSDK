#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphSpawnGroupConfig_SpawnGroupType_TypeDefinitionIndex = 58994;

	enum class PathGraphSpawnGroupConfig_SpawnGroupType : ::System::Int32
	{
		GuidePointPath = 1,
		None = 0,
		CrossingBatchSpawn = 2,
	};
}
