#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtDefenceBatchSpawnTiming_TypeDefinitionIndex = 17338;

	enum class RtDefenceBatchSpawnTiming : ::System::Int32
	{
		Auto = 0,
		OnLastBatchStart = 1,
		OnLastBatchSpawnFinish = 2,
		OnLastBatchDie = 3,
		OnAllPreviousBatchDie = 4,
	};
}
