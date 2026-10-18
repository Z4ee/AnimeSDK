#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int B51RacingContentType_TypeDefinitionIndex = 10944;

	enum class B51RacingContentType : ::System::Int32
	{
		None = 0,
		Match = 1,
		Development = 2,
		Mission = 3,
	};
}
