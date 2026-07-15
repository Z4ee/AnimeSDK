#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerceiveValueTriggerType_TypeDefinitionIndex = 23741;

	enum class PerceiveValueTriggerType : ::System::Int32
	{
		GreaterThan = 0,
		LittleThan = 1,
	};
}
