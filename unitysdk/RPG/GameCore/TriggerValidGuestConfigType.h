#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerValidGuestConfigType_TypeDefinitionIndex = 22160;

	enum class TriggerValidGuestConfigType : ::System::Int32
	{
		ByEntityType = 0,
		ByInstanceID = 1,
	};
}
