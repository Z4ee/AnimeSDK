#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TurnBasedGameMode_SkillExecutionEventState_TypeDefinitionIndex = 51134;

	enum class TurnBasedGameMode_SkillExecutionEventState : ::System::Int32
	{
		None = 0,
		Triggered = 1,
		Interrupted = 2,
	};
}
