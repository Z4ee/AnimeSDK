#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::ChenLing
{
	inline static constexpr unsigned int ChenLingRadialForceFallOffType_TypeDefinitionIndex = 40344;

	enum class ChenLingRadialForceFallOffType : ::System::Int32
	{
		Invalid = 0,
		Linear = 1,
		Square = 2,
	};
}
