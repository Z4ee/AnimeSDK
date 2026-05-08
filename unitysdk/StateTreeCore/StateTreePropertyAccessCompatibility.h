#pragma once
#include "unitysdk/unitysdk.h"

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreePropertyAccessCompatibility_TypeDefinitionIndex = 28362;

	enum class StateTreePropertyAccessCompatibility : ::System::Int32
	{
		Incompatible = 0,
		Compatible = 1,
		Promotable = 2,
	};
}
