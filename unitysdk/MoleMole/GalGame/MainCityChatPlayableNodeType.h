#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatPlayableNodeType_TypeDefinitionIndex = 70409;

	enum class MainCityChatPlayableNodeType : ::System::Int32
	{
		CustomTransition = 2,
		TransitionWithActions = 29,
		BangkovHandIn = 50,
		CloseUI = 33,
		SetSpecials = 14,
		BlackScreen = 15,
		RandomChoice = 28,
		Action = 3,
		Normal = 0,
		SoundEvent = 52,
		PlayMontage = 53,
		PlayVoice = 35,
		ChatAttachEffect = 47,
		ChatPlusInit = 46,
		LocalTransition = 25,
		LookAtIK = 9,
		QuestTrack = 23,
		ShowConfirmPopup = 30,
		BranchMultiInput = 20,
		AttractorUse = 43,
		SyncServerData = 34,
		Delay = 38,
		CheckResourceTitle = 49,
		PlayChatPlusStoryNode = 45,
		AttractorEnable = 42,
		Show3DModel = 21,
		QuestRecommend = 24,
		ModifyDynamicObjectActive = 44,
		SetExitChatTransition = 17,
		MainCityGraph = 39,
		SoundAction = 51,
		ChangeNpcName = 37,
		ShowUIGeneralIntimacyUp = 19,
		PlayAnimation = 10,
		Condition = 40,
		RandomNext = 27,
		ModifyCamera = 41,
		ShowUI = 31,
		Transition = 1,
		MiniGameRecord = 36,
		ChangeEffectState = 48,
		ChangeActors = 26,
		JumpChapter = 7,
		PlayTimeline = 32,
	};
}
