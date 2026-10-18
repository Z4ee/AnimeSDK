#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int ETimelineControlGamePlayMode_TypeDefinitionIndex = 42497;

	enum class ETimelineControlGamePlayMode : ::System::Int32
	{
		Default = 0,
		Simulate = 1,
		Performance = 2,
	};
}
