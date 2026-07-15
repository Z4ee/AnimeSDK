#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComefromOpenType_TypeDefinitionIndex = 13368;

	enum class ComefromOpenType : ::System::Int32
	{
		None = 0,
		Gacha = 1,
		QuickGuide = 2,
		FinishQuest = 3,
		StoryTokenRewardTaken = 4,
		MutexItemComefrom = 5,
	};
}
