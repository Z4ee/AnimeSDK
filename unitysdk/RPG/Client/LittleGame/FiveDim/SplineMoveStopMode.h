#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int SplineMoveStopMode_TypeDefinitionIndex = 41910;

	enum class SplineMoveStopMode : ::System::Int32
	{
		None = 0,
		StopAtNextPoint = 1,
		StopAtSpecificPoint = 2,
	};
}
