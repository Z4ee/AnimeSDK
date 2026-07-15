#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateTraitMode_TypeDefinitionIndex = 11111;

	enum class FateTraitMode : ::System::Int32
	{
		Replace = 1,
		Additional = 2,
	};
}
