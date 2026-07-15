#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int InventorySortType_TypeDefinitionIndex = 13361;

	enum class InventorySortType : ::System::Int32
	{
		Unknown = 0,
		Count = 1,
		Rarity = 2,
		Level = 3,
		AvatarBaseType = 4,
		Attack = 5,
		Defence = 6,
		HP = 7,
		ObtainTime = 8,
		HPAddedRatio = 9,
		HPDelta = 10,
		AttackAddedRatio = 11,
		AttackDelta = 12,
		DefenceAddedRatio = 13,
		DefenceDelta = 14,
		SpeedBase = 15,
		CriticalChance = 16,
		CriticalDamage = 17,
		StatusProbability = 18,
		StatusResistance = 19,
		Default = 20,
		LogoutTime = 21,
		ApplicationTime = 22,
		BreakDamageAddedRatio = 23,
		Name = 24,
		UpdateTime = 25,
		DamageType = 26,
		FriendAddTime = 27,
	};
}
