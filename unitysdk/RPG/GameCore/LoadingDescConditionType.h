#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int LoadingDescConditionType_TypeDefinitionIndex = 13458;

	enum class LoadingDescConditionType : ::System::Int32
	{
		None = 0,
		MainMissionTaken = 1,
		MainMissionFinish = 2,
		GameMode = 3,
		EntranceID = 4,
		StoryLineID = 5,
	};
}
