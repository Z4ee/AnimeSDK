#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MazeBuffInBattleBindingType_TypeDefinitionIndex = 10217;

	enum class MazeBuffInBattleBindingType : ::System::Int32
	{
		None = 0,
		StageAbility = 1,
		CharacterSkill = 2,
		CharacterAbility = 3,
		StageAbilityBeforeCharacterBorn = 4,
		StageAbilityAfterCharacterBorn = 5,
		CharacterSkillAdv = 6,
		CharacterAbilityAdv = 7,
		StageAbilityBeforeCharacterBorn2 = 8,
	};
}
