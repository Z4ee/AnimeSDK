#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueCompositionTypeDisableOperation_TypeDefinitionIndex = 14887;

	enum class RogueCompositionTypeDisableOperation : ::System::Int32
	{
		None = 0,
		Level = 1,
		Attribute = 2,
		Remove = 3,
		Clone = 4,
	};
}
