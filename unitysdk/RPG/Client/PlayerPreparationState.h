#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerPreparationState_TypeDefinitionIndex = 62142;

	enum class PlayerPreparationState : ::System::Int32
	{
		None = 0,
		BattleLock = 1,
		PendingLock = 2,
	};
}
