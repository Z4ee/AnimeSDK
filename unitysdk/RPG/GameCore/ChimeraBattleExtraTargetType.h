#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraBattleExtraTargetType_TypeDefinitionIndex = 15221;

	enum class ChimeraBattleExtraTargetType : ::System::Int32
	{
		None = 0,
		Front = 1,
		Behind = 2,
	};
}
