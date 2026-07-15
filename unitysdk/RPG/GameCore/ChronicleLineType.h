#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChronicleLineType_TypeDefinitionIndex = 18224;

	enum class ChronicleLineType : ::System::Int32
	{
		UnKnown = 0,
		Normal = 1,
		Extend = 2,
		Hide = 3,
	};
}
