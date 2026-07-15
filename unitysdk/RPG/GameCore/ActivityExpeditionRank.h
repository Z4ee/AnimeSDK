#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityExpeditionRank_TypeDefinitionIndex = 11051;

	enum class ActivityExpeditionRank : ::System::Int32
	{
		None = 0,
		Low = 1,
		Middle = 2,
		High = 3,
	};
}
