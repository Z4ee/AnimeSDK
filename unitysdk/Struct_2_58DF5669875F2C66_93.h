#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define STRUCT_2_58DF5669875F2C66_93_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x28B580)
#define STRUCT_2_58DF5669875F2C66_93_METHOD_2_2AB22D41F7571C1C_OFFSET UNITYSDK_OFFSET(0x726A90)
#define STRUCT_2_58DF5669875F2C66_93_METHOD_2_37944C83B4C06687_OFFSET UNITYSDK_OFFSET(0x741FA0)
#define STRUCT_2_58DF5669875F2C66_93_METHOD_2_4CDE2E1382E8C4EB_OFFSET UNITYSDK_OFFSET(0x164A9920)
#define STRUCT_2_58DF5669875F2C66_93_METHOD_2_8F54C68DC21A03C7_OFFSET UNITYSDK_OFFSET(0x164A99B0)
#define STRUCT_2_58DF5669875F2C66_93___INIT_OFFSET UNITYSDK_OFFSET(0x726A30)

inline static constexpr unsigned int Struct_2_58DF5669875F2C66_93_TypeDefinitionIndex = 10557;

struct alignas(8) Struct_2_58DF5669875F2C66_93
{
	::FlatBuffers::Table Field_2_0; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_58DF5669875F2C66_93_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 a1, ::FlatBuffers::ByteBuffer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_58DF5669875F2C66_93___INIT_OFFSET))(this, a1, a2);
	}

	static ::Struct_2_58DF5669875F2C66_93 Method_2_4CDE2E1382E8C4EB(::FlatBuffers::ByteBuffer* a1, ::Struct_2_58DF5669875F2C66_93 a2)
	{
		return ((::Struct_2_58DF5669875F2C66_93(*)(::FlatBuffers::ByteBuffer*, ::Struct_2_58DF5669875F2C66_93))((::PBYTE)hIl2Cpp + STRUCT_2_58DF5669875F2C66_93_METHOD_2_4CDE2E1382E8C4EB_OFFSET))(a1, a2);
	}

	::Struct_2_58DF5669875F2C66_93 Method_2_2AB22D41F7571C1C(::System::Int32 a1, ::FlatBuffers::ByteBuffer* a2)
	{
		return ((::Struct_2_58DF5669875F2C66_93(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_58DF5669875F2C66_93_METHOD_2_2AB22D41F7571C1C_OFFSET))(this, a1, a2);
	}

	static ::Struct_2_58DF5669875F2C66_93 Method_2_8F54C68DC21A03C7(::FlatBuffers::ByteBuffer* a1)
	{
		return ((::Struct_2_58DF5669875F2C66_93(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_58DF5669875F2C66_93_METHOD_2_8F54C68DC21A03C7_OFFSET))(a1);
	}

	::System::String* Method_2_37944C83B4C06687()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_58DF5669875F2C66_93_METHOD_2_37944C83B4C06687_OFFSET))(this);
	}
};
