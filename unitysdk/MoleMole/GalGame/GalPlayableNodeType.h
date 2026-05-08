#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalPlayableNodeType_TypeDefinitionIndex = 70316;

	enum class GalPlayableNodeType : ::System::Int32
	{
		SubNarrator = 4,
		BubbleStory = 8,
		ContinuousShake = 26,
		BubbleStorySequence = 30,
		SoundAction = 27,
		NarratorItemIcon = 5,
		JumpChapter = 7,
		PictureStory = 28,
		Action = 3,
		SwitchScene = 6,
		SwitchSceneGroup = 25,
		Transition = 1,
		Condition = 24,
		Show3DModel = 21,
		Normal = 0,
		SubNormal = 18,
		WhiteSwitchScene = 29,
		NoAvatarNormal = 22,
		SwitchMainCityBGM = 13,
		SwitchBGM = 12,
	};
}
