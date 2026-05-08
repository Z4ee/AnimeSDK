#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int InLevelAbilityTarget_TypeDefinitionIndex = 39687;

	enum class InLevelAbilityTarget : ::System::Int32
	{
		None = 0,
		Enemy_Destruction = 11,
		Enemy_Normal = 8,
		Enemy_Elite = 9,
		Enemy_Boss = 10,
		Enemy_LevelEnd = 15,
		Buddy_Support = 13,
		Avatar_Buddy = 6,
		Avatar_AvatarC = 5,
		Avatar_AvatarA = 3,
		Enemy = 7,
		Avatar_TeamEntity = 2,
		Enemy_LevelFin = 14,
		Avatar = 1,
		Level = 20,
		Buddy_Fight = 12,
		Avatar_AvatarB = 4,
	};
}
