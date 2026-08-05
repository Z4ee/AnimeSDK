#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Ability
{
	inline static constexpr unsigned int InLevelAbilityTargetMask_TypeDefinitionIndex = 68759;

	enum class InLevelAbilityTargetMask : ::System::Int32
	{
		Avatar = 1,
		Avatar_AvatarC = 16,
		Level = 2048,
		Avatar_PartnerAvatar = 2097152,
		Avatar_TeamAvatar = 1048576,
		Buddy_Support = 32768,
		Enemy_Elite = 256,
		Buddy_Fight = 16384,
		Avatar_TeamEntity = 2,
		Avatar_AvatarA = 4,
		Avatar_AvatarB = 8,
		Enemy_Destruction = 1024,
		Buddy_Partner = 65536,
		Enemy_Normal = 128,
		GoodMonster = 524288,
		Buddy = 32,
		Enemy_Boss = 512,
		SceneObject = 262144,
		None = 0,
		Enemy_LevelEnd = 4096,
		Enemy_LevelFin = 8192,
		Avatar_Shell_Buddy = 131072,
		Enemy = 64,
	};
}
