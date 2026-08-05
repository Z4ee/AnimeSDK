#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AutoAimSearchMode_TypeDefinitionIndex = 53704;

	enum class AutoAimSearchMode : ::System::Int32
	{
		ScreenSpace = 0,
		CharacterCenter360 = 1,
	};
}
