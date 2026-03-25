#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TurnInsertActionConditionType_TypeDefinitionIndex = 16752;

	enum class TurnInsertActionConditionType : ::System::Int32
	{
		None = 0,
		SameTagInsertCount = 1,
		SameTagInsertUnusedCount = 2,
	};
}
