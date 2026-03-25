#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/MonoAssemblyName__public_key_token_e__FixedBuffer.h"
#include "unitysdk/System/ValueType.h"

namespace Mono
{
	inline static constexpr unsigned int MonoAssemblyName_TypeDefinitionIndex = 19;

	struct alignas(8) MonoAssemblyName
	{
		::System::IntPtr name; // 0x10
		::System::IntPtr culture; // 0x18
		::System::IntPtr hash_value; // 0x20
		::System::IntPtr public_key; // 0x28
		::Mono::MonoAssemblyName__public_key_token_e__FixedBuffer public_key_token; // 0x30
		::System::UInt32 hash_alg; // 0x44
		::System::UInt32 hash_len; // 0x48
		::System::UInt32 flags; // 0x4C
		::System::UInt16 major; // 0x50
		::System::UInt16 minor; // 0x52
		::System::UInt16 build; // 0x54
		::System::UInt16 revision; // 0x56
		::System::UInt16 arch; // 0x58
	};
}
