#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int InputActionDispatchPriority_TypeDefinitionIndex = 46793;

	enum class InputActionDispatchPriority : ::System::Int32
	{
		Normal = 0,
		High = 1,
		Critical = 2,
		Low = -1,
	};
}
