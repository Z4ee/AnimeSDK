#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int ButtonQTETaskInputType_TypeDefinitionIndex = 76810;

	enum class ButtonQTETaskInputType : ::System::Int32
	{
		InLevelSwitchAvatar = 5,
		InLevelSpecialAttack = 2,
		InLevelNormalAttack = 1,
		MonsterFantasyQTEAttack = 6,
		InLevelInteract = 9,
		InLevelExQTEAttack = 3,
		None = 0,
		MonsterFantasyQTEEvade = 7,
		InLevelEvade = 4,
		InLevelCommonSkill = 8,
	};
}
