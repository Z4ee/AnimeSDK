#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RequestPassByValueSourceType_TypeDefinitionIndex = 23648;

	enum class RequestPassByValueSourceType : ::System::Int32
	{
		FCV = 0,
		FSV = 1,
		GroupProperty = 2,
		DynamicValue = 3,
	};
}
