#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int DialogueEventType_TypeDefinitionIndex = 12645;

	enum class DialogueEventType : ::System::Int32
	{
		None = 0,
		GetRogueItem = 1,
		UpRogueBuffLevel = 2,
		GetRogueBuff = 3,
		AddMazeBuff = 4,
		RecoverLineup = 5,
		TriggerRogueBuffSelect = 6,
		TriggerBattle = 7,
		TriggerRogueMiracleSelect = 8,
		AddMazeBuffWithParam = 9,
		GetRogueBuffWithRatio = 10,
		RecoverLineupByCurrent = 11,
		GetRogueMiracle = 12,
		GetItem = 13,
		TriggerRogueBuffSwap = 14,
		TriggerRogueBuffReforge = 15,
		TriggerRandomEvent = 16,
		AlwaysCanSelect = 17,
		RecoverEnergy = 18,
		TriggerRogueMiracleTrade = 19,
		TriggerDialogueEventList = 20,
		TriggerRandomResult = 21,
		GetRogueBuffWithoutDefault = 22,
		GetAllRogueBuffInGroup = 23,
		ChangeRogueMiracleToRogueMiracle = 24,
		ChangeRogueMiracleToRogueBuff = 25,
		ChangeRogueMiracleToRogueCoin = 26,
		RemoveRogueMiracle = 27,
		DestroyRogueMiracle = 28,
		ReplaceRogueBuff = 29,
		GetChessRogueCheatDice = 30,
		GetChessRogueRerollDice = 31,
		ReplaceRogueBuffKeepLevel = 32,
		FinishChessRogue = 33,
		ChangeChessRogueActionPoint = 34,
		SetChessRogueNextStartCellAdventureRoomType = 35,
		RepairRogueMiracleByGroup = 36,
		TriggerRogueBuffDrop = 37,
		GetItemByPercent = 38,
		RemoveRogueBuff = 39,
		GetRogueBuffByMiracleCount = 40,
		ChangeNousValue = 41,
	};
}
