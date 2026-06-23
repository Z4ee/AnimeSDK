#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd
{
	inline static constexpr unsigned int EDynamicUnloadPriority_TypeDefinitionIndex = 43426;

	enum class EDynamicUnloadPriority : ::System::Int32
	{
		Protected = 0,
		Delayable = 1,
		Cullable = 2,
	};
}
