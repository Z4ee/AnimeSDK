#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int SkillTargetCandidateState_TypeDefinitionIndex = 53898;

	enum class SkillTargetCandidateState : ::System::Int32
	{
		Valid = 0,
		FilterBySkillTargetFilter = 1,
		FitlerByModifierRestriction = 2,
		FilterByTaunt = 3,
		Unknown = 4,
	};
}
