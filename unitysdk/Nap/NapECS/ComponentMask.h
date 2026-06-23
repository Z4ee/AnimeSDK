#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IComparer_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define NAP_NAPECS_COMPONENTMASK_COMPARE_OFFSET UNITYSDK_OFFSET(0x1B2E0E90)
#define NAP_NAPECS_COMPONENTMASK_CREATELOMASK_OFFSET UNITYSDK_OFFSET(0x1B2E3640)
#define NAP_NAPECS_COMPONENTMASK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x90CF30)
#define NAP_NAPECS_COMPONENTMASK_EQUALS_OFFSET UNITYSDK_OFFSET(0x90CE00)
#define NAP_NAPECS_COMPONENTMASK_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x90CCE0)
#define NAP_NAPECS_COMPONENTMASK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x90CF40)
#define NAP_NAPECS_COMPONENTMASK_GETTRUERANKNOCHECK_OFFSET UNITYSDK_OFFSET(0x90CF70)
#define NAP_NAPECS_COMPONENTMASK_GETTRUERANK_OFFSET UNITYSDK_OFFSET(0x1B2E3450)
#define NAP_NAPECS_COMPONENTMASK_GET_ALLFALSE_OFFSET UNITYSDK_OFFSET(0x90C9F0)
#define NAP_NAPECS_COMPONENTMASK_GET_ALLTRUE_OFFSET UNITYSDK_OFFSET(0x90CAC0)
#define NAP_NAPECS_COMPONENTMASK_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x90CB90)
#define NAP_NAPECS_COMPONENTMASK_HASALL_OFFSET UNITYSDK_OFFSET(0x90CDE0)
#define NAP_NAPECS_COMPONENTMASK_HASANY_OFFSET UNITYSDK_OFFSET(0x90CDF0)
#define NAP_NAPECS_COMPONENTMASK_NUMBITSET_OFFSET UNITYSDK_OFFSET(0x1B2E35E0)
#define NAP_NAPECS_COMPONENTMASK_NUMBITTRUE_OFFSET UNITYSDK_OFFSET(0x90CF50)
#define NAP_NAPECS_COMPONENTMASK_OP_BITWISEAND_OFFSET UNITYSDK_OFFSET(0x1B2E1490)
#define NAP_NAPECS_COMPONENTMASK_OP_BITWISEOR_OFFSET UNITYSDK_OFFSET(0x1B2E1370)
#define NAP_NAPECS_COMPONENTMASK_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1B2E15B0)
#define NAP_NAPECS_COMPONENTMASK_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1B2E16A0)
#define NAP_NAPECS_COMPONENTMASK_OP_ONESCOMPLEMENT_OFFSET UNITYSDK_OFFSET(0x1B2E1290)
#define NAP_NAPECS_COMPONENTMASK_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x90CC20)
#define NAP_NAPECS_COMPONENTMASK_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x90CDD0)
#define NAP_NAPECS_COMPONENTMASK_TRUERANKOFINDEX_OFFSET UNITYSDK_OFFSET(0x90CF60)
#define NAP_NAPECS_COMPONENTMASK__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B2E0D30)
#define NAP_NAPECS_COMPONENTMASK__CTOR_OFFSET UNITYSDK_OFFSET(0x4B8450)
#define NAP_NAPECS_COMPONENTMASK___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0x90CFA0)
#define NAP_NAPECS_COMPONENTMASK___BASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x90D020)

namespace Nap::NapECS
{
	inline static constexpr unsigned int ComponentMask_TypeDefinitionIndex = 37280;

