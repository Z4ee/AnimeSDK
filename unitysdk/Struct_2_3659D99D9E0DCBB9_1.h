#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Struct.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define STRUCT_2_3659D99D9E0DCBB9_1_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x28B580)
#define STRUCT_2_3659D99D9E0DCBB9_1_METHOD_2_2AB22D41F7571C1C_OFFSET UNITYSDK_OFFSET(0x726A90)
#define STRUCT_2_3659D99D9E0DCBB9_1_METHOD_2_3D56955897842181_1_OFFSET UNITYSDK_OFFSET(0x743010)
#define STRUCT_2_3659D99D9E0DCBB9_1_METHOD_2_3D56955897842181_2_OFFSET UNITYSDK_OFFSET(0x743040)
#define STRUCT_2_3659D99D9E0DCBB9_1_METHOD_2_3D56955897842181_OFFSET UNITYSDK_OFFSET(0x742FE0)
#define STRUCT_2_3659D99D9E0DCBB9_1___INIT_OFFSET UNITYSDK_OFFSET(0x726A30)

inline static constexpr unsigned int Struct_2_3659D99D9E0DCBB9_1_TypeDefinitionIndex = 13610;

struct alignas(8) Struct_2_3659D99D9E0DCBB9_1
{
	::FlatBuffers::Struct Field_2_0; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_3659D99D9E0DCBB9_1_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 a1, ::FlatBuffers::ByteBuffer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_3659D99D9E0DCBB9_1___INIT_OFFSET))(this, a1, a2);
	}

	::System::Single Method_2_3D56955897842181()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_3659D99D9E0DCBB9_1_METHOD_2_3D56955897842181_OFFSET))(this);
	}

	::System::Single Method_2_3D56955897842181_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_3659D99D9E0DCBB9_1_METHOD_2_3D56955897842181_1_OFFSET))(this);
	}

	::System::Single Method_2_3D56955897842181_2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_3659D99D9E0DCBB9_1_METHOD_2_3D56955897842181_2_OFFSET))(this);
	}

	::Struct_2_3659D99D9E0DCBB9_1 Method_2_2AB22D41F7571C1C(::System::Int32 a1, ::FlatBuffers::ByteBuffer* a2)
	{
		return ((::Struct_2_3659D99D9E0DCBB9_1(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_3659D99D9E0DCBB9_1_METHOD_2_2AB22D41F7571C1C_OFFSET))(this, a1, a2);
	}
};
