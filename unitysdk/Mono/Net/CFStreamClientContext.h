#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Mono::Net
{
	inline static constexpr unsigned int CFStreamClientContext_TypeDefinitionIndex = 2402;

	struct alignas(8) CFStreamClientContext
	{
		::System::IntPtr Version; // 0x10
		::System::IntPtr Info; // 0x18
		::System::IntPtr Retain; // 0x20
		::System::IntPtr Release; // 0x28
		::System::IntPtr CopyDescription; // 0x30
	};
}
