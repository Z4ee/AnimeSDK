#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int UISymbolFilterType_TypeDefinitionIndex = 68126;

	enum class UISymbolFilterType : ::System::Int32
	{
		Letter = 2,
		Number = 4,
		CJKUnifiedIdeographs = 8,
	};
}
