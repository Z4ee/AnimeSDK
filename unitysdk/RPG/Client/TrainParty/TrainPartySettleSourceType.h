#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartySettleSourceType_TypeDefinitionIndex = 68633;

	enum class TrainPartySettleSourceType : ::System::Int32
	{
		None = 0,
		Card = 1,
		Event = 2,
		Meeting = 3,
		PassengerLeave = 4,
	};
}
