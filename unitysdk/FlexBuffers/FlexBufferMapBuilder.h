#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace FlexBuffers { class FlexBuffer; }
namespace FlexBuffers { class IFlexBufferMapBuilder; }
namespace FlexBuffers { class IFlexBufferVectorBuilder; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define FLEXBUFFERS_FLEXBUFFERMAPBUILDER_ADDNULL_OFFSET UNITYSDK_OFFSET(0x9548E0)
#define FLEXBUFFERS_FLEXBUFFERMAPBUILDER_ADD_10_OFFSET UNITYSDK_OFFSET(0x9549E0)
#define FLEXBUFFERS_FLEXBUFFERMAPBUILDER_ADD_11_OFFSET UNITYSDK_OFFSET(0x9549F0)
#define FLEXBUFFERS_FLEXBUFFERMAPBUILDER_ADD_12_OFFSET UNITYSDK_OFFSET(0x954A00)
#define FLEXBUFFERS_FLEXBUFFERMAPBUILDER_ADD_13_OFFSET UNITYSDK_OFFSET(0x954A70)
#define FLEXBUFFERS_FLEXBUFFERMAPBUILDER_ADD_14_OFFSET UNITYSDK_OFFSET(0x954AB0)
#define FLEXBUFFERS_FLEXBUFFERMAPBUILDER_ADD_1_OFFSET UNITYSDK_OFFSET(0x954950)
#define FLEXBUFFERS_FLEXBUFFERMAPBUILDER_ADD_2_OFFSET UNITYSDK_OFFSET(0x954960)
#define FLEXBUFFERS_FLEXBUFFERMAPBUILDER_ADD_3_OFFSET UNITYSDK_OFFSET(0x954970)
#define FLEXBUFFERS_FLEXBUFFERMAPBUILDER_ADD_4_OFFSET UNITYSDK_OFFSET(0x954980)
#define FLEXBUFFERS_FLEXBUFFERMAPBUILDER_ADD_5_OFFSET UNITYSDK_OFFSET(0x954990)
#define FLEXBUFFERS_FLEXBUFFERMAPBUILDER_ADD_6_OFFSET UNITYSDK_OFFSET(0x9549A0)
#define FLEXBUFFERS_FLEXBUFFERMAPBUILDER_ADD_7_OFFSET UNITYSDK_OFFSET(0x9549B0)
#define FLEXBUFFERS_FLEXBUFFERMAPBUILDER_ADD_8_OFFSET UNITYSDK_OFFSET(0x9549C0)
#define FLEXBUFFERS_FLEXBUFFERMAPBUILDER_ADD_9_OFFSET UNITYSDK_OFFSET(0x9549D0)
#define FLEXBUFFERS_FLEXBUFFERMAPBUILDER_ADD_OFFSET UNITYSDK_OFFSET(0x954940)
#define FLEXBUFFERS_FLEXBUFFERMAPBUILDER_MAP_OFFSET UNITYSDK_OFFSET(0x954AF0)
#define FLEXBUFFERS_FLEXBUFFERMAPBUILDER_VECTOR_OFFSET UNITYSDK_OFFSET(0x954B00)
#define FLEXBUFFERS_FLEXBUFFERMAPBUILDER__CTOR_OFFSET UNITYSDK_OFFSET(0x2E5940)

namespace FlexBuffers
{
	inline static constexpr unsigned int FlexBufferMapBuilder_TypeDefinitionIndex = 8759;

	struct alignas(8) FlexBufferMapBuilder
	{
		::FlexBuffers::FlexBuffer* _buffer; // 0x10

		::System::Void _ctor(::FlexBuffers::FlexBuffer* buffer)
		{
			return ((::System::Void(*)(::PVOID, ::FlexBuffers::FlexBuffer*))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLEXBUFFERMAPBUILDER__CTOR_OFFSET))(this, buffer);
		}

