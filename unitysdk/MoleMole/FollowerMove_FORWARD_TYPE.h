#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int FollowerMove_FORWARD_TYPE_TypeDefinitionIndex = 55511;

	enum class FollowerMove_FORWARD_TYPE : ::System::Int32
	{
		KEEP_STATIC = 0,
		BACK_TO_CAMERA = 1,
		SAME_WITH_ANBI = 2,
	};
}
