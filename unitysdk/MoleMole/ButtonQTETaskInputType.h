#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int ButtonQTETaskInputType_TypeDefinitionIndex = 78172;

	enum class ButtonQTETaskInputType : ::System::Int32
	{
		InLevelEvade = 4,
		InLevelCommonSkill = 8,
		InLevelExQTEAttack = 3,
		None = 0,
		InLevelNormalAttack = 1,
		InLevelSpecialAttack = 2,
		MonsterFantasyQTEEvade = 7,
		MonsterFantasyQTEAttack = 6,
		InLevelSwitchAvatar = 5,
	};
}
