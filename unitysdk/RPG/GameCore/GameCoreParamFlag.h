#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int GameCoreParamFlag_TypeDefinitionIndex = 10153;

	enum class GameCoreParamFlag : ::System::UInt32
	{
		IsFakeAvatarAttack = 0x1,
		IsHPChangeByDamage = 0x2,
		IsRedStanceBreak = 0x4,
		IsReviveFromDied = 0x8,
		IsExtraStance = 0x10,
		CallBack_SettleSkillOrInsertAbility = 0x20,
		CallBackBefore_OnListenCharacterCreate = 0x40,
		CallBackBefore_MazeSkillEnterBattle = 0x80,
		CallBackAfter_MazeSkillEnterBattle = 0x100,
		CallBackBefore_OnListenBeforeSkillUse = 0x200,
		CallBackBefore_OnListenInsertAbilityStart = 0x400,
		IsModifierAdding = 0x800,
		MuteDispelVisualEffect = 0x1000,
		EnableEnergyPointModify = 0x2000,
	};
}
