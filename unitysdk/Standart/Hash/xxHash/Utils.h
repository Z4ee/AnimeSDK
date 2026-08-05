#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Standart/Hash/xxHash/uint128.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"

#define STANDART_HASH_XXHASH_UTILS_BLOCKCOPY_OFFSET UNITYSDK_OFFSET(0x1EF88CA0)
#define STANDART_HASH_XXHASH_UTILS_TOBYTES_OFFSET UNITYSDK_OFFSET(0x1EF88C20)
#define STANDART_HASH_XXHASH_UTILS_TOGUID_OFFSET UNITYSDK_OFFSET(0x1EF88BB0)

namespace Standart::Hash::xxHash
{
	inline static constexpr unsigned int Utils_TypeDefinitionIndex = 8169;

	class Utils : public ::System::Object
	{
	public:
		static ::System::Guid ToGuid(::Standart::Hash::xxHash::uint128 value)
		{
			return ((::System::Guid(*)(::Standart::Hash::xxHash::uint128))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_UTILS_TOGUID_OFFSET))(value);
		}

		static ::Il2CppArray<::System::Byte>* ToBytes(::Standart::Hash::xxHash::uint128 value)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::Standart::Hash::xxHash::uint128))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_UTILS_TOBYTES_OFFSET))(value);
		}

		static ::System::Void BlockCopy(::Il2CppArray<::System::Byte>* src, ::System::Int32 srcOffset, ::Il2CppArray<::System::Byte>* dst, ::System::Int32 dstOffset, ::System::Int32 count)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_UTILS_BLOCKCOPY_OFFSET))(src, srcOffset, dst, dstOffset, count);
		}
	};
}
