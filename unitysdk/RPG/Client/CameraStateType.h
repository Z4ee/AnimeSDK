#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int CameraStateType_TypeDefinitionIndex = 66599;

	enum class CameraStateType : ::System::Int32
	{
		AdventureState = 0,
		StoryState = 1,
		TurnBasedFightState = 2,
		BattleNew = 3,
	};
}
