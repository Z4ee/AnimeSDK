#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int CumulativeConsumptionType_TypeDefinitionIndex = 13879;

	enum class CumulativeConsumptionType : ::System::Int32
	{
		None = 0,
		SecondAnniversary = 1,
		ActivityRecharge = 2,
		ThirdAnniversary = 3,
	};
}
