#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int FeixiaoSPPointState_TypeDefinitionIndex = 71859;

	enum class FeixiaoSPPointState : ::System::Int32
	{
		Empty = 0,
		Normal = 1,
		Active = 2,
		Break = 3,
		Max = 4,
		MaxLv2 = 5,
	};
}
