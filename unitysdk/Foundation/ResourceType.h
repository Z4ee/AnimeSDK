#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int ResourceType_TypeDefinitionIndex = 8296;

	enum class ResourceType : ::System::Int32
	{
		Empty = 3,
		Local_Resource = 0,
		Local_Bundle = 1,
		Update_Resource = 2,
	};
}
