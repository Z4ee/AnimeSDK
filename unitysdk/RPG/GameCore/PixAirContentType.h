#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int PixAirContentType_TypeDefinitionIndex = 11653;

	enum class PixAirContentType : ::System::Int32
	{
		None = 0,
		Supply = 1,
		Shop = 2,
		Event = 3,
		Battle = 4,
		GroupedBattle = 5,
		ShopGroup = 6,
	};
}
