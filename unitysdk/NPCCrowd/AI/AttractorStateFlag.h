#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int AttractorStateFlag_TypeDefinitionIndex = 46753;

	enum class AttractorStateFlag : ::System::Int32
	{
		Claimed = 4,
		Occupied = 8,
		Valid = 2,
		InValid = 1,
	};
}
