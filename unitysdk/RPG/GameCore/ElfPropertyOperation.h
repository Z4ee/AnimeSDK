#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElfPropertyOperation_TypeDefinitionIndex = 17555;

	enum class ElfPropertyOperation : ::System::Int32
	{
		Replace = 0,
		Add = 1,
		Multiply = 2,
	};
}
