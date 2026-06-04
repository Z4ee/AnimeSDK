#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateTraitMode_TypeDefinitionIndex = 11061;

	enum class FateTraitMode : ::System::Int32
	{
		Replace = 1,
		Additional = 2,
	};
}
