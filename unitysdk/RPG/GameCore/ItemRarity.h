#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ItemRarity_TypeDefinitionIndex = 10214;

	enum class ItemRarity : ::System::Int32
	{
		Unknown = 0,
		Normal = 1,
		NotNormal = 2,
		Rare = 3,
		VeryRare = 4,
		SuperRare = 5,
	};
}
