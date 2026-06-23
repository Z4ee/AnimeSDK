#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalPlayableNodeType_TypeDefinitionIndex = 73738;

	enum class GalPlayableNodeType : ::System::Int32
	{
		BubbleStory = 8,
		SubNormal = 18,
		Transition = 1,
		BubbleStorySequence = 30,
		Condition = 24,
		Action = 3,
		PictureStory = 28,
		NoAvatarNormal = 22,
		ContinuousShake = 26,
		WhiteSwitchScene = 29,
		Show3DModel = 21,
		SwitchSceneGroup = 25,
		JumpChapter = 7,
		SoundAction = 27,
		NarratorItemIcon = 5,
		SubNarrator = 4,
		Normal = 0,
		SwitchBGM = 12,
		SwitchScene = 6,
		SwitchMainCityBGM = 13,
	};
}
