#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define PIPELINECAMERA_DATAORIENTATED_BITSET128_EQUALS_OFFSET UNITYSDK_OFFSET(0xAC0190)
#define PIPELINECAMERA_DATAORIENTATED_BITSET128_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xAC0340)
#define PIPELINECAMERA_DATAORIENTATED_BITSET128_GET_ISALL_OFFSET UNITYSDK_OFFSET(0xABFF70)
#define PIPELINECAMERA_DATAORIENTATED_BITSET128_GET_ISNONE_OFFSET UNITYSDK_OFFSET(0xABFF10)
#define PIPELINECAMERA_DATAORIENTATED_BITSET128_GET_ITEM_OFFSET UNITYSDK_OFFSET(0xABFFD0)
#define PIPELINECAMERA_DATAORIENTATED_BITSET128_NUMBITSET_OFFSET UNITYSDK_OFFSET(0xAC03B0)
#define PIPELINECAMERA_DATAORIENTATED_BITSET128_OP_BITWISEAND_OFFSET UNITYSDK_OFFSET(0x1F9E6C90)
#define PIPELINECAMERA_DATAORIENTATED_BITSET128_OP_BITWISEOR_OFFSET UNITYSDK_OFFSET(0x1F9E6C20)
#define PIPELINECAMERA_DATAORIENTATED_BITSET128_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1F9E6D00)
#define PIPELINECAMERA_DATAORIENTATED_BITSET128_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1F9E6D60)
#define PIPELINECAMERA_DATAORIENTATED_BITSET128_OP_ONESCOMPLEMENT_OFFSET UNITYSDK_OFFSET(0x1F9E6BC0)
#define PIPELINECAMERA_DATAORIENTATED_BITSET128_SET_ITEM_OFFSET UNITYSDK_OFFSET(0xAC0030)
#define PIPELINECAMERA_DATAORIENTATED_BITSET128__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F9E70C0)
#define PIPELINECAMERA_DATAORIENTATED_BITSET128__CTOR_1_OFFSET UNITYSDK_OFFSET(0xAC00C0)
#define PIPELINECAMERA_DATAORIENTATED_BITSET128__CTOR_OFFSET UNITYSDK_OFFSET(0x346F70)
#define PIPELINECAMERA_DATAORIENTATED_BITSET128___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0xAC0670)
#define PIPELINECAMERA_DATAORIENTATED_BITSET128___BASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xAC06E0)

namespace PipelineCamera::DataOrientated
{
	inline static constexpr unsigned int BitSet128_TypeDefinitionIndex = 38388;

	struct alignas(8) BitSet128
	{
		static ::PipelineCamera::DataOrientated::BitSet128* StaticGet_Empty()
		{
			return (::PipelineCamera::DataOrientated::BitSet128*)Il2CppClass::FromTypeDefinitionIndex(BitSet128_TypeDefinitionIndex)->GetStaticField(0x8CD0);
		}
		static ::PipelineCamera::DataOrientated::BitSet128* StaticGet_Full()
		{
			return (::PipelineCamera::DataOrientated::BitSet128*)Il2CppClass::FromTypeDefinitionIndex(BitSet128_TypeDefinitionIndex)->GetStaticField(0x8CE0);
		}
		// static const ::System::UInt32 Capacity = 0x80; // 0x0
		::System::UInt64 _data1; // 0x10
		::System::UInt64 _data2; // 0x18

		::System::Void _ctor(::System::UInt64 data1, ::System::UInt64 data2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATAORIENTATED_BITSET128__CTOR_OFFSET))(this, data1, data2);
		}

		/*
		::System::Void _ctor_1(::System::ReadOnlySpan_1<::System::UInt32> indicesSet)
		{
			return ((::System::Void(*)(::PVOID, ::System::ReadOnlySpan_1<::System::UInt32>))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATAORIENTATED_BITSET128__CTOR_1_OFFSET))(this, indicesSet);
		}
		*/

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATAORIENTATED_BITSET128__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsNone()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATAORIENTATED_BITSET128_GET_ISNONE_OFFSET))(this);
		}

		::System::Boolean get_IsAll()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATAORIENTATED_BITSET128_GET_ISALL_OFFSET))(this);
		}

		::System::Boolean get_Item(::System::UInt32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATAORIENTATED_BITSET128_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void set_Item(::System::UInt32 index, ::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATAORIENTATED_BITSET128_SET_ITEM_OFFSET))(this, index, value);
		}

		static ::PipelineCamera::DataOrientated::BitSet128 op_OnesComplement(::PipelineCamera::DataOrientated::BitSet128& a)
		{
			return ((::PipelineCamera::DataOrientated::BitSet128(*)(::PipelineCamera::DataOrientated::BitSet128&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATAORIENTATED_BITSET128_OP_ONESCOMPLEMENT_OFFSET))(a);
		}

		static ::PipelineCamera::DataOrientated::BitSet128 op_BitwiseOr(::PipelineCamera::DataOrientated::BitSet128& a, ::PipelineCamera::DataOrientated::BitSet128& b)
		{
			return ((::PipelineCamera::DataOrientated::BitSet128(*)(::PipelineCamera::DataOrientated::BitSet128&, ::PipelineCamera::DataOrientated::BitSet128&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATAORIENTATED_BITSET128_OP_BITWISEOR_OFFSET))(a, b);
		}

		static ::PipelineCamera::DataOrientated::BitSet128 op_BitwiseAnd(::PipelineCamera::DataOrientated::BitSet128& a, ::PipelineCamera::DataOrientated::BitSet128& b)
		{
			return ((::PipelineCamera::DataOrientated::BitSet128(*)(::PipelineCamera::DataOrientated::BitSet128&, ::PipelineCamera::DataOrientated::BitSet128&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATAORIENTATED_BITSET128_OP_BITWISEAND_OFFSET))(a, b);
		}

		static ::System::Boolean op_Equality(::PipelineCamera::DataOrientated::BitSet128& a, ::PipelineCamera::DataOrientated::BitSet128& b)
		{
			return ((::System::Boolean(*)(::PipelineCamera::DataOrientated::BitSet128&, ::PipelineCamera::DataOrientated::BitSet128&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATAORIENTATED_BITSET128_OP_EQUALITY_OFFSET))(a, b);
		}

		static ::System::Boolean op_Inequality(::PipelineCamera::DataOrientated::BitSet128& a, ::PipelineCamera::DataOrientated::BitSet128& b)
		{
			return ((::System::Boolean(*)(::PipelineCamera::DataOrientated::BitSet128&, ::PipelineCamera::DataOrientated::BitSet128&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATAORIENTATED_BITSET128_OP_INEQUALITY_OFFSET))(a, b);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATAORIENTATED_BITSET128_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATAORIENTATED_BITSET128_GETHASHCODE_OFFSET))(this);
		}

		::System::UInt32 NumBitSet()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATAORIENTATED_BITSET128_NUMBITSET_OFFSET))(this);
		}

		::System::Boolean __base_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATAORIENTATED_BITSET128___BASE_EQUALS_OFFSET))(this, P0);
		}

		::System::Int32 __base_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATAORIENTATED_BITSET128___BASE_GETHASHCODE_OFFSET))(this);
		}
	};
}
