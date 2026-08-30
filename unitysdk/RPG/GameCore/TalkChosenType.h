#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TalkChosenType_TypeDefinitionIndex = 10560;

	enum class TalkChosenType : ::System::Int32
	{
		undefined = 0,
		loop = 1,
		random = 2,
	};
}
