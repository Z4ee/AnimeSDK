#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExBeatSync_Info_TypeDefinitionIndex = 31026;

	struct alignas(8) CriAtomExBeatSync_Info
	{
		::System::IntPtr playerHn; // 0x10
		::System::UInt32 playbackId; // 0x18
		::System::UInt32 barCount; // 0x1C
		::System::UInt32 beatCount; // 0x20
		::System::Single beatProgress; // 0x24
		::System::Single bpm; // 0x28
		::System::Int32 offset; // 0x2C
		::System::UInt32 numBeats; // 0x30
	};
}
