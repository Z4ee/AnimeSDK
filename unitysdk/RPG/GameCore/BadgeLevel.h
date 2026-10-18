#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int BadgeLevel_TypeDefinitionIndex = 12827;

	enum class BadgeLevel : ::System::Int32
	{
		None = 0,
		Gold = 1,
		Silver = 2,
		Bronze = 3,
		Ultra = 4,
	};
}
