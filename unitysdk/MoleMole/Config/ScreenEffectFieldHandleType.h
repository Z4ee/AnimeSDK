#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ScreenEffectFieldHandleType_TypeDefinitionIndex = 40463;

	enum class ScreenEffectFieldHandleType : ::System::Int32
	{
		UseRuntimeProfileValue = 1,
		UseNewValue = 2,
		UseProfileDefaultValue = 0,
	};
}
