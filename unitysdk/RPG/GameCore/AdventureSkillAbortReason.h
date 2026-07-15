#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureSkillAbortReason_TypeDefinitionIndex = 54319;

	enum class AdventureSkillAbortReason : ::System::Int32
	{
		Default = 0,
		Combo = 1,
	};
}
