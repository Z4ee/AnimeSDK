#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int HipplenMiniGameType_TypeDefinitionIndex = 11213;

	enum class HipplenMiniGameType : ::System::Int32
	{
		CountingChimera = 0,
		PickingGoods = 1,
		MovingGoods = 2,
	};
}
