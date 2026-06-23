#pragma once
#include "unitysdk/unitysdk.h"

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeTransitionType_TypeDefinitionIndex = 31061;

	enum class StateTreeTransitionType : ::System::Byte
	{
		None = 0x0,
		Succeeded = 0x1,
		Failed = 0x2,
		GotoState = 0x3,
		NextState = 0x4,
		NextSelectableState = 0x5,
	};
}
