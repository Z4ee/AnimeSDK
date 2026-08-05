#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphSpawnPointConfig_SpawnStyle_TypeDefinitionIndex = 41454;

	enum class PathGraphSpawnPointConfig_SpawnStyle : ::System::Int32
	{
		MoveToSplineNearestPoint = 5,
		TeleportToSplineEndPoint = 1,
		MoveToSplineEndPoint = 4,
		MoveBlendWithSplinePoints = 6,
		TeleportToSplineStartPoint = 0,
		MoveToSplineStartPoint = 3,
		TeleportToSplineNearestPoint = 2,
	};
}
