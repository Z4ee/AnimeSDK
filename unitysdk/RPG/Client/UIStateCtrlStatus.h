#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int UIStateCtrlStatus_TypeDefinitionIndex = 69080;

	enum class UIStateCtrlStatus : ::System::Int32
	{
		None = 0,
		Playing = 1,
		Paused = 2,
		Completed = 3,
		Error = 4,
	};
}
