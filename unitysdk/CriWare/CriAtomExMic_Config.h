#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define CRIWARE_CRIATOMEXMIC_CONFIG_GET_DEFAULT_OFFSET UNITYSDK_OFFSET(0x12BE2A90)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExMic_Config_TypeDefinitionIndex = 36792;

	struct alignas(8) CriAtomExMic_Config
	{
		::System::String* deviceId; // 0x10
		::System::UInt32 flags; // 0x18
		::System::Int32 numChannels; // 0x1C
		::System::Int32 samplingRate; // 0x20
		::System::UInt32 frameSize; // 0x24
		::System::UInt32 bufferingTime; // 0x28
		::System::IntPtr context; // 0x30

		static ::CriWare::CriAtomExMic_Config get_Default()
		{
			return ((::CriWare::CriAtomExMic_Config(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_CONFIG_GET_DEFAULT_OFFSET))();
		}
	};
}
