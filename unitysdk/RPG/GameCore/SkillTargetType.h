#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int SkillTargetType_TypeDefinitionIndex = 10109;

	enum class SkillTargetType : ::System::Int32
	{
		Unknow = 0,
		Caster = 1,
		FriendSelect = 2,
		EnemySelect = 3,
		AllTeamMember = 4,
		AllEnemy = 5,
		LightSelect = 6,
		AllLightMember = 7,
		DarkSelect = 8,
		AllDarkMember = 9,
		CasterServant = 10,
		FriendServantSelect = 11,
	};
}
