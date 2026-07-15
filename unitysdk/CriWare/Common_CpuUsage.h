#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace CriWare
{
	inline static constexpr unsigned int Common_CpuUsage_TypeDefinitionIndex = 37982;

	struct alignas(4) Common_CpuUsage
	{
		::System::Single last; // 0x10
		::System::Single average; // 0x14
		::System::Single peak; // 0x18
	};
}
