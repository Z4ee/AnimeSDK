#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ItemFoodTargetType_TypeDefinitionIndex = 13355;

	enum class ItemFoodTargetType : ::System::Int32
	{
		All = 0,
		Alive = 1,
		Dead = 2,
	};
}
