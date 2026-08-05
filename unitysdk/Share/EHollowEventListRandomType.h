#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EHollowEventListRandomType_TypeDefinitionIndex = 16356;

	enum class EHollowEventListRandomType : ::System::Int16
	{
		Unlimited = 0,
		Limited = 1,
		EnumCount = 2,
	};
}
