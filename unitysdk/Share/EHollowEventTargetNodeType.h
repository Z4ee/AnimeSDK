#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EHollowEventTargetNodeType_TypeDefinitionIndex = 15199;

	enum class EHollowEventTargetNodeType : ::System::Int16
	{
		NonCore = 2,
		Core = 1,
		All = 0,
	};
}
