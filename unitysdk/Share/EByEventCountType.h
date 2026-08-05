#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EByEventCountType_TypeDefinitionIndex = 17727;

	enum class EByEventCountType : ::System::Int16
	{
		EventID = 3,
		NodeType = 2,
		Tag = 1,
	};
}
