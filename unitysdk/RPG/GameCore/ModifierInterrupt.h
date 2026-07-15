#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifierInterrupt_TypeDefinitionIndex = 17479;

	enum class ModifierInterrupt : ::System::Int32
	{
		Unknow = 0,
		None = 2,
		Negative = 4,
		Positive = 8,
	};
}
