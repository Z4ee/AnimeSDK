#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingFesToastStyleType_TypeDefinitionIndex = 17702;

	enum class ChenLingFesToastStyleType : ::System::Int32
	{
		None = 0,
		IncomeIncrease = 1,
		IncomeDecrease = 2,
		ItemEffect = 3,
		SummonChenling = 4,
	};
}
