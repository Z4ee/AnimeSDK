#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define PIPELINECAMERA_DATAORIENTATED_BITSET256_EQUALS_OFFSET UNITYSDK_OFFSET(0x9F2BE0)
#define PIPELINECAMERA_DATAORIENTATED_BITSET256_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9F2DC0)
#define PIPELINECAMERA_DATAORIENTATED_BITSET256_GET_ISALL_OFFSET UNITYSDK_OFFSET(0x9F2AA0)
#define PIPELINECAMERA_DATAORIENTATED_BITSET256_GET_ISNONE_OFFSET UNITYSDK_OFFSET(0x9F2A30)
#define PIPELINECAMERA_DATAORIENTATED_BITSET256_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x9F2B10)
#define PIPELINECAMERA_DATAORIENTATED_BITSET256_NUMBITSET_OFFSET UNITYSDK_OFFSET(0x9F2E60)
#define PIPELINECAMERA_DATAORIENTATED_BITSET256_OP_BITWISEAND_OFFSET UNITYSDK_OFFSET(0x1D565480)
#define PIPELINECAMERA_DATAORIENTATED_BITSET256_OP_BITWISEOR_OFFSET UNITYSDK_OFFSET(0x1D565400)
#define PIPELINECAMERA_DATAORIENTATED_BITSET256_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1D565500)
#define PIPELINECAMERA_DATAORIENTATED_BITSET256_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1D565570)
#define PIPELINECAMERA_DATAORIENTATED_BITSET256_OP_ONESCOMPLEMENT_OFFSET UNITYSDK_OFFSET(0x1D565380)
#define PIPELINECAMERA_DATAORIENTATED_BITSET256_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x9F2BA0)
#define PIPELINECAMERA_DATAORIENTATED_BITSET256__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D565A30)
#define PIPELINECAMERA_DATAORIENTATED_BITSET256__CTOR_1_OFFSET UNITYSDK_OFFSET(0x9F2BB0)
#define PIPELINECAMERA_DATAORIENTATED_BITSET256__CTOR_OFFSET UNITYSDK_OFFSET(0x32DFA0)
#define PIPELINECAMERA_DATAORIENTATED_BITSET256___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0x9F32A0)
#define PIPELINECAMERA_DATAORIENTATED_BITSET256___BASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9F3310)

namespace PipelineCamera::DataOrientated
{
	inline static constexpr unsigned int BitSet256_TypeDefinitionIndex = 37726;

	struct alignas(8) BitSet256
	{
		static ::PipelineCamera::DataOrientated::BitSet256* StaticGet_Full()
		{
			return (::PipelineCamera::DataOrientated::BitSet256*)Il2CppClass::FromTypeDefinitionIndex(BitSet256_TypeDefinitionIndex)->GetStaticField(0x8AB0);
		}
		static ::PipelineCamera::DataOrientated::BitSet256* StaticGet_Empty()
		{
			return (::PipelineCamera::DataOrientated::BitSet256*)Il2CppClass::FromTypeDefinitionIndex(BitSet256_TypeDefinitionIndex)->GetStaticField(0x8AD0);
		}
		// static const ::System::UInt32 Capacity = 0x100; // 0x0
		::System::UInt64 _data1; // 0x10
		::System::UInt64 _data2; // 0x18
		::System::UInt64 _data3; // 0x20
		::System::UInt64 _data4; // 0x28

		::System::Void _ctor(::System::UInt64 data1, ::System::UInt64 data2, ::System::UInt64 data3, ::System::UInt64 data4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::UInt64, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATAORIENTATED_BITSET256__CTOR_OFFSET))(this, data1, data2, data3, data4);
		}

		/*
		::System::Void _ctor_1(::System::ReadOnlySpan_1<::System::UInt32> indicesSet)
		{
			return ((::System::Void(*)(::PVOID, ::System::ReadOnlySpan_1<::System::UInt32>))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATAORIENTATED_BITSET256__CTOR_1_OFFSET))(this, indicesSet);
		}
		*/

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATAORIENTATED_BITSET256__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsNone()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATAORIENTATED_BITSET256_GET_ISNONE_OFFSET))(this);
		}

		::System::Boolean get_IsAll()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATAORIENTATED_BITSET256_GET_ISALL_OFFSET))(this);
		}

		::System::Boolean get_Item(::System::UInt32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATAORIENTATED_BITSET256_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void set_Item(::System::UInt32 index, ::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATAORIENTATED_BITSET256_SET_ITEM_OFFSET))(this, index, value);
		}

		static ::PipelineCamera::DataOrientated::BitSet256 op_OnesComplement(::PipelineCamera::DataOrientated::BitSet256& a)
		{
			return ((::PipelineCamera::DataOrientated::BitSet256(*)(::PipelineCamera::DataOrientated::BitSet256&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATAORIENTATED_BITSET256_OP_ONESCOMPLEMENT_OFFSET))(a);
		}

		static ::PipelineCamera::DataOrientated::BitSet256 op_BitwiseOr(::PipelineCamera::DataOrientated::BitSet256& a, ::PipelineCamera::DataOrientated::BitSet256& b)
		{
			return ((::PipelineCamera::DataOrientated::BitSet256(*)(::PipelineCamera::DataOrientated::BitSet256&, ::PipelineCamera::DataOrientated::BitSet256&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATAORIENTATED_BITSET256_OP_BITWISEOR_OFFSET))(a, b);
		}

		static ::PipelineCamera::DataOrientated::BitSet256 op_BitwiseAnd(::PipelineCamera::DataOrientated::BitSet256& a, ::PipelineCamera::DataOrientated::BitSet256& b)
		{
			return ((::PipelineCamera::DataOrientated::BitSet256(*)(::PipelineCamera::DataOrientated::BitSet256&, ::PipelineCamera::DataOrientated::BitSet256&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATAORIENTATED_BITSET256_OP_BITWISEAND_OFFSET))(a, b);
		}

		static ::System::Boolean op_Equality(::PipelineCamera::DataOrientated::BitSet256& a, ::PipelineCamera::DataOrientated::BitSet256& b)
		{
			return ((::System::Boolean(*)(::PipelineCamera::DataOrientated::BitSet256&, ::PipelineCamera::DataOrientated::BitSet256&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATAORIENTATED_BITSET256_OP_EQUALITY_OFFSET))(a, b);
		}

		static ::System::Boolean op_Inequality(::PipelineCamera::DataOrientated::BitSet256& a, ::PipelineCamera::DataOrientated::BitSet256& b)
		{
			return ((::System::Boolean(*)(::PipelineCamera::DataOrientated::BitSet256&, ::PipelineCamera::DataOrientated::BitSet256&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATAORIENTATED_BITSET256_OP_INEQUALITY_OFFSET))(a, b);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATAORIENTATED_BITSET256_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATAORIENTATED_BITSET256_GETHASHCODE_OFFSET))(this);
		}

		::System::UInt32 NumBitSet()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATAORIENTATED_BITSET256_NUMBITSET_OFFSET))(this);
		}

		::System::Boolean __base_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATAORIENTATED_BITSET256___BASE_EQUALS_OFFSET))(this, P0);
		}

		::System::Int32 __base_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATAORIENTATED_BITSET256___BASE_GETHASHCODE_OFFSET))(this);
		}
	};
}
