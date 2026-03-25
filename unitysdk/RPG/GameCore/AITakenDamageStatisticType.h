#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AITakenDamageStatisticType_TypeDefinitionIndex = 14273;

	enum class AITakenDamageStatisticType : ::System::Int32
	{
		SinceOwnerLastAction = 0,
		SinceOwnerCreated = 1,
		SinceTargetCreated = 2,
	};
}
