#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalPlayableNodeType_TypeDefinitionIndex = 58503;

	enum class GalPlayableNodeType : ::System::Int32
	{
		ArgueSettle = 33,
		SwitchSceneGroup = 25,
		SetSpecials = 34,
		SwitchMainCityBGM = 13,
		SoundAction = 27,
		NoAvatarNormal = 22,
		ArgueStart = 31,
		BubbleStorySequence = 30,
		ContinuousShake = 26,
		Condition = 24,
		NarratorItemIcon = 5,
		Show3DModel = 21,
		Normal = 0,
		JumpChapter = 7,
		SwitchScene = 6,
		SubNormal = 18,
		Action = 3,
		Transition = 1,
		SwitchBGM = 12,
		ArgueHealthChange = 32,
		SubNarrator = 4,
		PictureStory = 28,
		BubbleStory = 8,
		WhiteSwitchScene = 29,
	};
}
