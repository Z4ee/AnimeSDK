#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define STRUCT_2_58DF5669875F2C66_231_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x31CCF0)
#define STRUCT_2_58DF5669875F2C66_231_METHOD_2_2AB22D41F7571C1C_OFFSET UNITYSDK_OFFSET(0x77DEF0)
#define STRUCT_2_58DF5669875F2C66_231_METHOD_2_2EFED33D29922FBC_OFFSET UNITYSDK_OFFSET(0x77E560)
#define STRUCT_2_58DF5669875F2C66_231_METHOD_2_71627D45225D2114_OFFSET UNITYSDK_OFFSET(0x77DC60)
#define STRUCT_2_58DF5669875F2C66_231_METHOD_2_9F84D1FF74319152_OFFSET UNITYSDK_OFFSET(0x7846A0)
#define STRUCT_2_58DF5669875F2C66_231_METHOD_2_A6E855B837335A74_OFFSET UNITYSDK_OFFSET(0x835C20)
#define STRUCT_2_58DF5669875F2C66_231___INIT_OFFSET UNITYSDK_OFFSET(0x77DC50)

inline static constexpr unsigned int Struct_2_58DF5669875F2C66_231_TypeDefinitionIndex = 16961;

struct alignas(8) Struct_2_58DF5669875F2C66_231
{
	::FlatBuffers::Table Field_2_0; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_58DF5669875F2C66_231_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 a1, ::FlatBuffers::ByteBuffer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_58DF5669875F2C66_231___INIT_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_9F84D1FF74319152()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_58DF5669875F2C66_231_METHOD_2_9F84D1FF74319152_OFFSET))(this);
	}

	::Struct_2_58DF5669875F2C66_231 Method_2_2AB22D41F7571C1C(::System::Int32 a1, ::FlatBuffers::ByteBuffer* a2)
	{
		return ((::Struct_2_58DF5669875F2C66_231(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_58DF5669875F2C66_231_METHOD_2_2AB22D41F7571C1C_OFFSET))(this, a1, a2);
	}

	::System::String* Method_2_2EFED33D29922FBC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_58DF5669875F2C66_231_METHOD_2_2EFED33D29922FBC_OFFSET))(this);
	}

	::System::UInt64 Method_2_A6E855B837335A74()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_58DF5669875F2C66_231_METHOD_2_A6E855B837335A74_OFFSET))(this);
	}

	::System::UInt32 Method_2_71627D45225D2114()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_58DF5669875F2C66_231_METHOD_2_71627D45225D2114_OFFSET))(this);
	}
};
