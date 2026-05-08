#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EHollowEventTargetNodeType_TypeDefinitionIndex = 16990;

	enum class EHollowEventTargetNodeType : ::System::Int16
	{
		Core = 1,
		All = 0,
		NonCore = 2,
	};
}
