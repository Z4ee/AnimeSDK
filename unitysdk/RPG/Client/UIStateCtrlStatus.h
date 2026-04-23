#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int UIStateCtrlStatus_TypeDefinitionIndex = 63719;

	enum class UIStateCtrlStatus : ::System::Int32
	{
		None = 0,
		Playing = 1,
		Completed = 2,
		Error = 3,
	};
}
