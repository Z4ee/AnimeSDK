#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExMic_DeviceInfo_TypeDefinitionIndex = 37886;

	struct alignas(8) CriAtomExMic_DeviceInfo
	{
		::System::String* deviceId; // 0x10
		::System::String* deviceName; // 0x18
		::System::UInt32 deviceFlags; // 0x20
		::System::Int32 maxChannels; // 0x24
		::System::Int32 maxSamplingRate; // 0x28
	};
}
