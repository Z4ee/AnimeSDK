#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int UIManager_ClearReason_TypeDefinitionIndex = 72985;

	enum class UIManager_ClearReason : ::System::Int32
	{
		GamePhaseChanged = 0,
		Dispose = 1,
	};
}
