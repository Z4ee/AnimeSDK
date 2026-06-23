#pragma once
#include "unitysdk/unitysdk.h"

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeTransitionPriority_TypeDefinitionIndex = 31066;

	enum class StateTreeTransitionPriority : ::System::Byte
	{
		None = 0x0,
		Normal = 0x1,
		Medium = 0x2,
		High = 0x3,
		Critical = 0x4,
	};
}
