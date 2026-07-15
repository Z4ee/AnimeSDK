#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TutorialLevelEvent_TypeDefinitionIndex = 23945;

	enum class TutorialLevelEvent : ::System::Int32
	{
		Null = 0,
		SelectSkill01 = 1,
		SelectSkill02 = 2,
		SelectUltra = 3,
		ClickAction = 4,
		PressBtnWithPath = 5,
		ClickFullScreen = 6,
		ClickBPSkill = 7,
		ClickBtnTutorialPic = 8,
		ClickBtnBossIcon = 9,
		DisplaySkillDetail = 10,
		ChangeLockTarget = 11,
		ActionOrderTick = 12,
		ActionButtonTick = 13,
		ClickBtnWithPath = 14,
		Goto = 15,
		LevelTurnEnd = 16,
		FinishedInToast = 17,
		SwitchTeamLeader = 18,
		UseMazeSkill = 19,
		LevelCharacterEndAttack = 20,
		LevelCharacterSPFull = 21,
		LevelCharacterHasModifer = 22,
		MazeLockTarget = 23,
		MazeEnterPropTrigger = 24,
		WaitChracterTurn = 25,
		ReleaseBtnWithPath = 26,
		ActionPress = 27,
		ActionRelease = 28,
		LevelCharacterAction = 29,
		PlayerMove = 30,
		UseAbility = 31,
		ShowUIContext = 32,
		MonsterHpPercentLowerThenThreshold = 33,
		LevelCharacterActionWithoutUltra = 34,
		ShowUIMainPage = 35,
		LevelTriggerBreak = 36,
		LevelPreshowBreak = 37,
		LevelWaveMonster = 38,
		UseMazeSkillFinish = 39,
		LevelCharacterSPNeedFull = 40,
		LevelLightTeamAvatarAction = 41,
	};
}
