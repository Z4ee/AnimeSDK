#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleUIPanelType_TypeDefinitionIndex = 23792;

	enum class BattleUIPanelType : ::System::Int32
	{
		ActionBarPanel = 0,
		TeamInfo = 1,
		FunctionArea = 2,
		BattleMonsterInfoBar = 3,
		BattleBossInfoBar = 4,
		BattleRightInfo = 5,
		BattleRightCenterInfo = 6,
		DamageCounter = 7,
		ScoreContainer = 8,
		ViewModeArea = 9,
		BPDetailPanel = 10,
		SkillButtonBattleEvent = 11,
		SkillButtonNormal = 12,
		SkillButtonBP = 13,
		SkillButtonCancel = 14,
		SkillButtonUltra = 15,
		SkillButtonDoubleUltra01 = 16,
		SkillButtonDoubleUltra02 = 17,
		SkillButtonDoubleUpDownUltra01 = 18,
		SkillButtonDoubleUpDownUltra02 = 19,
		SkillButtonAssist = 20,
		SpecialAvatarButtonGroups = 21,
		ShortCutHintInfoPanel = 22,
		BattleScreenEffectPanel = 23,
		ActionBarWaveInfo = 24,
		TurnHintPanel = 25,
		BPTopPanel = 26,
		Count = 27,
	};
}
