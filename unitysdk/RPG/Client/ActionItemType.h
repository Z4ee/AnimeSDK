#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ActionItemType_TypeDefinitionIndex = 58350;

	enum class ActionItemType : ::System::Int32
	{
		None = 0,
		ActionEntity = 1,
		UltraSkill = 2,
		NormalAction = 4,
		Preshow = 8,
		InsertAbility = 16,
		UltraSkillOrNormalAction = 6,
		All = 31,
	};
}
