#pragma once
#include "unitysdk/unitysdk.h"

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeStateChangeType_TypeDefinitionIndex = 28285;

	enum class StateTreeStateChangeType : ::System::Byte
	{
		None = 0x0,
		Changed = 0x1,
		Sustained = 0x2,
	};
}
