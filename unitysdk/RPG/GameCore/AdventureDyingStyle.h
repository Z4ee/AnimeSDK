#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureDyingStyle_TypeDefinitionIndex = 19154;

	enum class AdventureDyingStyle : ::System::Int32
	{
		Dead = 0,
		Freeze = 1,
		Disappear = 2,
	};
}
