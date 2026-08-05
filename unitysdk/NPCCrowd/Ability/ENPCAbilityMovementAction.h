#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int ENPCAbilityMovementAction_TypeDefinitionIndex = 79532;

	enum class ENPCAbilityMovementAction : ::System::Int32
	{
		Freeze = 2,
		Move = 1,
		Animate = 4,
		Turn = 3,
		MotionMove = 5,
		Stand = 0,
	};
}
