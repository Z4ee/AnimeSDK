#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExAsrRack_PerformanceInfo_TypeDefinitionIndex = 37763;

	struct alignas(4) CriAtomExAsrRack_PerformanceInfo
	{
		::System::UInt32 processCount; // 0x10
		::System::UInt32 lastProcessTime; // 0x14
		::System::UInt32 maxProcessTime; // 0x18
		::System::UInt32 averageProcessTime; // 0x1C
		::System::UInt32 lastProcessInterval; // 0x20
		::System::UInt32 maxProcessInterval; // 0x24
		::System::UInt32 averageProcessInterval; // 0x28
		::System::UInt32 lastProcessSamples; // 0x2C
		::System::UInt32 maxProcessSamples; // 0x30
		::System::UInt32 averageProcessSamples; // 0x34
	};
}
