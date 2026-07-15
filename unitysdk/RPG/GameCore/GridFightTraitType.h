#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightTraitType_TypeDefinitionIndex = 10210;

	enum class GridFightTraitType : ::System::Int32
	{
		Origin = 0,
		Class = 1,
		Unique = 2,
	};
}
