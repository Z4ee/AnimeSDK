#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExSequencer_CriAtomExSequenceEventInfo_TypeDefinitionIndex = 37841;

	struct alignas(8) CriAtomExSequencer_CriAtomExSequenceEventInfo
	{
		::System::UInt64 position; // 0x10
		::System::IntPtr playerHn; // 0x18
		::System::String* tag; // 0x20
		::System::UInt32 playbackId; // 0x28
		::System::Int32 type; // 0x2C
		::System::UInt32 id; // 0x30
		::System::UInt32 reserved; // 0x34
	};
}
