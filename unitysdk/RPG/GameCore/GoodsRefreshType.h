#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int GoodsRefreshType_TypeDefinitionIndex = 14821;

	enum class GoodsRefreshType : ::System::Int32
	{
		None = 0,
		DAILY = 1,
		WEEK = 2,
		MONTH = 3,
		ROGUE = 4,
		CYCLE = 5,
	};
}
