#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::RelicSmartSuit
{
	inline static constexpr unsigned int RelicSmartSuitCalculationResultData_InitFlag_TypeDefinitionIndex = 61174;

	enum class RelicSmartSuitCalculationResultData_InitFlag : ::System::Int32
	{
		None = 0,
		Rank = 1,
		ExtraScore = 2,
	};
}
