#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int ResourceType_TypeDefinitionIndex = 8218;

	enum class ResourceType : ::System::Int32
	{
		Local_Bundle = 1,
		Empty = 3,
		Local_Resource = 0,
		Update_Resource = 2,
	};
}
