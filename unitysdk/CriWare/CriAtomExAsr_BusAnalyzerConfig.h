#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExAsr_BusAnalyzerConfig_TypeDefinitionIndex = 37848;

	struct alignas(4) CriAtomExAsr_BusAnalyzerConfig
	{
		::System::Int32 interval; // 0x10
		::System::Int32 peakHoldTime; // 0x14
	};
}
