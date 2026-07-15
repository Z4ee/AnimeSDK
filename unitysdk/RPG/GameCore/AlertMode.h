#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AlertMode_TypeDefinitionIndex = 54769;

	enum class AlertMode : ::System::Int32
	{
		Normal = 0,
		MuteDecline = 1,
	};
}
