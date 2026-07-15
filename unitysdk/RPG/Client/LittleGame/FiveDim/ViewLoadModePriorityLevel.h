#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int ViewLoadModePriorityLevel_TypeDefinitionIndex = 40739;

	enum class ViewLoadModePriorityLevel : ::System::Int32
	{
		None = 0,
		Streaming = 1,
		TriggerPreload = 2,
		Task = 3,
		AdventureSetting = 4,
		PlayerIn = 5,
		Debug = 999,
	};
}
