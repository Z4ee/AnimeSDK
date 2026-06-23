#pragma once
#include "unitysdk/unitysdk.h"

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeStateType_TypeDefinitionIndex = 31063;

	enum class StateTreeStateType : ::System::Byte
	{
		State = 0x0,
		Group = 0x1,
		Linked = 0x2,
		LinkedAsset = 0x3,
		Subtree = 0x4,
	};
}
