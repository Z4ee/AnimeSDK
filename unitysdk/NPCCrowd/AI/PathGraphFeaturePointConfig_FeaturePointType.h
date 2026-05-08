#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphFeaturePointConfig_FeaturePointType_TypeDefinitionIndex = 40785;

	enum class PathGraphFeaturePointConfig_FeaturePointType : ::System::Int32
	{
		ExitPoint = 2,
		None = 0,
		CrossingPoint = 3,
		BatchSpawnPoint = 5,
		SplineSpawnPoint = 6,
		GuidePoint = 4,
		SpawnPoint = 1,
	};
}
