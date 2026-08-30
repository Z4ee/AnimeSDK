#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int SpecialOrderFinishTypeEnum_TypeDefinitionIndex = 12535;

	enum class SpecialOrderFinishTypeEnum : ::System::Int32
	{
		Unknown = 0,
		ProfitGreater = 1,
		GoodsNumGreater = 2,
		RemainAnchorLessOrEqual = 3,
		SpecifiedTypeGoodsNumGreater = 4,
	};
}
