#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureSkillSlotState_TypeDefinitionIndex = 16807;

	enum class AdventureSkillSlotState : ::System::Int32
	{
		Hide = 0,
		Normal = 1,
		Cancel = 2,
		Unknown = 3,
	};
}
