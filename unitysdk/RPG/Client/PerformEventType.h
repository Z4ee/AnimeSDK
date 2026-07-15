#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int PerformEventType_TypeDefinitionIndex = 66953;

	enum class PerformEventType : ::System::Int32
	{
		Unknown = 0,
		ChestOpen = 1,
		PropDestruct = 2,
		OnSelfEffectActive = 3,
	};
}
