#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define STRUCT_2_58DF5669875F2C66_157_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2A99F0)
#define STRUCT_2_58DF5669875F2C66_157_METHOD_2_2AB22D41F7571C1C_OFFSET UNITYSDK_OFFSET(0x7A5740)
#define STRUCT_2_58DF5669875F2C66_157_METHOD_2_2EFED33D29922FBC_OFFSET UNITYSDK_OFFSET(0x7A6990)
#define STRUCT_2_58DF5669875F2C66_157_METHOD_2_B84F1C9E816AD9C0_OFFSET UNITYSDK_OFFSET(0x7A55E0)
#define STRUCT_2_58DF5669875F2C66_157_METHOD_2_BAFD0B2DAD699DB8_OFFSET UNITYSDK_OFFSET(0x7D86A0)
#define STRUCT_2_58DF5669875F2C66_157___INIT_OFFSET UNITYSDK_OFFSET(0x7A55D0)

inline static constexpr unsigned int Struct_2_58DF5669875F2C66_157_TypeDefinitionIndex = 10411;

struct alignas(8) Struct_2_58DF5669875F2C66_157
{
	::FlatBuffers::Table Field_2_0; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_58DF5669875F2C66_157_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 a1, ::FlatBuffers::ByteBuffer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_58DF5669875F2C66_157___INIT_OFFSET))(this, a1, a2);
	}

	::Struct_2_58DF5669875F2C66_157 Method_2_2AB22D41F7571C1C(::System::Int32 a1, ::FlatBuffers::ByteBuffer* a2)
	{
		return ((::Struct_2_58DF5669875F2C66_157(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_58DF5669875F2C66_157_METHOD_2_2AB22D41F7571C1C_OFFSET))(this, a1, a2);
	}

	::System::Single Method_2_BAFD0B2DAD699DB8()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_58DF5669875F2C66_157_METHOD_2_BAFD0B2DAD699DB8_OFFSET))(this);
	}

	::System::String* Method_2_2EFED33D29922FBC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_58DF5669875F2C66_157_METHOD_2_2EFED33D29922FBC_OFFSET))(this);
	}

	::System::Int32 Method_2_B84F1C9E816AD9C0()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_58DF5669875F2C66_157_METHOD_2_B84F1C9E816AD9C0_OFFSET))(this);
	}
};
