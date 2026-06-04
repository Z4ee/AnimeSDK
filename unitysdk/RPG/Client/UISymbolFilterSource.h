#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int UISymbolFilterSource_TypeDefinitionIndex = 68131;

	enum class UISymbolFilterSource : ::System::Int32
	{
		None = 0,
		CDKey = 1,
		Alphanumeric = 2,
	};
}
