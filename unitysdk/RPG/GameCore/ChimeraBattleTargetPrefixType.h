#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraBattleTargetPrefixType_TypeDefinitionIndex = 15219;

	enum class ChimeraBattleTargetPrefixType : ::System::Int32
	{
		None = 0,
		Any = 1,
		Nearby = 2,
		Front = 3,
		Behind = 4,
		FirstChimera = 6,
		AnyWithoutNearby = 5,
		FrontTwo = 7,
		AllBehinds = 8,
		ExceptFrontTwo = 9,
		AllExceptBehind = 10,
	};
}
