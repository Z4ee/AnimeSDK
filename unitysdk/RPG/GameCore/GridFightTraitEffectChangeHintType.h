#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightTraitEffectChangeHintType_TypeDefinitionIndex = 23854;

	enum class GridFightTraitEffectChangeHintType : ::System::Int32
	{
		None = 0,
		Normal = 1,
		Special = 2,
	};
}
