#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyOptionType_TypeDefinitionIndex = 11558;

	enum class MonopolyOptionType : ::System::Int32
	{
		Default = 0,
		Common = 1,
		Positive = 2,
		Negative = 3,
		Hidden = 4,
		Random = 5,
	};
}
