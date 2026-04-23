#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleUIPanelType_TypeDefinitionIndex = 21721;

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
		SpecialAvatarButtonGroups = 20,
		ShortCutHintInfoPanel = 21,
		BattleScreenEffectPanel = 22,
		ActionBarWaveInfo = 23,
		TurnHintPanel = 24,
		BPTopPanel = 25,
		Count = 26,
	};
}
