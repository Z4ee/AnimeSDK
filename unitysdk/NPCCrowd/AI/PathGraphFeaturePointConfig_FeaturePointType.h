#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphFeaturePointConfig_FeaturePointType_TypeDefinitionIndex = 84751;

	enum class PathGraphFeaturePointConfig_FeaturePointType : ::System::Int32
	{
		None = 0,
		SpawnPoint = 1,
		BatchSpawnPoint = 5,
		GuidePoint = 4,
		CrossingPoint = 3,
		ExitPoint = 2,
		SplineSpawnPoint = 6,
	};
}
