#pragma once
#include "unitysdk/unitysdk.h"

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeTransitionSourceType_TypeDefinitionIndex = 28298;

	enum class StateTreeTransitionSourceType : ::System::Byte
	{
		Unset = 0x0,
		Asset = 0x1,
		ExternalRequest = 0x2,
		Internal = 0x3,
	};
}
