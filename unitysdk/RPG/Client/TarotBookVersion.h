#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int TarotBookVersion_TypeDefinitionIndex = 65053;

	enum class TarotBookVersion : ::System::Int32
	{
		Initial = 0,
		Updated = 1,
		Final = 2,
	};
}
