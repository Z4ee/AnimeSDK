#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatPlayableNodeType_TypeDefinitionIndex = 53558;

	enum class MainCityChatPlayableNodeType : ::System::Int32
	{
		JumpChapter = 7,
		SetSpecials = 14,
		LocalTransition = 25,
		BlackScreen = 15,
		Transition = 1,
		PlayChatPlusStoryNode = 45,
		BangkovHandIn = 50,
		ChangeActors = 26,
		TransitionWithActions = 29,
		MiniGameRecord = 36,
		QuestTrack = 23,
		BranchMultiInput = 20,
		Condition = 40,
		ChatAttachEffect = 47,
		Delay = 38,
		CustomTransition = 2,
		ChangeNpcName = 37,
		PlayTimeline = 32,
		Normal = 0,
		ShowUI = 31,
		SetExitChatTransition = 17,
		ShowUIGeneralIntimacyUp = 19,
		ModifyCamera = 41,
		PlayVoice = 35,
		CheckResourceTitle = 49,
		Action = 3,
		LookAtIK = 9,
		ShowConfirmPopup = 30,
		AttractorEnable = 42,
		PlayAnimation = 10,
		AttractorUse = 43,
		ChangeEffectState = 48,
		MainCityGraph = 39,
		QuestRecommend = 24,
		ChatPlusInit = 46,
		RandomNext = 27,
		Show3DModel = 21,
		ModifyDynamicObjectActive = 44,
		SyncServerData = 34,
		CloseUI = 33,
		RandomChoice = 28,
	};
}
