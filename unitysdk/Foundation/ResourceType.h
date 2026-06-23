#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int ResourceType_TypeDefinitionIndex = 7854;

	enum class ResourceType : ::System::Int32
	{
		Update_Resource = 2,
		Empty = 3,
		Local_Resource = 0,
		Local_Bundle = 1,
	};
}
