#pragma once
#include "unitysdk/unitysdk.h"

namespace FluffyUnderware::DevTools
{
	inline static constexpr unsigned int ActionAttribute_ActionEnum_TypeDefinitionIndex = 28314;

	enum class ActionAttribute_ActionEnum : ::System::Int32
	{
		Show = 0,
		Hide = 1,
		Enable = 2,
		Disable = 3,
		ShowInfo = 4,
		ShowWarning = 5,
		ShowError = 6,
		Callback = 7,
	};
}
