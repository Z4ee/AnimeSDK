#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define FOUNDATION_BITSET128_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xA7F370)
#define FOUNDATION_BITSET128_EQUALS_OFFSET UNITYSDK_OFFSET(0xA7F300)
#define FOUNDATION_BITSET128_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xA7F410)
#define FOUNDATION_BITSET128_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x4F87C0)
#define FOUNDATION_BITSET128_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x643A20)
#define FOUNDATION_BITSET128_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x4F8C90)
#define FOUNDATION_BITSET128_NUMBITSET_OFFSET UNITYSDK_OFFSET(0x4F8CC0)
#define FOUNDATION_BITSET128_OP_BITWISEAND_OFFSET UNITYSDK_OFFSET(0x1E8224B0)
#define FOUNDATION_BITSET128_OP_BITWISEOR_OFFSET UNITYSDK_OFFSET(0x1E822490)
#define FOUNDATION_BITSET128_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1E8224D0)
#define FOUNDATION_BITSET128_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1E8224F0)
#define FOUNDATION_BITSET128_OP_ONESCOMPLEMENT_OFFSET UNITYSDK_OFFSET(0x1E822470)
#define FOUNDATION_BITSET128_SET_ITEM_OFFSET UNITYSDK_OFFSET(0xA7F200)
#define FOUNDATION_BITSET128__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E822750)
#define FOUNDATION_BITSET128__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA7F260)
#define FOUNDATION_BITSET128__CTOR_OFFSET UNITYSDK_OFFSET(0x2BDE80)

namespace Foundation
{
	inline static constexpr unsigned int BitSet128_TypeDefinitionIndex = 8419;

	struct alignas(8) BitSet128
	{
		static ::Foundation::BitSet128* StaticGet_Full()
		{
			return (::Foundation::BitSet128*)Il2CppClass::FromTypeDefinitionIndex(BitSet128_TypeDefinitionIndex)->GetStaticField(0x3C30);
		}
		static ::Foundation::BitSet128* StaticGet_Empty()
		{
			return (::Foundation::BitSet128*)Il2CppClass::FromTypeDefinitionIndex(BitSet128_TypeDefinitionIndex)->GetStaticField(0x3C40);
		}
		::System::UInt64 data1; // 0x10
		::System::UInt64 data2; // 0x18

		::System::Void _ctor(::System::UInt64 data1, ::System::UInt64 data2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + FOUNDATION_BITSET128__CTOR_OFFSET))(this, data1, data2);
		}

		/*
		::System::Void _ctor_1(::System::ReadOnlySpan_1<::System::UInt32> indicesSet)
		{
			return ((::System::Void(*)(::PVOID, ::System::ReadOnlySpan_1<::System::UInt32>))((::PBYTE)hIl2Cpp + FOUNDATION_BITSET128__CTOR_1_OFFSET))(this, indicesSet);
		}
		*/

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_BITSET128__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BITSET128_GET_ISEMPTY_OFFSET))(this);
		}

		::System::Boolean get_Item(::System::UInt32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FOUNDATION_BITSET128_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void set_Item(::System::UInt32 index, ::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_BITSET128_SET_ITEM_OFFSET))(this, index, value);
		}

		static ::Foundation::BitSet128 op_OnesComplement(::Foundation::BitSet128& a)
		{
			return ((::Foundation::BitSet128(*)(::Foundation::BitSet128&))((::PBYTE)hIl2Cpp + FOUNDATION_BITSET128_OP_ONESCOMPLEMENT_OFFSET))(a);
		}

		static ::Foundation::BitSet128 op_BitwiseOr(::Foundation::BitSet128& a, ::Foundation::BitSet128& b)
		{
			return ((::Foundation::BitSet128(*)(::Foundation::BitSet128&, ::Foundation::BitSet128&))((::PBYTE)hIl2Cpp + FOUNDATION_BITSET128_OP_BITWISEOR_OFFSET))(a, b);
		}

		static ::Foundation::BitSet128 op_BitwiseAnd(::Foundation::BitSet128& a, ::Foundation::BitSet128& b)
		{
			return ((::Foundation::BitSet128(*)(::Foundation::BitSet128&, ::Foundation::BitSet128&))((::PBYTE)hIl2Cpp + FOUNDATION_BITSET128_OP_BITWISEAND_OFFSET))(a, b);
		}

		static ::System::Boolean op_Equality(::Foundation::BitSet128& a, ::Foundation::BitSet128& b)
		{
			return ((::System::Boolean(*)(::Foundation::BitSet128&, ::Foundation::BitSet128&))((::PBYTE)hIl2Cpp + FOUNDATION_BITSET128_OP_EQUALITY_OFFSET))(a, b);
		}

		static ::System::Boolean op_Inequality(::Foundation::BitSet128& a, ::Foundation::BitSet128& b)
		{
			return ((::System::Boolean(*)(::Foundation::BitSet128&, ::Foundation::BitSet128&))((::PBYTE)hIl2Cpp + FOUNDATION_BITSET128_OP_INEQUALITY_OFFSET))(a, b);
		}

		::System::Boolean Equals(::Foundation::BitSet128 other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::BitSet128))((::PBYTE)hIl2Cpp + FOUNDATION_BITSET128_EQUALS_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BITSET128_GETHASHCODE_OFFSET))(this);
		}

		::System::UInt32 NumBitSet()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BITSET128_NUMBITSET_OFFSET))(this);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_BITSET128_EQUALS_1_OFFSET))(this, obj);
		}

		/*
		::Foundation::BitSet128_Enumerator GetEnumerator()
		{
			return ((::Foundation::BitSet128_Enumerator(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BITSET128_GETENUMERATOR_OFFSET))(this);
		}
		*/
	};
}
