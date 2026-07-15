#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int DialogueConditionType_TypeDefinitionIndex = 13755;

	enum class DialogueConditionType : ::System::Int32
	{
		undefined = 0,
		submission_state_equal = 1,
		eventmission_state_equal = 2,
		item_state_equal = 3,
	};
}
