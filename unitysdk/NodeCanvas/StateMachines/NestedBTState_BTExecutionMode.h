#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::StateMachines
{
	inline static constexpr unsigned int NestedBTState_BTExecutionMode_TypeDefinitionIndex = 30282;

	enum class NestedBTState_BTExecutionMode : ::System::Int32
	{
		Once = 0,
		Repeat = 1,
	};
}
