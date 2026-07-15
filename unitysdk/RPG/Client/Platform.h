#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int Platform_TypeDefinitionIndex = 64917;

	enum class Platform : ::System::Int32
	{
		None = 0,
		PC = 1,
		iOS = 2,
		Android = 3,
		PS4Base = 4,
		PS4Pro = 5,
		PS5 = 6,
	};
}
