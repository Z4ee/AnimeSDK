#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int SkillTargetCandidateState_TypeDefinitionIndex = 55120;

	enum class SkillTargetCandidateState : ::System::Int32
	{
		Valid = 0,
		FilterBySkillTargetFilter = 1,
		FitlerByModifierRestriction = 2,
		FilterByTaunt = 3,
		Unknown = 4,
	};
}
