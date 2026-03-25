#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifierDispelFilterType_TypeDefinitionIndex = 21278;

	enum class ModifierDispelFilterType : ::System::Int32
	{
		OnlyDispel = 0,
		OnlyNonDispel = 1,
		AnyStatus = 2,
	};
}
