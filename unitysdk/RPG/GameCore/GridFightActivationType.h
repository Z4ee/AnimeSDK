#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActivationType_TypeDefinitionIndex = 13157;

	enum class GridFightActivationType : ::System::Int32
	{
		GreaterEqualThan = 1,
		GreaterThan = 2,
		Equal = 3,
	};
}
