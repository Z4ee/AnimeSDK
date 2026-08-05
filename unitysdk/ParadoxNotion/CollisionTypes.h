#pragma once
#include "unitysdk/unitysdk.h"

namespace ParadoxNotion
{
	inline static constexpr unsigned int CollisionTypes_TypeDefinitionIndex = 30694;

	enum class CollisionTypes : ::System::Int32
	{
		CollisionStay = 2,
		CollisionEnter = 0,
		CollisionExit = 1,
	};
}
