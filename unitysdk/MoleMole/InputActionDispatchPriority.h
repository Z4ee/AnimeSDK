#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int InputActionDispatchPriority_TypeDefinitionIndex = 41306;

	enum class InputActionDispatchPriority : ::System::Int32
	{
		Low = -1,
		High = 1,
		Normal = 0,
		Critical = 2,
	};
}
