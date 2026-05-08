#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int AnimStateCheckType_TypeDefinitionIndex = 72588;

	enum class AnimStateCheckType : ::System::Int32
	{
		LoopCheckOnce = 1,
		LoopCheckAlways = 2,
		Normal = 0,
	};
}
