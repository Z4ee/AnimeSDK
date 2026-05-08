#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EHollowEventPoolType_TypeDefinitionIndex = 15326;

	enum class EHollowEventPoolType : ::System::Int16
	{
		Manual = 1,
		Random = 0,
	};
}
