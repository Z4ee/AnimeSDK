#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int OperationType_TypeDefinitionIndex = 55136;

	enum class OperationType : ::System::Int32
	{
		SelfUseSkill = 0,
		SetAutoBattle = 1,
		LightTeamRevive = 2,
		LightTeamReviveCancel = 3,
		QuitBattle = 4,
		InsertUltraSkill = 5,
		SkipTurnAction = 6,
		SetComplexSkillAIConsiderUltra = 7,
		OpInSkill = 8,
		ChangeAvatar = 9,
		CancelInsertUltraSkill = 10,
		SkillInput = 11,
		SkillTargetSelection = 12,
		LevelGraphOperation = 13,
		EvolveBuild_Start = 14,
		EvolveBuild_SelectGear = 15,
		EvolveBuild_ReRoll = 16,
		EvolveBuild_LostGear = 17,
		EvolveBuild_Skip = 18,
		EvolveBuild_SelectCard = 19,
		EvolveBuild_ReRollCard = 20,
		EvolveBuild_End = 21,
		Fate_SelectProjectionHougu = 22,
		GM_Start = 23,
		GM_LightTeamDmgUp = 24,
		GM_DarkTeamDmgUp = 25,
		GM_StanceDmgUp = 26,
		GM_ClearCDAndFilledSP = 27,
		GM_ForceEnemyTurn = 28,
		GM_ForceWin = 29,
		GM_ReviveLightTeam = 30,
		GM_LockLightTeamHP = 31,
		GM_LockDarkTeamHP = 32,
		GM_LockStance = 33,
		GM_ForceBreakStance = 34,
		GM_ForceMortallyDamage = 35,
		GM_SetEntityHP = 36,
		GM_LockActionDelay = 37,
		GM_SwitchLightTeamActionEntity = 38,
		GM_SwitchTeamMemberActionEntity = 39,
		GM_AddModifier = 40,
		GM_SetBP = 41,
		GM_SetEntitySP = 42,
		GM_LockLightTeamShield = 43,
		GM_LockLightTeamHPScope = 44,
		GM_LightTeamHealUp = 45,
		GM_End = 46,
	};
}
