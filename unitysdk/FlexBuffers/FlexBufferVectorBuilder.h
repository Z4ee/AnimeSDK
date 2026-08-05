#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace FlexBuffers { class FlexBuffer; }
namespace FlexBuffers { class IFlexBufferMapBuilder; }
namespace FlexBuffers { class IFlexBufferVectorBuilder; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define FLEXBUFFERS_FLEXBUFFERVECTORBUILDER_ADDNULL_OFFSET UNITYSDK_OFFSET(0xA47810)
#define FLEXBUFFERS_FLEXBUFFERVECTORBUILDER_ADD_10_OFFSET UNITYSDK_OFFSET(0xA47A00)
#define FLEXBUFFERS_FLEXBUFFERVECTORBUILDER_ADD_11_OFFSET UNITYSDK_OFFSET(0xA47A10)
#define FLEXBUFFERS_FLEXBUFFERVECTORBUILDER_ADD_12_OFFSET UNITYSDK_OFFSET(0xA47A20)
#define FLEXBUFFERS_FLEXBUFFERVECTORBUILDER_ADD_13_OFFSET UNITYSDK_OFFSET(0xA47A80)
#define FLEXBUFFERS_FLEXBUFFERVECTORBUILDER_ADD_14_OFFSET UNITYSDK_OFFSET(0xA47AA0)
#define FLEXBUFFERS_FLEXBUFFERVECTORBUILDER_ADD_1_OFFSET UNITYSDK_OFFSET(0xA47860)
#define FLEXBUFFERS_FLEXBUFFERVECTORBUILDER_ADD_2_OFFSET UNITYSDK_OFFSET(0xA47870)
#define FLEXBUFFERS_FLEXBUFFERVECTORBUILDER_ADD_3_OFFSET UNITYSDK_OFFSET(0xA47880)
#define FLEXBUFFERS_FLEXBUFFERVECTORBUILDER_ADD_4_OFFSET UNITYSDK_OFFSET(0xA47890)
#define FLEXBUFFERS_FLEXBUFFERVECTORBUILDER_ADD_5_OFFSET UNITYSDK_OFFSET(0xA47930)
#define FLEXBUFFERS_FLEXBUFFERVECTORBUILDER_ADD_6_OFFSET UNITYSDK_OFFSET(0xA47940)
#define FLEXBUFFERS_FLEXBUFFERVECTORBUILDER_ADD_7_OFFSET UNITYSDK_OFFSET(0xA47950)
#define FLEXBUFFERS_FLEXBUFFERVECTORBUILDER_ADD_8_OFFSET UNITYSDK_OFFSET(0xA47960)
#define FLEXBUFFERS_FLEXBUFFERVECTORBUILDER_ADD_9_OFFSET UNITYSDK_OFFSET(0xA479F0)
#define FLEXBUFFERS_FLEXBUFFERVECTORBUILDER_ADD_OFFSET UNITYSDK_OFFSET(0xA47850)
#define FLEXBUFFERS_FLEXBUFFERVECTORBUILDER_MAP_OFFSET UNITYSDK_OFFSET(0xA47AC0)
#define FLEXBUFFERS_FLEXBUFFERVECTORBUILDER_VECTOR_OFFSET UNITYSDK_OFFSET(0xA47AD0)
#define FLEXBUFFERS_FLEXBUFFERVECTORBUILDER__CTOR_OFFSET UNITYSDK_OFFSET(0x324D50)

namespace FlexBuffers
{
	inline static constexpr unsigned int FlexBufferVectorBuilder_TypeDefinitionIndex = 6750;

	struct alignas(8) FlexBufferVectorBuilder
	{
		::FlexBuffers::FlexBuffer* _buffer; // 0x10

		::System::Void _ctor(::FlexBuffers::FlexBuffer* buffer)
		{
			return ((::System::Void(*)(::PVOID, ::FlexBuffers::FlexBuffer*))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLEXBUFFERVECTORBUILDER__CTOR_OFFSET))(this, buffer);
		}

		::System::Void AddNull()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLEXBUFFERVECTORBUILDER_ADDNULL_OFFSET))(this);
		}

		::System::Void Add(::System::Int64 value, ::System::Boolean indirect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::Boolean))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLEXBUFFERVECTORBUILDER_ADD_OFFSET))(this, value, indirect);
		}

		::System::Void Add_1(::System::Int64 x, ::System::Int64 y)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLEXBUFFERVECTORBUILDER_ADD_1_OFFSET))(this, x, y);
		}

		::System::Void Add_2(::System::Int64 x, ::System::Int64 y, ::System::Int64 z)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLEXBUFFERVECTORBUILDER_ADD_2_OFFSET))(this, x, y, z);
		}

		::System::Void Add_3(::System::Int64 x, ::System::Int64 y, ::System::Int64 z, ::System::Int64 w)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLEXBUFFERVECTORBUILDER_ADD_3_OFFSET))(this, x, y, z, w);
		}

		::System::Void Add_4(::System::UInt64 value, ::System::Boolean indirect)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Boolean))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLEXBUFFERVECTORBUILDER_ADD_4_OFFSET))(this, value, indirect);
		}

		::System::Void Add_5(::System::UInt64 x, ::System::UInt64 y)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLEXBUFFERVECTORBUILDER_ADD_5_OFFSET))(this, x, y);
		}

		::System::Void Add_6(::System::UInt64 x, ::System::UInt64 y, ::System::UInt64 z)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLEXBUFFERVECTORBUILDER_ADD_6_OFFSET))(this, x, y, z);
		}

		::System::Void Add_7(::System::UInt64 x, ::System::UInt64 y, ::System::UInt64 z, ::System::UInt64 w)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::UInt64, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLEXBUFFERVECTORBUILDER_ADD_7_OFFSET))(this, x, y, z, w);
		}

		::System::Void Add_8(::System::Double value, ::System::Boolean indirect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double, ::System::Boolean))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLEXBUFFERVECTORBUILDER_ADD_8_OFFSET))(this, value, indirect);
		}

		::System::Void Add_9(::System::Double x, ::System::Double y)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLEXBUFFERVECTORBUILDER_ADD_9_OFFSET))(this, x, y);
		}

		::System::Void Add_10(::System::Double x, ::System::Double y, ::System::Double z)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLEXBUFFERVECTORBUILDER_ADD_10_OFFSET))(this, x, y, z);
		}

		::System::Void Add_11(::System::Double x, ::System::Double y, ::System::Double z, ::System::Double w)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double, ::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLEXBUFFERVECTORBUILDER_ADD_11_OFFSET))(this, x, y, z, w);
		}

		::System::Void Add_12(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLEXBUFFERVECTORBUILDER_ADD_12_OFFSET))(this, value);
		}

		::System::Void Add_13(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLEXBUFFERVECTORBUILDER_ADD_13_OFFSET))(this, value);
		}

		::System::Void Add_14(::Il2CppArray<::System::Byte>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLEXBUFFERVECTORBUILDER_ADD_14_OFFSET))(this, value);
		}

		::System::Void Map(::System::Action_1<::FlexBuffers::IFlexBufferMapBuilder*>* map)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::FlexBuffers::IFlexBufferMapBuilder*>*))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLEXBUFFERVECTORBUILDER_MAP_OFFSET))(this, map);
		}

		::System::Void Vector(::System::Action_1<::FlexBuffers::IFlexBufferVectorBuilder*>* vector)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::FlexBuffers::IFlexBufferVectorBuilder*>*))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLEXBUFFERVECTORBUILDER_VECTOR_OFFSET))(this, vector);
		}
	};
}
