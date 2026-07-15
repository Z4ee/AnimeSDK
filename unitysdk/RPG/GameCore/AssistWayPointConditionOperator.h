#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AssistWayPointConditionOperator_TypeDefinitionIndex = 18238;

	enum class AssistWayPointConditionOperator : ::System::Int32
	{
		And = 0,
		Or = 1,
	};
}
