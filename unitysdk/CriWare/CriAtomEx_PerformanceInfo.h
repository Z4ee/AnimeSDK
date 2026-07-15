#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace CriWare
{
	inline static constexpr unsigned int CriAtomEx_PerformanceInfo_TypeDefinitionIndex = 37821;

	struct alignas(4) CriAtomEx_PerformanceInfo
	{
		::System::UInt32 serverProcessCount; // 0x10
		::System::UInt32 lastServerTime; // 0x14
		::System::UInt32 maxServerTime; // 0x18
		::System::UInt32 averageServerTime; // 0x1C
		::System::UInt32 lastServerInterval; // 0x20
		::System::UInt32 maxServerInterval; // 0x24
		::System::UInt32 averageServerInterval; // 0x28
	};
}
