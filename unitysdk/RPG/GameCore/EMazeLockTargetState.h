#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int EMazeLockTargetState_TypeDefinitionIndex = 55080;

	enum class EMazeLockTargetState : ::System::Int32
	{
		OutOfRange = 0,
		InInfoRange = 2,
		InSkillRange = 4,
		InMeleeRange = 8,
		InPuzzleTriggerRange = 16,
	};
}
