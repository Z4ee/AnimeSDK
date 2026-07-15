#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int PixAirContentRarity_TypeDefinitionIndex = 11655;

	enum class PixAirContentRarity : ::System::Int32
	{
		Common = 0,
		Rare = 1,
		Epic = 2,
	};
}
