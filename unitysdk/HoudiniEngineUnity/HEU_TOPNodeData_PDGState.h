#pragma once
#include "unitysdk/unitysdk.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_TOPNodeData_PDGState_TypeDefinitionIndex = 38384;

	enum class HEU_TOPNodeData_PDGState : ::System::Int32
	{
		NONE = 0,
		DIRTIED = 1,
		DIRTYING = 2,
		COOKING = 3,
		COOK_COMPLETE = 4,
		COOK_FAILED = 5,
	};
}
