#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightHandBookItemStatus_TypeDefinitionIndex = 61973;

	enum class GridFightHandBookItemStatus : ::System::Int32
	{
		NotSeen = 0,
		Seen = 1,
		Completed = 2,
		Invalid = 3,
	};
}
