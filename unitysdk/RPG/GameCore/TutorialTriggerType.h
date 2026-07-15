#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TutorialTriggerType_TypeDefinitionIndex = 14844;

	enum class TutorialTriggerType : ::System::Int32
	{
		None = 0,
		TutorialFinish = 1,
		GetItem = 2,
		AnyAvatarToLevel = 3,
		GetAvatar = 4,
		FinishMainMission = 5,
		TaskUnlock = 6,
		TakeSubMission = 7,
		EnterBattle = 8,
		GetAnyLightCone = 9,
		AvatarInTeam = 10,
		EquipLightCone = 11,
		PlayerLevel = 12,
		GachaPoolValid = 13,
		TriggerPuzzle = 14,
		DestructProp = 15,
		OpenChest = 16,
		GetNewItemByType = 17,
		GameMode = 18,
		GetItemType = 19,
		ShowUIPage = 20,
		AvatarPromotion = 21,
		FinishQuest = 22,
		CarryMazeBuff = 23,
		HasBattlePass = 24,
		NotInGameMode = 25,
		ActivitySwitchBtnExist = 26,
		EnterBattleByStageType = 27,
		EnterBattleByChallengeType = 28,
		FinishSubMission = 29,
		ShowUIDialog = 30,
		OnMazeMainPage = 31,
		EnterBattleByChallengePeak = 32,
	};
}
