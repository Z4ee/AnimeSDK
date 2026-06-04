#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AlertMode_TypeDefinitionIndex = 53553;

	enum class AlertMode : ::System::Int32
	{
		Normal = 0,
		MuteDecline = 1,
	};
}
