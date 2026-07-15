#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyPassengerType_TypeDefinitionIndex = 10282;

	enum class TrainPartyPassengerType : ::System::Int32
	{
		None = 0,
		AllPassenger = 1,
		FellowPassenger = 2,
		RandomPassenger = 3,
		SpecifyPassenger = 4,
	};
}
