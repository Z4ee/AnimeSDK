#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int ActivityHipplenBubbleType_TypeDefinitionIndex = 75164;

	enum class ActivityHipplenBubbleType : ::System::Int32
	{
		Normal = 0,
		RequireGoods = 1,
	};
}
