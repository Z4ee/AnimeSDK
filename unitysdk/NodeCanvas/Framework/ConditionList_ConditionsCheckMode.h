#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::Framework
{
	inline static constexpr unsigned int ConditionList_ConditionsCheckMode_TypeDefinitionIndex = 29204;

	enum class ConditionList_ConditionsCheckMode : ::System::Int32
	{
		AnyTrueSuffice = 1,
		AllTrueRequired = 0,
	};
}
