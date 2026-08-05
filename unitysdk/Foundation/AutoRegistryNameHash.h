#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1.h"
#include "unitysdk/System/Span_1.h"

namespace System { class String; }

#define FOUNDATION_AUTOREGISTRYNAMEHASH_COMPUTEHASH_1_OFFSET UNITYSDK_OFFSET(0x1B83E1D0)
#define FOUNDATION_AUTOREGISTRYNAMEHASH_COMPUTEHASH_2_OFFSET UNITYSDK_OFFSET(0x1B83E0A0)
#define FOUNDATION_AUTOREGISTRYNAMEHASH_COMPUTEHASH_OFFSET UNITYSDK_OFFSET(0x1B83DE20)
#define FOUNDATION_AUTOREGISTRYNAMEHASH_COMPUTEUTF8HASH_1_OFFSET UNITYSDK_OFFSET(0x1B83EF90)
#define FOUNDATION_AUTOREGISTRYNAMEHASH_COMPUTEUTF8HASH_2_OFFSET UNITYSDK_OFFSET(0x1B83E760)
#define FOUNDATION_AUTOREGISTRYNAMEHASH_COMPUTEUTF8HASH_OFFSET UNITYSDK_OFFSET(0x1B83E630)
#define FOUNDATION_AUTOREGISTRYNAMEHASH_ENCODEUTF8_OFFSET UNITYSDK_OFFSET(0x1B83F0C0)

namespace Foundation
{
	inline static constexpr unsigned int AutoRegistryNameHash_TypeDefinitionIndex = 8276;

	class AutoRegistryNameHash : public ::System::Object
	{
	public:
		// static const ::System::UInt64 InvalidHash = 0x0; // 0x0
		// static const ::System::UInt64 DefaultSeed = 0x0; // 0x0
		// static const ::System::Int32 MaxStackAllocUtf8Bytes = 0x200; // 0x0

		static ::System::UInt64 ComputeHash(::System::String* name)
		{
			return ((::System::UInt64(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_AUTOREGISTRYNAMEHASH_COMPUTEHASH_OFFSET))(name);
		}

		static ::System::UInt64 ComputeHash_1(::System::String* name, ::System::UInt64 seed)
		{
			return ((::System::UInt64(*)(::System::String*, ::System::UInt64))((::PBYTE)hIl2Cpp + FOUNDATION_AUTOREGISTRYNAMEHASH_COMPUTEHASH_1_OFFSET))(name, seed);
		}

		static ::System::UInt64 ComputeHash_2(::System::ReadOnlySpan_1<::System::Char> name, ::System::UInt64 seed)
		{
			return ((::System::UInt64(*)(::System::ReadOnlySpan_1<::System::Char>, ::System::UInt64))((::PBYTE)hIl2Cpp + FOUNDATION_AUTOREGISTRYNAMEHASH_COMPUTEHASH_2_OFFSET))(name, seed);
		}

		static ::System::UInt64 ComputeUtf8Hash(::System::String* name)
		{
			return ((::System::UInt64(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_AUTOREGISTRYNAMEHASH_COMPUTEUTF8HASH_OFFSET))(name);
		}

		static ::System::UInt64 ComputeUtf8Hash_1(::System::String* name, ::System::UInt64 seed)
		{
			return ((::System::UInt64(*)(::System::String*, ::System::UInt64))((::PBYTE)hIl2Cpp + FOUNDATION_AUTOREGISTRYNAMEHASH_COMPUTEUTF8HASH_1_OFFSET))(name, seed);
		}

		static ::System::UInt64 ComputeUtf8Hash_2(::System::ReadOnlySpan_1<::System::Char> name, ::System::UInt64 seed)
		{
			return ((::System::UInt64(*)(::System::ReadOnlySpan_1<::System::Char>, ::System::UInt64))((::PBYTE)hIl2Cpp + FOUNDATION_AUTOREGISTRYNAMEHASH_COMPUTEUTF8HASH_2_OFFSET))(name, seed);
		}

		static ::System::Int32 EncodeUtf8(::System::ReadOnlySpan_1<::System::Char> chars, ::System::Span_1<::System::Byte> bytes)
		{
			return ((::System::Int32(*)(::System::ReadOnlySpan_1<::System::Char>, ::System::Span_1<::System::Byte>))((::PBYTE)hIl2Cpp + FOUNDATION_AUTOREGISTRYNAMEHASH_ENCODEUTF8_OFFSET))(chars, bytes);
		}
	};
}
