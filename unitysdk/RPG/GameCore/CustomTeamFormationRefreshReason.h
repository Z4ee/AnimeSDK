#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int CustomTeamFormationRefreshReason_TypeDefinitionIndex = 55147;

	enum class CustomTeamFormationRefreshReason : ::System::Int32
	{
		Normal = 0,
		CameraStateChange = 1,
		TurnStateChange = 2,
		ActionEntityChange = 3,
		ActiveSkillChange = 4,
		UseSkill = 5,
		Init = 6,
		Task = 7,
	};
}
