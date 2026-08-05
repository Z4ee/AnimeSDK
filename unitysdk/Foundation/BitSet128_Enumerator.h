#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/BitSet128.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define FOUNDATION_BITSET128_ENUMERATOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0x296F30)
#define FOUNDATION_BITSET128_ENUMERATOR_FETCHTWOBYTEBYTE_OFFSET UNITYSDK_OFFSET(0x1FBE2680)
#define FOUNDATION_BITSET128_ENUMERATOR_GETTWOBYTES_OFFSET UNITYSDK_OFFSET(0xACD270)
#define FOUNDATION_BITSET128_ENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x36D9B0)
#define FOUNDATION_BITSET128_ENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x66F850)
#define FOUNDATION_BITSET128_ENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x296F30)
#define FOUNDATION_BITSET128_ENUMERATOR_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xACD2A0)
#define FOUNDATION_BITSET128_ENUMERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0xACD240)

namespace Foundation
{
	inline static constexpr unsigned int BitSet128_Enumerator_TypeDefinitionIndex = 8836;

	struct alignas(8) BitSet128_Enumerator
	{
		::Foundation::BitSet128 _mask; // 0x10
		::System::Byte _current; // 0x20
		::System::UInt32 _currentTwoByteIndex; // 0x24
		::System::Byte _currentOffset; // 0x28

		::System::Void _ctor(::Foundation::BitSet128 data)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::BitSet128))((::PBYTE)hIl2Cpp + FOUNDATION_BITSET128_ENUMERATOR__CTOR_OFFSET))(this, data);
		}

		static ::System::UInt16 FetchTwoByteByte(::System::UInt64 value, ::System::Int32 index)
		{
			return ((::System::UInt16(*)(::System::UInt64, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_BITSET128_ENUMERATOR_FETCHTWOBYTEBYTE_OFFSET))(value, index);
		}

		::System::UInt16 GetTwoBytes(::System::UInt32 index)
		{
			return ((::System::UInt16(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FOUNDATION_BITSET128_ENUMERATOR_GETTWOBYTES_OFFSET))(this, index);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BITSET128_ENUMERATOR_MOVENEXT_OFFSET))(this);
		}

		::System::Byte get_Current()
		{
			return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BITSET128_ENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BITSET128_ENUMERATOR_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BITSET128_ENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BITSET128_ENUMERATOR_DISPOSE_OFFSET))(this);
		}
	};
}
