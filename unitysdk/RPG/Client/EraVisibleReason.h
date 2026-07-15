#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int EraVisibleReason_TypeDefinitionIndex = 69961;

	enum class EraVisibleReason : ::System::Int32
	{
		Default = 0,
		SwitchHand = 1,
	};
}
