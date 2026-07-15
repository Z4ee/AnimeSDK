#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace CriWare
{
	inline static constexpr unsigned int CriAtomEx_CueLinkInfo_TypeDefinitionIndex = 37824;

	struct alignas(8) CriAtomEx_CueLinkInfo
	{
		::System::IntPtr nativePlayerHn; // 0x10
		::System::UInt32 basePlaybackId; // 0x18
		::System::UInt32 targetPlaybackId; // 0x1C
		::System::Int32 cueLinkType; // 0x20
	};
}
