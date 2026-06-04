#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int WorkGroupType_TypeDefinitionIndex = 57066;

	enum class WorkGroupType : ::System::Int32
	{
		Parallel = 0,
		Sequence = 1,
	};
}
