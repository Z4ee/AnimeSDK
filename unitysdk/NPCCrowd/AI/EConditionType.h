#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int EConditionType_TypeDefinitionIndex = 74847;

	enum class EConditionType : ::System::Int32
	{
		Compare = 2,
		Time = 1,
		Default = 3,
		None = 0,
		Entity = 4,
	};
}
