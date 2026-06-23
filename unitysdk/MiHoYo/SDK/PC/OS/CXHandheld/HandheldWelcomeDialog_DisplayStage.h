#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK::PC::OS::CXHandheld
{
	inline static constexpr unsigned int HandheldWelcomeDialog_DisplayStage_TypeDefinitionIndex = 20569;

	enum class HandheldWelcomeDialog_DisplayStage : ::System::Int32
	{
		BindingModeSelection = 1,
		CreateNewAccountPrompt = 2,
	};
}
