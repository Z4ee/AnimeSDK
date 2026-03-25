#pragma once
#include "unitysdk/unitysdk.h"

namespace System
{
	inline static constexpr unsigned int AppContext_SwitchValueState_TypeDefinitionIndex = 156;

	enum class AppContext_SwitchValueState : ::System::Int32
	{
		HasFalseValue = 1,
		HasTrueValue = 2,
		HasLookedForOverride = 4,
		UnknownValue = 8,
	};
}
