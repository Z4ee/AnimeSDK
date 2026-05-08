#pragma once
#include "unitysdk/unitysdk.h"

namespace ParadoxNotion
{
	inline static constexpr unsigned int CollisionTypes_TypeDefinitionIndex = 27512;

	enum class CollisionTypes : ::System::Int32
	{
		CollisionExit = 1,
		CollisionStay = 2,
		CollisionEnter = 0,
	};
}
