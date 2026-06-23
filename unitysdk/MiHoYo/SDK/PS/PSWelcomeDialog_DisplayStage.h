#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK::PS
{
	inline static constexpr unsigned int PSWelcomeDialog_DisplayStage_TypeDefinitionIndex = 20689;

	enum class PSWelcomeDialog_DisplayStage : ::System::Int32
	{
		BindingModeSelection = 1,
		CreateNewAccountPrompt = 2,
	};
}
