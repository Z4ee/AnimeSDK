#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ETravelShipState_TypeDefinitionIndex = 63433;

	enum class ETravelShipState : ::System::Int32
	{
		Default = 0,
		Sprint = 1,
		Follow = 2,
		Channel = 3,
		Navigate = 4,
	};
}
