#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TutorialGuideShowType_TypeDefinitionIndex = 14845;

	enum class TutorialGuideShowType : ::System::Int32
	{
		Normal = 0,
		AutoShow = 1,
		Hide = 2,
		AutoShowInMaze = 3,
		BattleStart = 4,
		NonTutorial = 99,
	};
}
