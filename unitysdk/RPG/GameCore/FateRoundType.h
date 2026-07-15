#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateRoundType_TypeDefinitionIndex = 11084;

	enum class FateRoundType : ::System::Int32
	{
		None = 0,
		Common = 1,
		Reiju = 2,
		Hougu = 3,
	};
}
