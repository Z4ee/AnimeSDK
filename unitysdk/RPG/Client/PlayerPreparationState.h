#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerPreparationState_TypeDefinitionIndex = 65066;

	enum class PlayerPreparationState : ::System::Int32
	{
		None = 0,
		BattleLock = 1,
		PendingLock = 2,
	};
}
