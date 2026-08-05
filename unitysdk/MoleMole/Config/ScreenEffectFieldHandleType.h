#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ScreenEffectFieldHandleType_TypeDefinitionIndex = 66892;

	enum class ScreenEffectFieldHandleType : ::System::Int32
	{
		UseProfileDefaultValue = 0,
		UseNewValue = 2,
		UseRuntimeProfileValue = 1,
	};
}
