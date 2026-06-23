#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int ENPCAbilityMovementAction_TypeDefinitionIndex = 70337;

	enum class ENPCAbilityMovementAction : ::System::Int32
	{
		Freeze = 2,
		MotionMove = 5,
		Turn = 3,
		Stand = 0,
		Animate = 4,
		Move = 1,
	};
}
