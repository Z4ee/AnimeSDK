#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define STRUCT_2_58DF5669875F2C66_75_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x28B580)
#define STRUCT_2_58DF5669875F2C66_75_METHOD_2_2AB22D41F7571C1C_OFFSET UNITYSDK_OFFSET(0x726A90)
#define STRUCT_2_58DF5669875F2C66_75_METHOD_2_37944C83B4C06687_OFFSET UNITYSDK_OFFSET(0x7270A0)
#define STRUCT_2_58DF5669875F2C66_75_METHOD_2_71627D45225D2114_OFFSET UNITYSDK_OFFSET(0x726AC0)
#define STRUCT_2_58DF5669875F2C66_75_METHOD_2_9F84D1FF74319152_OFFSET UNITYSDK_OFFSET(0x72B310)
#define STRUCT_2_58DF5669875F2C66_75_METHOD_2_A6E855B837335A74_OFFSET UNITYSDK_OFFSET(0x739090)
#define STRUCT_2_58DF5669875F2C66_75___INIT_OFFSET UNITYSDK_OFFSET(0x726A30)

inline static constexpr unsigned int Struct_2_58DF5669875F2C66_75_TypeDefinitionIndex = 18158;

struct alignas(8) Struct_2_58DF5669875F2C66_75
{
	::FlatBuffers::Table Field_2_0; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_58DF5669875F2C66_75_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 a1, ::FlatBuffers::ByteBuffer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_58DF5669875F2C66_75___INIT_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_9F84D1FF74319152()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_58DF5669875F2C66_75_METHOD_2_9F84D1FF74319152_OFFSET))(this);
	}

	::System::String* Method_2_37944C83B4C06687()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_58DF5669875F2C66_75_METHOD_2_37944C83B4C06687_OFFSET))(this);
	}

	::System::UInt32 Method_2_71627D45225D2114()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_58DF5669875F2C66_75_METHOD_2_71627D45225D2114_OFFSET))(this);
	}

	::System::UInt64 Method_2_A6E855B837335A74()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_58DF5669875F2C66_75_METHOD_2_A6E855B837335A74_OFFSET))(this);
	}

	::Struct_2_58DF5669875F2C66_75 Method_2_2AB22D41F7571C1C(::System::Int32 a1, ::FlatBuffers::ByteBuffer* a2)
	{
		return ((::Struct_2_58DF5669875F2C66_75(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_58DF5669875F2C66_75_METHOD_2_2AB22D41F7571C1C_OFFSET))(this, a1, a2);
	}
};
