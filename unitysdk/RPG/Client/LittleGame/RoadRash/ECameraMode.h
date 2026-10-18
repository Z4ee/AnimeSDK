#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::RoadRash
{
	inline static constexpr unsigned int ECameraMode_TypeDefinitionIndex = 42891;

	enum class ECameraMode : ::System::Int32
	{
		None = 0,
		LookAtPlayer = 1,
	};
}
