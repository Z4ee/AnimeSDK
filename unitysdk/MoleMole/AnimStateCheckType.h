#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int AnimStateCheckType_TypeDefinitionIndex = 43674;

	enum class AnimStateCheckType : ::System::Int32
	{
		LoopCheckAlways = 2,
		Normal = 0,
		LoopCheckOnce = 1,
	};
}
