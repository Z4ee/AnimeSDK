#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingFesAwardTypeEnum_TypeDefinitionIndex = 10717;

	enum class ChenLingFesAwardTypeEnum : ::System::Int32
	{
		Unknown = 0,
		Reroll = 1,
		Extra = 2,
		Adjust = 3,
		Extend = 4,
	};
}
