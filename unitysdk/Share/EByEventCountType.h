#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EByEventCountType_TypeDefinitionIndex = 17408;

	enum class EByEventCountType : ::System::Int16
	{
		EventID = 3,
		Tag = 1,
		NodeType = 2,
	};
}
