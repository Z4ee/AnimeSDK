#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int DispelOrder_TypeDefinitionIndex = 20866;

	enum class DispelOrder : ::System::Int32
	{
		Random = 0,
		LastAdded = 1,
		FirstAdded = 2,
	};
}
