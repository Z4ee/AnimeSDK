#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int MonoExUICamera_E_ExUICameraOut_TypeDefinitionIndex = 72896;

	enum class MonoExUICamera_E_ExUICameraOut : ::System::Int32
	{
		None = 0,
		Left = 1,
		Top = 2,
		Right = 4,
		Bottom = 8,
	};
}
