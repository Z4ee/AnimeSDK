#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int BadgeType_TypeDefinitionIndex = 12458;

	enum class BadgeType : ::System::Int32
	{
		None = 0,
		Gold = 1,
		Silver = 2,
		Bronze = 3,
		Ultra = 4,
	};
}
