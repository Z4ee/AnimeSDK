#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int ButtonQTETaskInputType_TypeDefinitionIndex = 59816;

	enum class ButtonQTETaskInputType : ::System::Int32
	{
		InLevelNormalAttack = 1,
		InLevelSpecialAttack = 2,
		MonsterFantasyQTEAttack = 6,
		InLevelExQTEAttack = 3,
		InLevelCommonSkill = 8,
		InLevelSwitchAvatar = 5,
		MonsterFantasyQTEEvade = 7,
		InLevelEvade = 4,
		InLevelInteract = 9,
		None = 0,
	};
}
