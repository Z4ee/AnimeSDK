#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int EWPPathDirection_TypeDefinitionIndex = 84566;

	enum class EWPPathDirection : ::System::Int32
	{
		Backward = 1,
		HugeLeft = 2,
		Forward = 0,
		HugeRight = 3,
	};
}
