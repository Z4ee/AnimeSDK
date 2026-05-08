#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int FollowerMove_FORWARD_TYPE_TypeDefinitionIndex = 59141;

	enum class FollowerMove_FORWARD_TYPE : ::System::Int32
	{
		BACK_TO_CAMERA = 1,
		SAME_WITH_ANBI = 2,
		KEEP_STATIC = 0,
	};
}
