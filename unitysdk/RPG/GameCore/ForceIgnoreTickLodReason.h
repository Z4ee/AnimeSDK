#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ForceIgnoreTickLodReason_TypeDefinitionIndex = 55214;

	enum class ForceIgnoreTickLodReason : ::System::Int32
	{
		EntityType = 0,
		TeamMemeber = 1,
		Alert = 2,
		AIState = 3,
		Mission = 4,
		AnimatorLodCalc = 5,
		CommandRobotControlNpc = 6,
		IsometricView = 7,
		TimelineControlGame = 8,
		Puzzle = 9,
		TimeRewind = 10,
		FiveDim = 11,
		FormationMove = 12,
		PropCurveMove = 13,
		PropMoveTo = 14,
	};
}
