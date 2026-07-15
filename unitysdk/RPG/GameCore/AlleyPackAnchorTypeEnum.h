#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AlleyPackAnchorTypeEnum_TypeDefinitionIndex = 15072;

	enum class AlleyPackAnchorTypeEnum : ::System::Int32
	{
		Unknown = 0,
		Small = 1,
		Medium = 2,
		Large = 3,
	};
}
