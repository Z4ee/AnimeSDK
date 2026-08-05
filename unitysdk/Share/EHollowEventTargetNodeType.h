#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EHollowEventTargetNodeType_TypeDefinitionIndex = 13298;

	enum class EHollowEventTargetNodeType : ::System::Int16
	{
		NonCore = 2,
		All = 0,
		Core = 1,
	};
}
