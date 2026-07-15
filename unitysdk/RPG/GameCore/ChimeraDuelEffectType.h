#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelEffectType_TypeDefinitionIndex = 15375;

	enum class ChimeraDuelEffectType : ::System::Int32
	{
		None = 0,
		Heal = 1,
		Damage = 2,
		ChangeAttack = 3,
		ChangeAtkHp = 4,
		ChangeAtkHpWrtTarget = 5,
		SetHealth = 6,
		SetAttack = 7,
		AddAbility = 8,
		RemoveAbility = 9,
		ChimeraRun = 10,
		SwapPositionForTwoTarget = 11,
		SummonPresetChimeraToAlly = 12,
		OverrideSummonWithHysilens = 13,
		IncreaseGlobalDynamicValue = 14,
		ClearGlobalDynamicValue = 15,
		ChangeProbability = 16,
		OverrideProbability = 17,
		AddTeamBuff = 18,
		AddStatus = 19,
		AddStatusImmune = 20,
		MarkUntargetable = 21,
		AddBuff = 22,
		RemoveBuff = 23,
		StoreChimeraDamageAddOn = 24,
		StoreChimeraDamageSubtractionAddOn = 25,
		StoreChimeraAbilityDamageAddOn = 26,
		StoreChimeraAttackDamageMultiplier = 27,
		BackToEndOfTeam = 28,
		PostEvent = 29,
		ClearEquipmentRelativeValues = 30,
		SummonLesserClone = 31,
		ChimeraAscension = 32,
		SaveTargets = 33,
		CreateChimera = 34,
		StealChimera = 35,
		IncreaseChimeraDynamicValue = 36,
		SummonEnemyDeadChimeraToAlly = 37,
		MoveToStartOfTeam = 38,
		DeductHp = 39,
	};
}
