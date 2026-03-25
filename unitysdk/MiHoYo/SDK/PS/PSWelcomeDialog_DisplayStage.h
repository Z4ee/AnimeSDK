#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK::PS
{
	inline static constexpr unsigned int PSWelcomeDialog_DisplayStage_TypeDefinitionIndex = 7560;

	enum class PSWelcomeDialog_DisplayStage : ::System::Int32
	{
		BindingModeSelection = 1,
		CreateNewAccountPrompt = 2,
	};
}
