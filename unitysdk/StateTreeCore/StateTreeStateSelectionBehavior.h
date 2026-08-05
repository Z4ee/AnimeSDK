#pragma once
#include "unitysdk/unitysdk.h"

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeStateSelectionBehavior_TypeDefinitionIndex = 31683;

	enum class StateTreeStateSelectionBehavior : ::System::Byte
	{
		None = 0x0,
		TryEnterState = 0x1,
		TrySelectChildrenInOrder = 0x2,
		TryFollowTransitions = 0x3,
	};
}
