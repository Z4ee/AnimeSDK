#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriMana/AudioCodecType.h"
#include "unitysdk/System/ValueType.h"

namespace CriWare::CriMana
{
	inline static constexpr unsigned int AudioInfo_TypeDefinitionIndex = 38053;

	struct alignas(4) AudioInfo
	{
		::System::UInt32 samplingRate; // 0x10
		::System::UInt32 numChannels; // 0x14
		::System::UInt32 totalSamples; // 0x18
		::CriWare::CriMana::AudioCodecType codecType; // 0x1C
	};
}
