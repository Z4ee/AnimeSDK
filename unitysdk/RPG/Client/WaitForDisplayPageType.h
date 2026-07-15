#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int WaitForDisplayPageType_TypeDefinitionIndex = 60176;

	enum class WaitForDisplayPageType : ::System::Int32
	{
		None = 0,
		NextRound = 1,
		Success = 2,
		Fail = 3,
		Quit = 4,
	};
}
