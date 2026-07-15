#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ResolveMultiValueType_TypeDefinitionIndex = 17525;

	enum class ResolveMultiValueType : ::System::Int32
	{
		GetMax = 0,
		GetMin = 1,
		GetSum = 2,
	};
}
