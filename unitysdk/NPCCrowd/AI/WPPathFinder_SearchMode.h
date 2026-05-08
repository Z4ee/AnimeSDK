#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int WPPathFinder_SearchMode_TypeDefinitionIndex = 53060;

	enum class WPPathFinder_SearchMode : ::System::Int32
	{
		Intermediate = 1,
		Complex = 2,
		Simple = 0,
	};
}
