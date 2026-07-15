#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int Class_1_4DC40C4198F52F51_RtBattleActionType_TypeDefinitionIndex = 51786;

enum class Class_1_4DC40C4198F52F51_RtBattleActionType : ::System::Int32
{
	Unknown = 0,
	Damage = 1,
	LoseHP = 2,
	HealHP = 3,
	UseSkill = 4,
	StartLevel = 5,
	CharacterCreate = 6,
	BattleEventCreate = 7,
	Death = 8,
	LinkAttack = 9,
	AddModifier = 10,
	RemoveModifier = 11,
	RandomChanceTask = 12,
	Escape = 13,
	EndLevel = 14,
};
