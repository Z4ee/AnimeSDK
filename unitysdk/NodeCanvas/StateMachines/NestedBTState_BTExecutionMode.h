#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::StateMachines
{
	inline static constexpr unsigned int NestedBTState_BTExecutionMode_TypeDefinitionIndex = 30137;

	enum class NestedBTState_BTExecutionMode : ::System::Int32
	{
		Repeat = 1,
		Once = 0,
	};
}
