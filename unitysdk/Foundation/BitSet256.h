#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define FOUNDATION_BITSET256_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x9C36F0)
#define FOUNDATION_BITSET256_EQUALS_OFFSET UNITYSDK_OFFSET(0x9C3600)
#define FOUNDATION_BITSET256_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9C3690)
#define FOUNDATION_BITSET256_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x9C3500)
#define FOUNDATION_BITSET256_OP_BITWISEAND_OFFSET UNITYSDK_OFFSET(0x1C135920)
#define FOUNDATION_BITSET256_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1C135950)
#define FOUNDATION_BITSET256_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x9C3570)
#define FOUNDATION_BITSET256__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C135B40)
#define FOUNDATION_BITSET256__CTOR_OFFSET UNITYSDK_OFFSET(0x3E8500)

namespace Foundation
{
	inline static constexpr unsigned int BitSet256_TypeDefinitionIndex = 9161;

	struct alignas(8) BitSet256
	{
		static ::Foundation::BitSet256* StaticGet_Empty()
		{
			return (::Foundation::BitSet256*)Il2CppClass::FromTypeDefinitionIndex(BitSet256_TypeDefinitionIndex)->GetStaticField(0x3D70);
		}
		static ::Foundation::BitSet256* StaticGet_Full()
		{
			return (::Foundation::BitSet256*)Il2CppClass::FromTypeDefinitionIndex(BitSet256_TypeDefinitionIndex)->GetStaticField(0x3D90);
		}
		::System::UInt64 data1; // 0x10
		::System::UInt64 data2; // 0x18
		::System::UInt64 data3; // 0x20
		::System::UInt64 data4; // 0x28

		::System::Void _ctor(::System::UInt64 data1, ::System::UInt64 data2, ::System::UInt64 data3, ::System::UInt64 data4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::UInt64, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + FOUNDATION_BITSET256__CTOR_OFFSET))(this, data1, data2, data3, data4);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_BITSET256__CCTOR_OFFSET))();
		}

		::System::Boolean get_Item(::System::UInt32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FOUNDATION_BITSET256_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void set_Item(::System::UInt32 index, ::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_BITSET256_SET_ITEM_OFFSET))(this, index, value);
		}

		static ::Foundation::BitSet256 op_BitwiseAnd(::Foundation::BitSet256 left, ::Foundation::BitSet256 right)
		{
			return ((::Foundation::BitSet256(*)(::Foundation::BitSet256, ::Foundation::BitSet256))((::PBYTE)hIl2Cpp + FOUNDATION_BITSET256_OP_BITWISEAND_OFFSET))(left, right);
		}

		static ::System::Boolean op_Equality(::Foundation::BitSet256 left, ::Foundation::BitSet256 right)
		{
			return ((::System::Boolean(*)(::Foundation::BitSet256, ::Foundation::BitSet256))((::PBYTE)hIl2Cpp + FOUNDATION_BITSET256_OP_EQUALITY_OFFSET))(left, right);
		}

		::System::Boolean Equals(::Foundation::BitSet256 other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::BitSet256))((::PBYTE)hIl2Cpp + FOUNDATION_BITSET256_EQUALS_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BITSET256_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_BITSET256_EQUALS_1_OFFSET))(this, obj);
		}
	};
}
