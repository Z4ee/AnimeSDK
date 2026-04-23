#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ResolveMultiValueType_TypeDefinitionIndex = 17348;

	enum class ResolveMultiValueType : ::System::Int32
	{
		GetMax = 0,
		GetMin = 1,
		GetSum = 2,
	};
}
