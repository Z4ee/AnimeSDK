#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolyContentType_TypeDefinitionIndex = 63335;

	enum class MonopolyContentType : ::System::Int32
	{
		None = 0,
		Shop = 1,
		Asset = 2,
		Game = 3,
		Friend = 4,
		SimpleEvent = 5,
		RandomEvent = 6,
		OptionEvent = 7,
		RandomOptionEvent = 8,
		OptionalGroupEvent = 9,
	};
}
