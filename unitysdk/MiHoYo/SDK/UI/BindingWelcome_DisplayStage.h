#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK::UI
{
	inline static constexpr unsigned int BindingWelcome_DisplayStage_TypeDefinitionIndex = 8329;

	enum class BindingWelcome_DisplayStage : ::System::Int32
	{
		BindingModeSelection = 1,
		CreateNewAccountPrompt = 2,
	};
}
