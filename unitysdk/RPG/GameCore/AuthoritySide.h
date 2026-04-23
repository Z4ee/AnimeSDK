#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AuthoritySide_TypeDefinitionIndex = 19722;

	enum class AuthoritySide : ::System::Int32
	{
		Client = 0,
		Server = 1,
	};
}
