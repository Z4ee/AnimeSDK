#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtPropertyCategory_TypeDefinitionIndex = 51529;

	enum class RtPropertyCategory : ::System::Int32
	{
		Unknown = 0,
		Empty = 1,
		Normal = 2,
		Composite = 3,
		Stackable = 4,
	};
}
