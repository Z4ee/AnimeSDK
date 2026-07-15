#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyEventFadeInType_TypeDefinitionIndex = 23754;

	enum class TrainPartyEventFadeInType : ::System::Int32
	{
		None = 0,
		Positive = 1,
		Negative = 2,
		Passenger = 3,
		Meeting = 4,
	};
}