	struct alignas(8) ComponentMask
	{
		static ::System::Collections::Generic::IComparer_1<::Nap::NapECS::ComponentMask>** StaticGet_DefaultComparer()
		{
			return (::System::Collections::Generic::IComparer_1<::Nap::NapECS::ComponentMask>**)Il2CppClass::FromTypeDefinitionIndex(ComponentMask_TypeDefinitionIndex)->GetStaticField(0x28A30);
		}
		static ::Il2CppArray<::System::UInt64>** StaticGet_LookUpTable()
		{
			return (::Il2CppArray<::System::UInt64>**)Il2CppClass::FromTypeDefinitionIndex(ComponentMask_TypeDefinitionIndex)->GetStaticField(0x28A38);
		}
		static ::Nap::NapECS::ComponentMask* StaticGet_Empty()
		{
			return (::Nap::NapECS::ComponentMask*)Il2CppClass::FromTypeDefinitionIndex(ComponentMask_TypeDefinitionIndex)->GetStaticField(0x8930);
		}
		::System::UInt64 _data1; // 0x10
		::System::UInt64 _data2; // 0x18
		::System::UInt64 _data3; // 0x20
		::System::UInt64 _data4; // 0x28
		::System::UInt64 _data5; // 0x30
		::System::UInt64 _data6; // 0x38
		::System::UInt64 _data7; // 0x40
		::System::UInt64 _data8; // 0x48

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAP_NAPECS_COMPONENTMASK__CCTOR_OFFSET))();
		}

		::System::Void _ctor(::System::UInt64 initValue1, ::System::UInt64 initValue2, ::System::UInt64 initValue3, ::System::UInt64 initValue4, ::System::UInt64 initValue5, ::System::UInt64 initValue6, ::System::UInt64 initValue7, ::System::UInt64 initValue8)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::UInt64, ::System::UInt64, ::System::UInt64, ::System::UInt64, ::System::UInt64, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + NAP_NAPECS_COMPONENTMASK__CTOR_OFFSET))(this, initValue1, initValue2, initValue3, initValue4, initValue5, initValue6, initValue7, initValue8);
		}

		static ::System::Int32 Compare(::Nap::NapECS::ComponentMask left, ::Nap::NapECS::ComponentMask right)
		{
			return ((::System::Int32(*)(::Nap::NapECS::ComponentMask, ::Nap::NapECS::ComponentMask))((::PBYTE)hIl2Cpp + NAP_NAPECS_COMPONENTMASK_COMPARE_OFFSET))(left, right);
		}

		::System::Boolean get_allFalse()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_COMPONENTMASK_GET_ALLFALSE_OFFSET))(this);
		}

		::System::Boolean get_allTrue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_COMPONENTMASK_GET_ALLTRUE_OFFSET))(this);
		}

		::System::Boolean get_Item(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAP_NAPECS_COMPONENTMASK_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void set_Item(::System::Int32 index, ::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + NAP_NAPECS_COMPONENTMASK_SET_ITEM_OFFSET))(this, index, value);
		}

		::System::Collections::Generic::IEnumerator_1<::System::UInt16>* GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::UInt16>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_COMPONENTMASK_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_COMPONENTMASK_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		static ::Nap::NapECS::ComponentMask op_OnesComplement(::Nap::NapECS::ComponentMask a)
		{
			return ((::Nap::NapECS::ComponentMask(*)(::Nap::NapECS::ComponentMask))((::PBYTE)hIl2Cpp + NAP_NAPECS_COMPONENTMASK_OP_ONESCOMPLEMENT_OFFSET))(a);
		}

		static ::Nap::NapECS::ComponentMask op_BitwiseOr(::Nap::NapECS::ComponentMask a, ::Nap::NapECS::ComponentMask b)
		{
			return ((::Nap::NapECS::ComponentMask(*)(::Nap::NapECS::ComponentMask, ::Nap::NapECS::ComponentMask))((::PBYTE)hIl2Cpp + NAP_NAPECS_COMPONENTMASK_OP_BITWISEOR_OFFSET))(a, b);
		}

		static ::Nap::NapECS::ComponentMask op_BitwiseAnd(::Nap::NapECS::ComponentMask a, ::Nap::NapECS::ComponentMask b)
		{
			return ((::Nap::NapECS::ComponentMask(*)(::Nap::NapECS::ComponentMask, ::Nap::NapECS::ComponentMask))((::PBYTE)hIl2Cpp + NAP_NAPECS_COMPONENTMASK_OP_BITWISEAND_OFFSET))(a, b);
		}

		static ::System::Boolean op_Equality(::Nap::NapECS::ComponentMask a, ::Nap::NapECS::ComponentMask b)
		{
			return ((::System::Boolean(*)(::Nap::NapECS::ComponentMask, ::Nap::NapECS::ComponentMask))((::PBYTE)hIl2Cpp + NAP_NAPECS_COMPONENTMASK_OP_EQUALITY_OFFSET))(a, b);
		}

		static ::System::Boolean op_Inequality(::Nap::NapECS::ComponentMask a, ::Nap::NapECS::ComponentMask b)
		{
			return ((::System::Boolean(*)(::Nap::NapECS::ComponentMask, ::Nap::NapECS::ComponentMask))((::PBYTE)hIl2Cpp + NAP_NAPECS_COMPONENTMASK_OP_INEQUALITY_OFFSET))(a, b);
		}

		::System::Boolean HasAll(::Nap::NapECS::ComponentMask& inMask)
		{
			return ((::System::Boolean(*)(::PVOID, ::Nap::NapECS::ComponentMask&))((::PBYTE)hIl2Cpp + NAP_NAPECS_COMPONENTMASK_HASALL_OFFSET))(this, inMask);
		}

		::System::Boolean HasAny(::Nap::NapECS::ComponentMask& inMask)
		{
			return ((::System::Boolean(*)(::PVOID, ::Nap::NapECS::ComponentMask&))((::PBYTE)hIl2Cpp + NAP_NAPECS_COMPONENTMASK_HASANY_OFFSET))(this, inMask);
		}

		::System::Boolean Equals(::Nap::NapECS::ComponentMask mask)
		{
			return ((::System::Boolean(*)(::PVOID, ::Nap::NapECS::ComponentMask))((::PBYTE)hIl2Cpp + NAP_NAPECS_COMPONENTMASK_EQUALS_OFFSET))(this, mask);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NAP_NAPECS_COMPONENTMASK_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_COMPONENTMASK_GETHASHCODE_OFFSET))(this);
		}

		::System::UInt32 NumBitTrue()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_COMPONENTMASK_NUMBITTRUE_OFFSET))(this);
		}

		::System::UInt32 TrueRankOfIndex(::System::Int32 index)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAP_NAPECS_COMPONENTMASK_TRUERANKOFINDEX_OFFSET))(this, index);
		}

		/*
		::System::Int32 GetTrueRankNoCheck(::System::Span_1<::System::UInt16> rank)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Span_1<::System::UInt16>))((::PBYTE)hIl2Cpp + NAP_NAPECS_COMPONENTMASK_GETTRUERANKNOCHECK_OFFSET))(this, rank);
		}
		*/

		/*
		static ::System::Int32 GetTrueRank(::System::Span_1<::System::UInt16> rank, ::System::Int32 start, ::System::UInt64 value, ::System::UInt16 offset)
		{
			return ((::System::Int32(*)(::System::Span_1<::System::UInt16>, ::System::Int32, ::System::UInt64, ::System::UInt16))((::PBYTE)hIl2Cpp + NAP_NAPECS_COMPONENTMASK_GETTRUERANK_OFFSET))(rank, start, value, offset);
		}
		*/

		static ::System::UInt32 NumBitSet(::System::UInt64 value)
		{
			return ((::System::UInt32(*)(::System::UInt64))((::PBYTE)hIl2Cpp + NAP_NAPECS_COMPONENTMASK_NUMBITSET_OFFSET))(value);
		}

		static ::Nap::NapECS::ComponentMask CreateLoMask(::System::Int32 index)
		{
			return ((::Nap::NapECS::ComponentMask(*)(::System::Int32))((::PBYTE)hIl2Cpp + NAP_NAPECS_COMPONENTMASK_CREATELOMASK_OFFSET))(index);
		}

		::System::Boolean __base_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NAP_NAPECS_COMPONENTMASK___BASE_EQUALS_OFFSET))(this, P0);
		}

		::System::Int32 __base_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_COMPONENTMASK___BASE_GETHASHCODE_OFFSET))(this);
		}
	};
}
