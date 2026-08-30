#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define CRIWARE_CRIATOMEXBEATSYNC_INFO_GET_LABEL_OFFSET UNITYSDK_OFFSET(0x2E002C0)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExBeatSync_Info_TypeDefinitionIndex = 38704;

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
		::System::IntPtr labelPtr; // 0x38

		::System::String* get_label()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXBEATSYNC_INFO_GET_LABEL_OFFSET))(this);
		}
	};
}
