#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define STRUCT_2_58DF5669875F2C66_174_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x31CCF0)
#define STRUCT_2_58DF5669875F2C66_174_METHOD_2_2AB22D41F7571C1C_OFFSET UNITYSDK_OFFSET(0x77DEF0)
#define STRUCT_2_58DF5669875F2C66_174_METHOD_2_2EFED33D29922FBC_OFFSET UNITYSDK_OFFSET(0x784B10)
#define STRUCT_2_58DF5669875F2C66_174_METHOD_2_4CDE2E1382E8C4EB_OFFSET UNITYSDK_OFFSET(0x13F71D10)
#define STRUCT_2_58DF5669875F2C66_174_METHOD_2_8F54C68DC21A03C7_OFFSET UNITYSDK_OFFSET(0x13F71CD0)
#define STRUCT_2_58DF5669875F2C66_174___INIT_OFFSET UNITYSDK_OFFSET(0x77DC50)

inline static constexpr unsigned int Struct_2_58DF5669875F2C66_174_TypeDefinitionIndex = 11005;

struct alignas(8) Struct_2_58DF5669875F2C66_174
{
	::FlatBuffers::Table Field_2_0; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_58DF5669875F2C66_174_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 a1, ::FlatBuffers::ByteBuffer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_58DF5669875F2C66_174___INIT_OFFSET))(this, a1, a2);
	}

	::System::String* Method_2_2EFED33D29922FBC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_58DF5669875F2C66_174_METHOD_2_2EFED33D29922FBC_OFFSET))(this);
	}

	static ::Struct_2_58DF5669875F2C66_174 Method_2_8F54C68DC21A03C7(::FlatBuffers::ByteBuffer* a1)
	{
		return ((::Struct_2_58DF5669875F2C66_174(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_58DF5669875F2C66_174_METHOD_2_8F54C68DC21A03C7_OFFSET))(a1);
	}

	static ::Struct_2_58DF5669875F2C66_174 Method_2_4CDE2E1382E8C4EB(::FlatBuffers::ByteBuffer* a1, ::Struct_2_58DF5669875F2C66_174 a2)
	{
		return ((::Struct_2_58DF5669875F2C66_174(*)(::FlatBuffers::ByteBuffer*, ::Struct_2_58DF5669875F2C66_174))((::PBYTE)hIl2Cpp + STRUCT_2_58DF5669875F2C66_174_METHOD_2_4CDE2E1382E8C4EB_OFFSET))(a1, a2);
	}

	::Struct_2_58DF5669875F2C66_174 Method_2_2AB22D41F7571C1C(::System::Int32 a1, ::FlatBuffers::ByteBuffer* a2)
	{
		return ((::Struct_2_58DF5669875F2C66_174(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_58DF5669875F2C66_174_METHOD_2_2AB22D41F7571C1C_OFFSET))(this, a1, a2);
	}
};
