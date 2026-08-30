#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateRinKeywordMatchMode_TypeDefinitionIndex = 24173;

	enum class FateRinKeywordMatchMode : ::System::Int32
	{
		ByAnd = 0,
		ByAny = 1,
	};
}
