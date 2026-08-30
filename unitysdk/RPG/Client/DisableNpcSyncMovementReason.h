#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int DisableNpcSyncMovementReason_TypeDefinitionIndex = 73209;

	enum class DisableNpcSyncMovementReason : ::System::Int32
	{
		Task = 0,
		Die = 1,
	};
}
