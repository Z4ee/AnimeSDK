#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvEnableTriggerOpType_TypeDefinitionIndex = 23651;

	enum class AdvEnableTriggerOpType : ::System::Int32
	{
		ByName = 0,
		ByType = 1,
	};
}
