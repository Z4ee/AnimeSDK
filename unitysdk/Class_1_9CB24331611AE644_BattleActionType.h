#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int Class_1_9CB24331611AE644_BattleActionType_TypeDefinitionIndex = 45049;

enum class Class_1_9CB24331611AE644_BattleActionType : ::System::Int32
{
	Unknown = 0,
	Damage = 1,
	LoseHPByRatio = 2,
	LoseHP = 3,
	HealHP = 4,
	BPChange = 5,
	UseBoostBuff = 6,
	UseSkill = 7,
	StartLevel = 8,
	CharacterCreate = 9,
	BattleEventCreate = 10,
	Death = 11,
	LinkAttack = 12,
	AddModifier = 13,
	RemoveModifier = 14,
	SPChange = 15,
	InitShield = 16,
	ModifyShield = 17,
	Break = 18,
	RandomChanceTask = 19,
	Escape = 20,
	EndLevel = 21,
	SetBattleScoreEvent = 22,
	InsertAttackFinish = 23,
	ElationPointChange = 24,
};
