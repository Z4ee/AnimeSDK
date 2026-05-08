#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RBDDestruction
{
	inline static constexpr unsigned int RBDManager_DebugInfo_TypeDefinitionIndex = 29717;

	struct alignas(4) RBDManager_DebugInfo
	{
		::System::Int32 hitFragID; // 0x10
		::System::Single currentHP; // 0x14
	};
}
