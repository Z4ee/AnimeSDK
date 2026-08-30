#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::NavMap
{
	inline static constexpr unsigned int NavNodeConditionParamType_TypeDefinitionIndex = 74471;

	enum class NavNodeConditionParamType : ::System::Int32
	{
		None = 0,
		GroupID = 1,
	};
}
