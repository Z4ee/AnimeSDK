#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ScreenTransferMode_TypeDefinitionIndex = 23915;

	enum class ScreenTransferMode : ::System::Int32
	{
		SwitchIn = 0,
		SwitchOut = 1,
		FullTransfer = 2,
		DirectlySet = 3,
	};
}
