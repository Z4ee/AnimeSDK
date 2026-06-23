#pragma once
#include "unitysdk/unitysdk.h"

namespace ParadoxNotion
{
	inline static constexpr unsigned int CollisionTypes_TypeDefinitionIndex = 30524;

	enum class CollisionTypes : ::System::Int32
	{
		CollisionStay = 2,
		CollisionExit = 1,
		CollisionEnter = 0,
	};
}
