#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int SkillTargetAliveState_TypeDefinitionIndex = 10095;

	enum class SkillTargetAliveState : ::System::Int32
	{
		Alive = 0,
		AliveOrLimbo = 1,
		OnStage = 2,
	};
}
