#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int EConditionType_TypeDefinitionIndex = 74622;

	enum class EConditionType : ::System::Int32
	{
		None = 0,
		Time = 1,
		Entity = 4,
		Compare = 2,
		Default = 3,
	};
}
