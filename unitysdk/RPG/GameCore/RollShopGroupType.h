#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RollShopGroupType_TypeDefinitionIndex = 10276;

	enum class RollShopGroupType : ::System::Int32
	{
		None = 0,
		T1Group = 1,
		T2Group = 2,
		T3Group = 3,
		T4Group = 4,
		SecretGroup = 5,
		SpecialGroup = 6,
	};
}
