#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int InteractTriggerMode_TypeDefinitionIndex = 42779;

	enum class InteractTriggerMode : ::System::Int32
	{
		Normal = 0,
		Auto = 1,
	};
}
