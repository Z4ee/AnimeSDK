#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeValidAreaType_TypeDefinitionIndex = 12304;

	enum class CakeValidAreaType : ::System::Int32
	{
		Shelf = 0,
		Ground = 1,
		Global = 2,
	};
}
