#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int Class_1_43B4CC10B76BE828_RtBattleActionType_TypeDefinitionIndex = 50704;

enum class Class_1_43B4CC10B76BE828_RtBattleActionType : ::System::Int32
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
