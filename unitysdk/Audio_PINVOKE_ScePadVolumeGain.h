#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

inline static constexpr unsigned int Audio_PINVOKE_ScePadVolumeGain_TypeDefinitionIndex = 80169;

struct alignas(1) Audio_PINVOKE_ScePadVolumeGain
{
	::System::Byte speakerVol; // 0x10
	::System::Byte jackVol; // 0x11
	::System::Byte reserved; // 0x12
	::System::Byte micGain; // 0x13
};
