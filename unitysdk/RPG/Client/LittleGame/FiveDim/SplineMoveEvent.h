#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int SplineMoveEvent_TypeDefinitionIndex = 39366;

	enum class SplineMoveEvent : ::System::Int32
	{
		Start = 0,
		Stop = 1,
		Reverse = 2,
	};
}
