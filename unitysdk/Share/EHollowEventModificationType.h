#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EHollowEventModificationType_TypeDefinitionIndex = 12410;

	enum class EHollowEventModificationType : ::System::Int16
	{
		Random = 1,
		Foreach = 2,
	};
}
