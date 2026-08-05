#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int AttractorStateFlag_TypeDefinitionIndex = 67221;

	enum class AttractorStateFlag : ::System::Int32
	{
		Valid = 2,
		Occupied = 8,
		InValid = 1,
		Claimed = 4,
	};
}
