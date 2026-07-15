#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int PPEffectFilterPriority_TypeDefinitionIndex = 23626;

	enum class PPEffectFilterPriority : ::System::Int32
	{
		Low = 0,
		Middle = 1,
		High = 2,
	};
}
