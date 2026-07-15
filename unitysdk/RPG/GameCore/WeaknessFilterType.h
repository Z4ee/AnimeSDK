#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int WeaknessFilterType_TypeDefinitionIndex = 23824;

	enum class WeaknessFilterType : ::System::Int32
	{
		None = 0,
		All = 1,
		Active = 2,
		AllDefault = 3,
		Secret = 4,
	};
}
