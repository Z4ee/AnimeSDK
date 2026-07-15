#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AlleyPackAnchorType_TypeDefinitionIndex = 12149;

	enum class AlleyPackAnchorType : ::System::Int32
	{
		Unknown = 0,
		Small = 1,
		Medium = 2,
		Large = 3,
	};
}
