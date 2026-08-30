#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::OpenWorld
{
	inline static constexpr unsigned int FadingPriorityModifierFlags_TypeDefinitionIndex = 73845;

	enum class FadingPriorityModifierFlags : ::System::Int32
	{
		None = 0,
		FastFading = 1,
		SwitchInVision = 2,
		NearUplift = 4,
		XLUplift = 8,
		TimeoutPromote = 16,
	};
}
