#pragma once
#include "unitysdk/unitysdk.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_ShelfToolData_ToolType_TypeDefinitionIndex = 38506;

	enum class HEU_ShelfToolData_ToolType : ::System::Int32
	{
		GENERATOR = 0,
		OPERATOR_SINGLE = 1,
		OPERATOR_MULTI = 2,
		BATCH = 3,
	};
}
