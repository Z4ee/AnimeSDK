#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueImageType_TypeDefinitionIndex = 14220;

	enum class RogueImageType : ::System::Int32
	{
		None = 0,
		RandomEvt = 1,
		Aeon = 2,
		Other = 3,
		Horizon = 4,
	};
}
