#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Ability
{
	inline static constexpr unsigned int InLevelAbilityTargetMask_TypeDefinitionIndex = 65264;

	enum class InLevelAbilityTargetMask : ::System::Int32
	{
		Buddy_Partner = 65536,
		Enemy_LevelFin = 8192,
		Enemy_Normal = 128,
		Enemy_LevelEnd = 4096,
		Avatar_AvatarA = 4,
		Avatar_Shell_Buddy = 131072,
		Enemy = 64,
		SceneObject = 262144,
		Avatar = 1,
		Avatar_AvatarC = 16,
		None = 0,
		Enemy_Destruction = 1024,
		Buddy_Support = 32768,
		Avatar_TeamAvatar = 1048576,
		Avatar_TeamEntity = 2,
		Enemy_Elite = 256,
		Buddy_Fight = 16384,
		Avatar_AvatarB = 8,
		GoodMonster = 524288,
		Avatar_PartnerAvatar = 2097152,
		Buddy = 32,
		Level = 2048,
		Enemy_Boss = 512,
	};
}
