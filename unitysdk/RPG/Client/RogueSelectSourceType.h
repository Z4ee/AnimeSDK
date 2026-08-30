#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int RogueSelectSourceType_TypeDefinitionIndex = 67027;

	enum class RogueSelectSourceType : ::System::Int32
	{
		Common = 1,
		Reforge = 2,
		Compose = 3,
	};
}
