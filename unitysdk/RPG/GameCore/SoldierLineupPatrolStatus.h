#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int SoldierLineupPatrolStatus_TypeDefinitionIndex = 50057;

	enum class SoldierLineupPatrolStatus : ::System::Int32
	{
		None = 0,
		WaitOfficer = 1,
		WaitOrder = 2,
		GotoTargetPosition = 3,
	};
}
