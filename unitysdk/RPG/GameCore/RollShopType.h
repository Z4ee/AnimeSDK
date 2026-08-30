#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RollShopType_TypeDefinitionIndex = 14912;

	enum class RollShopType : ::System::Int32
	{
		Normal = 1,
		Mall = 2,
	};
}
