#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define MESSAGEPACK_INTERNAL_BYTEARRAYSTRINGHASHTABLE_ENTRY_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA0DDF0)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int ByteArrayStringHashTable_Entry_TypeDefinitionIndex = 30351;

	struct alignas(8) ByteArrayStringHashTable_Entry
	{
		::Il2CppArray<::System::Byte>* Key; // 0x10
		::System::Int32 Value; // 0x18

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_BYTEARRAYSTRINGHASHTABLE_ENTRY_TOSTRING_OFFSET))(this);
		}
	};
}
