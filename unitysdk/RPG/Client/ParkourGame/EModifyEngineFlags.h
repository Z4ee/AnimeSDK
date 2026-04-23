#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::ParkourGame
{
	inline static constexpr unsigned int EModifyEngineFlags_TypeDefinitionIndex = 68297;

	enum class EModifyEngineFlags : ::System::Int32
	{
		None = 0,
		Accel = 1,
		Decel = 2,
	};
}
