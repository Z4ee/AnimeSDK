#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomEx_CueType.h"
#include "unitysdk/System/ValueType.h"

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExPlayback_TrackInfo_TypeDefinitionIndex = 37899;

	struct alignas(8) CriAtomExPlayback_TrackInfo
	{
		::System::UInt32 id; // 0x10
		::CriWare::CriAtomEx_CueType sequenceType; // 0x14
		::System::IntPtr playerHn; // 0x18
		::System::UInt16 trackNo; // 0x20
		::System::UInt16 reserved; // 0x22
	};
}
