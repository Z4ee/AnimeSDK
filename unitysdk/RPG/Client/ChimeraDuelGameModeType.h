#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelGameModeType_TypeDefinitionIndex = 60572;

	enum class ChimeraDuelGameModeType : ::System::Int32
	{
		Invalid = 0,
		Tutorial = 1,
		PlacementMatch = 2,
		Normal = 3,
	};
}
