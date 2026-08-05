#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define FOUNDATION_BITSET64_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xAA81A0)
#define FOUNDATION_BITSET64_EQUALS_OFFSET UNITYSDK_OFFSET(0xAA8130)
#define FOUNDATION_BITSET64_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x909910)
#define FOUNDATION_BITSET64_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x3CCD40)
#define FOUNDATION_BITSET64_GET_ITEM_OFFSET UNITYSDK_OFFSET(0xAA7FC0)
#define FOUNDATION_BITSET64_OP_BITWISEAND_OFFSET UNITYSDK_OFFSET(0x1F561070)
#define FOUNDATION_BITSET64_OP_BITWISEOR_OFFSET UNITYSDK_OFFSET(0x1F561060)
#define FOUNDATION_BITSET64_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1F561080)
#define FOUNDATION_BITSET64_SET_ITEM_OFFSET UNITYSDK_OFFSET(0xAA7FD0)
#define FOUNDATION_BITSET64__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F5611A0)
#define FOUNDATION_BITSET64__CTOR_1_OFFSET UNITYSDK_OFFSET(0xAA7FF0)
#define FOUNDATION_BITSET64__CTOR_OFFSET UNITYSDK_OFFSET(0x324D50)

namespace Foundation
{
	inline static constexpr unsigned int BitSet64_TypeDefinitionIndex = 8869;

	struct alignas(8) BitSet64
	{
		static ::Foundation::BitSet64* StaticGet_Empty()
		{
			return (::Foundation::BitSet64*)Il2CppClass::FromTypeDefinitionIndex(BitSet64_TypeDefinitionIndex)->GetStaticField(0x3B30);
		}
		static ::Foundation::BitSet64* StaticGet_Full()
		{
			return (::Foundation::BitSet64*)Il2CppClass::FromTypeDefinitionIndex(BitSet64_TypeDefinitionIndex)->GetStaticField(0x3B38);
		}
		::System::UInt64 data; // 0x10

		::System::Void _ctor(::System::UInt64 data)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + FOUNDATION_BITSET64__CTOR_OFFSET))(this, data);
		}

		/*
		::System::Void _ctor_1(::System::ReadOnlySpan_1<::System::UInt32> indicesSet)
		{
			return ((::System::Void(*)(::PVOID, ::System::ReadOnlySpan_1<::System::UInt32>))((::PBYTE)hIl2Cpp + FOUNDATION_BITSET64__CTOR_1_OFFSET))(this, indicesSet);
		}
		*/

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_BITSET64__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BITSET64_GET_ISEMPTY_OFFSET))(this);
		}

		::System::Boolean get_Item(::System::UInt32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FOUNDATION_BITSET64_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void set_Item(::System::UInt32 index, ::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_BITSET64_SET_ITEM_OFFSET))(this, index, value);
		}

		static ::Foundation::BitSet64 op_BitwiseOr(::Foundation::BitSet64 left, ::Foundation::BitSet64 right)
		{
			return ((::Foundation::BitSet64(*)(::Foundation::BitSet64, ::Foundation::BitSet64))((::PBYTE)hIl2Cpp + FOUNDATION_BITSET64_OP_BITWISEOR_OFFSET))(left, right);
		}

		static ::Foundation::BitSet64 op_BitwiseAnd(::Foundation::BitSet64 left, ::Foundation::BitSet64 right)
		{
			return ((::Foundation::BitSet64(*)(::Foundation::BitSet64, ::Foundation::BitSet64))((::PBYTE)hIl2Cpp + FOUNDATION_BITSET64_OP_BITWISEAND_OFFSET))(left, right);
		}

		static ::System::Boolean op_Equality(::Foundation::BitSet64 left, ::Foundation::BitSet64 right)
		{
			return ((::System::Boolean(*)(::Foundation::BitSet64, ::Foundation::BitSet64))((::PBYTE)hIl2Cpp + FOUNDATION_BITSET64_OP_EQUALITY_OFFSET))(left, right);
		}

		::System::Boolean Equals(::Foundation::BitSet64 other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::BitSet64))((::PBYTE)hIl2Cpp + FOUNDATION_BITSET64_EQUALS_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BITSET64_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_BITSET64_EQUALS_1_OFFSET))(this, obj);
		}
	};
}
