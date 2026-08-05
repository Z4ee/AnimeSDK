#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NPCAbilityMoveAvoidanceProcessors_ObstacleFlags_TypeDefinitionIndex = 59522;

	enum class NPCAbilityMoveAvoidanceProcessors_ObstacleFlags : ::System::Byte
	{
		CanAvoid = 0x1,
		None = 0x0,
		IsMoving = 0x2,
	};
}