		::System::Void AddNull(::System::String* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLEXBUFFERMAPBUILDER_ADDNULL_OFFSET))(this, key);
		}

		::System::Void Add(::System::String* key, ::System::Int64 value, ::System::Boolean indirect)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int64, ::System::Boolean))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLEXBUFFERMAPBUILDER_ADD_OFFSET))(this, key, value, indirect);
		}

		::System::Void Add_1(::System::String* key, ::System::Int64 x, ::System::Int64 y)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLEXBUFFERMAPBUILDER_ADD_1_OFFSET))(this, key, x, y);
		}

		::System::Void Add_2(::System::String* key, ::System::Int64 x, ::System::Int64 y, ::System::Int64 z)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int64, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLEXBUFFERMAPBUILDER_ADD_2_OFFSET))(this, key, x, y, z);
		}

		::System::Void Add_3(::System::String* key, ::System::Int64 x, ::System::Int64 y, ::System::Int64 z, ::System::Int64 w)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLEXBUFFERMAPBUILDER_ADD_3_OFFSET))(this, key, x, y, z, w);
		}

		::System::Void Add_4(::System::String* key, ::System::UInt64 value, ::System::Boolean indirect)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt64, ::System::Boolean))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLEXBUFFERMAPBUILDER_ADD_4_OFFSET))(this, key, value, indirect);
		}

		::System::Void Add_5(::System::String* key, ::System::UInt64 x, ::System::UInt64 y)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLEXBUFFERMAPBUILDER_ADD_5_OFFSET))(this, key, x, y);
		}

		::System::Void Add_6(::System::String* key, ::System::UInt64 x, ::System::UInt64 y, ::System::UInt64 z)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt64, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLEXBUFFERMAPBUILDER_ADD_6_OFFSET))(this, key, x, y, z);
		}

		::System::Void Add_7(::System::String* key, ::System::UInt64 x, ::System::UInt64 y, ::System::UInt64 z, ::System::UInt64 w)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt64, ::System::UInt64, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLEXBUFFERMAPBUILDER_ADD_7_OFFSET))(this, key, x, y, z, w);
		}

		::System::Void Add_8(::System::String* key, ::System::Double value, ::System::Boolean indirect)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Double, ::System::Boolean))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLEXBUFFERMAPBUILDER_ADD_8_OFFSET))(this, key, value, indirect);
		}

		::System::Void Add_9(::System::String* key, ::System::Double x, ::System::Double y)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLEXBUFFERMAPBUILDER_ADD_9_OFFSET))(this, key, x, y);
		}

		::System::Void Add_10(::System::String* key, ::System::Double x, ::System::Double y, ::System::Double z)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLEXBUFFERMAPBUILDER_ADD_10_OFFSET))(this, key, x, y, z);
		}

		::System::Void Add_11(::System::String* key, ::System::Double x, ::System::Double y, ::System::Double z, ::System::Double w)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Double, ::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLEXBUFFERMAPBUILDER_ADD_11_OFFSET))(this, key, x, y, z, w);
		}

		::System::Void Add_12(::System::String* key, ::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLEXBUFFERMAPBUILDER_ADD_12_OFFSET))(this, key, value);
		}

		::System::Void Add_13(::System::String* key, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLEXBUFFERMAPBUILDER_ADD_13_OFFSET))(this, key, value);
		}

		::System::Void Add_14(::System::String* key, ::Il2CppArray<::System::Byte>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLEXBUFFERMAPBUILDER_ADD_14_OFFSET))(this, key, value);
		}

		::System::Void Map(::System::String* key, ::System::Action_1<::FlexBuffers::IFlexBufferMapBuilder*>* map)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::FlexBuffers::IFlexBufferMapBuilder*>*))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLEXBUFFERMAPBUILDER_MAP_OFFSET))(this, key, map);
		}

		::System::Void Vector(::System::String* key, ::System::Action_1<::FlexBuffers::IFlexBufferVectorBuilder*>* vector)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::FlexBuffers::IFlexBufferVectorBuilder*>*))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLEXBUFFERMAPBUILDER_VECTOR_OFFSET))(this, key, vector);
		}
	};
}
