#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightPlayerOp_TypeDefinitionIndex = 60153;

	enum class GridFightPlayerOp : ::System::Int32
	{
		UsedOrb = 0,
		BoughtExp = 1,
		UsedEquip = 2,
	};
}
