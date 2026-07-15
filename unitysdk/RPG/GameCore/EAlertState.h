#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int EAlertState_TypeDefinitionIndex = 54578;

	enum class EAlertState : ::System::Int32
	{
		Idle = 0,
		Guard = 1,
		Chase = 2,
	};
}
