#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TutorialGuideTextType_TypeDefinitionIndex = 23948;

	enum class TutorialGuideTextType : ::System::Int32
	{
		None = 0,
		InfoTip = 1,
		TopCenterTip = 3,
		Talk = 4,
		RogueTalk = 5,
		CommonCenterTalk = 6,
		RogueCenterTalk = 7,
		WeakTip = 8,
	};
}
