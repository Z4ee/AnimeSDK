#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RBDDestruction
{
	inline static constexpr unsigned int RBDManager_GroupInfo_TypeDefinitionIndex = 29708;

	struct alignas(4) RBDManager_GroupInfo
	{
		::System::Single weight; // 0x10
		::System::Single weaknessFactor; // 0x14
		::System::Int32 activeFragCount; // 0x18
		::System::Int32 totalFragCount; // 0x1C
	};
}
