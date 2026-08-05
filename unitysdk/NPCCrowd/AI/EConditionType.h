#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int EConditionType_TypeDefinitionIndex = 40230;

	enum class EConditionType : ::System::Int32
	{
		None = 0,
		Time = 1,
		Compare = 2,
		Entity = 4,
		Default = 3,
	};
}
