#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::RoadRash
{
	inline static constexpr unsigned int EKnockUpDirection_TypeDefinitionIndex = 42902;

	enum class EKnockUpDirection : ::System::Int32
	{
		BackLeft = 0,
		BackRight = 1,
	};
}
