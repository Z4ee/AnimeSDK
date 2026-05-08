#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Struct.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define STRUCT_2_3659D99D9E0DCBB9_5_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x28B580)
#define STRUCT_2_3659D99D9E0DCBB9_5___INIT_OFFSET UNITYSDK_OFFSET(0x726A30)

inline static constexpr unsigned int Struct_2_3659D99D9E0DCBB9_5_TypeDefinitionIndex = 17048;

struct alignas(8) Struct_2_3659D99D9E0DCBB9_5
{
	::FlatBuffers::Struct Field_2_0; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_3659D99D9E0DCBB9_5_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 a1, ::FlatBuffers::ByteBuffer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_3659D99D9E0DCBB9_5___INIT_OFFSET))(this, a1, a2);
	}
};
