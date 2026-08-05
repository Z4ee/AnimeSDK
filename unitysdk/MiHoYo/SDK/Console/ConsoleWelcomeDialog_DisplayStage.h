#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int ConsoleWelcomeDialog_DisplayStage_TypeDefinitionIndex = 21106;

	enum class ConsoleWelcomeDialog_DisplayStage : ::System::Int32
	{
		BindingModeSelection = 1,
		CreateNewAccountPrompt = 2,
	};
}
