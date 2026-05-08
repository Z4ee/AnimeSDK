#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIComposeItemPopWindowController_Mode_TypeDefinitionIndex = 81223;

	enum class UIComposeItemPopWindowController_Mode : ::System::Int32
	{
		Compose = 0,
		Decompose = 1,
		Invalid = 5,
		Recycle = 2,
	};
}
