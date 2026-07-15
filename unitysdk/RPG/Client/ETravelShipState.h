#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ETravelShipState_TypeDefinitionIndex = 65721;

	enum class ETravelShipState : ::System::Int32
	{
		Default = 0,
		Sprint = 1,
		Follow = 2,
		Channel = 3,
		Navigate = 4,
	};
}
