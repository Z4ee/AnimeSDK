#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int GoodsTypeEnum_TypeDefinitionIndex = 12136;

	enum class GoodsTypeEnum : ::System::Int32
	{
		Unknown = 0,
		Small = 1,
		Medium = 2,
		Large = 3,
	};
}
