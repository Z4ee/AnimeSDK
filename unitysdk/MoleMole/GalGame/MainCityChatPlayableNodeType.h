#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatPlayableNodeType_TypeDefinitionIndex = 58324;

	enum class MainCityChatPlayableNodeType : ::System::Int32
	{
		ChangeActors = 26,
		AttractorUse = 43,
		LookAtIK = 9,
		Show3DModel = 21,
		Delay = 38,
		ShowUIGeneralIntimacyUp = 19,
		MiniGameRecord = 36,
		ChangeNpcName = 37,
		RandomNext = 27,
		QuestRecommend = 24,
		LocalTransition = 25,
		ShowUI = 31,
		ChatAttachEffect = 47,
		RandomChoice = 28,
		BangkovHandIn = 50,
		PlayVoice = 35,
		PlayTimeline = 32,
		CloseUI = 33,
		SoundEvent = 52,
		BlackScreen = 15,
		Action = 3,
		ShowConfirmPopup = 30,
		SetSpecials = 14,
		PlayChatPlusStoryNode = 45,
		PlayAnimation = 10,
		SoundAction = 51,
		ModifyDynamicObjectActive = 44,
		JumpChapter = 7,
		SyncServerData = 34,
		ChangeEffectState = 48,
		ChatPlusInit = 46,
		CheckResourceTitle = 49,
		BranchMultiInput = 20,
		ModifyCamera = 41,
		CustomTransition = 2,
		Normal = 0,
		PlayMontage = 53,
		Transition = 1,
		SetExitChatTransition = 17,
		MainCityGraph = 39,
		AttractorEnable = 42,
		Condition = 40,
		QuestTrack = 23,
		TransitionWithActions = 29,
	};
}
