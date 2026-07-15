#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int GroupType_TypeDefinitionIndex = 14822;

	enum class GroupType : ::System::Int32
	{
		None = 0,
		Random = 1,
		Rotate = 2,
	};
}
