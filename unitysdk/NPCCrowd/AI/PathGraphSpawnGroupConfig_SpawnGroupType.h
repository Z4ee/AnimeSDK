#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphSpawnGroupConfig_SpawnGroupType_TypeDefinitionIndex = 53281;

	enum class PathGraphSpawnGroupConfig_SpawnGroupType : ::System::Int32
	{
		None = 0,
		GuidePointPath = 1,
		CrossingBatchSpawn = 2,
	};
}
