#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int ChimeraLockReason_TypeDefinitionIndex = 38726;

	enum class ChimeraLockReason : ::System::Int32
	{
		None = 0,
		Event = 1,
	};
}
