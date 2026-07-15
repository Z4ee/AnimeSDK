#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int GuideType_TypeDefinitionIndex = 12876;

	enum class GuideType : ::System::Int32
	{
		Unknown = 0,
		FarmCocoon = 1,
		FarmElement = 2,
		Raid = 3,
		FarmCocoon2 = 4,
		FarmCocoon3 = 5,
		FarmRelic = 6,
		Rogue = 7,
		Challenge = 8,
		RogueTourn = 9,
		GrowthTarget = 10,
	};
}
