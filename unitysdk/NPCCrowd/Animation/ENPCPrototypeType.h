#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int ENPCPrototypeType_TypeDefinitionIndex = 90349;

	enum class ENPCPrototypeType : ::System::Int32
	{
		Undefined = 0,
		Child = 3,
		Male = 1,
		Female = 2,
	};
}
