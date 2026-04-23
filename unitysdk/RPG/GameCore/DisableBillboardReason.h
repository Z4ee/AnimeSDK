#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int DisableBillboardReason_TypeDefinitionIndex = 52895;

	enum class DisableBillboardReason : ::System::Int32
	{
		Default = 0,
		PropState = 1,
		MapRotation = 2,
	};
}
