#pragma once
#include "unitysdk/unitysdk.h"

namespace ProtoScript
{
	inline static constexpr unsigned int ModTimeType_TypeDefinitionIndex = 25588;

	enum class ModTimeType : ::System::Int32
	{
		MOD_TIME_ADD_MINUTE = 3,
		MOD_TIME_ADD_PERIOD = 2,
		MOD_TIME_TYPE_NONE = 0,
		MOD_TIME_SET = 1,
	};
}
