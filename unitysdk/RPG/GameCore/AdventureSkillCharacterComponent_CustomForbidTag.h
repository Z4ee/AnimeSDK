#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureSkillCharacterComponent_CustomForbidTag_TypeDefinitionIndex = 54322;

	enum class AdventureSkillCharacterComponent_CustomForbidTag : ::System::Int32
	{
		None = 0,
		NormalAttack = 1,
		MazeSkill = 2,
		NormalAttackAndMazeSkill = 3,
	};
}
