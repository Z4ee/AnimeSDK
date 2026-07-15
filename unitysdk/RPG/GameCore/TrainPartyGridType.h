#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyGridType_TypeDefinitionIndex = 10280;

	enum class TrainPartyGridType : ::System::Int32
	{
		None = 0,
		Normal = 1,
		Postive = 2,
		Negative = 3,
		Incentive = 5,
		Passenger = 6,
		Card = 7,
		Meeting = 11,
		GamePlaySettle = 12,
		TripleIncentive = 13,
	};
}
