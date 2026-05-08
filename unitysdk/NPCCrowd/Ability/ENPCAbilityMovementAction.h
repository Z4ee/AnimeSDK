#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int ENPCAbilityMovementAction_TypeDefinitionIndex = 76465;

	enum class ENPCAbilityMovementAction : ::System::Int32
	{
		Move = 1,
		Stand = 0,
		Freeze = 2,
		Turn = 3,
		Animate = 4,
		MotionMove = 5,
	};
}
