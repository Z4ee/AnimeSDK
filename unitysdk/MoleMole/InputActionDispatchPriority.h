#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int InputActionDispatchPriority_TypeDefinitionIndex = 74836;

	enum class InputActionDispatchPriority : ::System::Int32
	{
		Low = -1,
		Normal = 0,
		High = 1,
		Critical = 2,
	};
}
