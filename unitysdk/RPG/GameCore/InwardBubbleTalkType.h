#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int InwardBubbleTalkType_TypeDefinitionIndex = 20454;

	enum class InwardBubbleTalkType : ::System::Int32
	{
		Invalid = 0,
		Atmosphere = 1,
		Joker = 2,
		Worried = 3,
	};
}
