#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Struct.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define STRUCT_2_3659D99D9E0DCBB9_13_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2A99F0)
#define STRUCT_2_3659D99D9E0DCBB9_13_METHOD_2_2AB22D41F7571C1C_OFFSET UNITYSDK_OFFSET(0x7A5740)
#define STRUCT_2_3659D99D9E0DCBB9_13_METHOD_2_AB01D2A3604A75E7_1_OFFSET UNITYSDK_OFFSET(0x7B9FB0)
#define STRUCT_2_3659D99D9E0DCBB9_13_METHOD_2_AB01D2A3604A75E7_OFFSET UNITYSDK_OFFSET(0x7B9FE0)
#define STRUCT_2_3659D99D9E0DCBB9_13___INIT_OFFSET UNITYSDK_OFFSET(0x7A55D0)

inline static constexpr unsigned int Struct_2_3659D99D9E0DCBB9_13_TypeDefinitionIndex = 11988;

struct alignas(8) Struct_2_3659D99D9E0DCBB9_13
{
	::FlatBuffers::Struct Field_2_0; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_3659D99D9E0DCBB9_13_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 a1, ::FlatBuffers::ByteBuffer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_3659D99D9E0DCBB9_13___INIT_OFFSET))(this, a1, a2);
	}

	::Struct_2_3659D99D9E0DCBB9_13 Method_2_2AB22D41F7571C1C(::System::Int32 a1, ::FlatBuffers::ByteBuffer* a2)
	{
		return ((::Struct_2_3659D99D9E0DCBB9_13(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_3659D99D9E0DCBB9_13_METHOD_2_2AB22D41F7571C1C_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_AB01D2A3604A75E7()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_3659D99D9E0DCBB9_13_METHOD_2_AB01D2A3604A75E7_OFFSET))(this);
	}

	::System::Int32 Method_2_AB01D2A3604A75E7_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_3659D99D9E0DCBB9_13_METHOD_2_AB01D2A3604A75E7_1_OFFSET))(this);
	}
};
