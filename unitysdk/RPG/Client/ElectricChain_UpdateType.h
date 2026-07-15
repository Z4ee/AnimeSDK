#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ElectricChain_UpdateType_TypeDefinitionIndex = 67304;

	enum class ElectricChain_UpdateType : ::System::Int32
	{
		Interrupted = 0,
		Smooth = 1,
		SmoothInterrupt = 2,
	};
}
