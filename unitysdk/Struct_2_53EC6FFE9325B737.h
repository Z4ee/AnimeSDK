#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define STRUCT_2_53EC6FFE9325B737_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x31CCF0)
#define STRUCT_2_53EC6FFE9325B737_METHOD_2_2AB22D41F7571C1C_OFFSET UNITYSDK_OFFSET(0x77DEF0)
#define STRUCT_2_53EC6FFE9325B737_METHOD_2_2EFED33D29922FBC_OFFSET UNITYSDK_OFFSET(0x77E560)
#define STRUCT_2_53EC6FFE9325B737_METHOD_2_67D8B707BE896A69_OFFSET UNITYSDK_OFFSET(0x16994900)
#define STRUCT_2_53EC6FFE9325B737_METHOD_2_B84F1C9E816AD9C0_1_OFFSET UNITYSDK_OFFSET(0x77DF20)
#define STRUCT_2_53EC6FFE9325B737_METHOD_2_B84F1C9E816AD9C0_OFFSET UNITYSDK_OFFSET(0x77DC60)
#define STRUCT_2_53EC6FFE9325B737___INIT_OFFSET UNITYSDK_OFFSET(0x77DC50)

inline static constexpr unsigned int Struct_2_53EC6FFE9325B737_TypeDefinitionIndex = 8998;

struct alignas(8) Struct_2_53EC6FFE9325B737
{
	::FlatBuffers::Table Field_2_0; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_53EC6FFE9325B737_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 a1, ::FlatBuffers::ByteBuffer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_53EC6FFE9325B737___INIT_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_B84F1C9E816AD9C0()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_53EC6FFE9325B737_METHOD_2_B84F1C9E816AD9C0_OFFSET))(this);
	}

	::Struct_2_53EC6FFE9325B737 Method_2_2AB22D41F7571C1C(::System::Int32 a1, ::FlatBuffers::ByteBuffer* a2)
	{
		return ((::Struct_2_53EC6FFE9325B737(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_53EC6FFE9325B737_METHOD_2_2AB22D41F7571C1C_OFFSET))(this, a1, a2);
	}

	/*
	static ::System::Nullable_1<::Struct_2_53EC6FFE9325B737> Method_2_67D8B707BE896A69(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::FlatBuffers::ByteBuffer* a4, ::System::Int32& a5)
	{
		return ((::System::Nullable_1<::Struct_2_53EC6FFE9325B737>(*)(::System::Int32, ::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + STRUCT_2_53EC6FFE9325B737_METHOD_2_67D8B707BE896A69_OFFSET))(a1, a2, a3, a4, a5);
	}
	*/

	::System::String* Method_2_2EFED33D29922FBC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_53EC6FFE9325B737_METHOD_2_2EFED33D29922FBC_OFFSET))(this);
	}

	::System::Int32 Method_2_B84F1C9E816AD9C0_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_53EC6FFE9325B737_METHOD_2_B84F1C9E816AD9C0_1_OFFSET))(this);
	}
};
