#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int UISymbolFilterSource_TypeDefinitionIndex = 59792;

	enum class UISymbolFilterSource : ::System::Int32
	{
		None = 0,
		CDKey = 1,
		Alphanumeric = 2,
	};
}
