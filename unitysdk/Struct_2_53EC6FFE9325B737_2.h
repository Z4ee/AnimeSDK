#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define STRUCT_2_53EC6FFE9325B737_2_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x28B580)
#define STRUCT_2_53EC6FFE9325B737_2_METHOD_2_2AB22D41F7571C1C_OFFSET UNITYSDK_OFFSET(0x726A90)
#define STRUCT_2_53EC6FFE9325B737_2_METHOD_2_67D8B707BE896A69_OFFSET UNITYSDK_OFFSET(0x1901E7D0)
#define STRUCT_2_53EC6FFE9325B737_2_METHOD_2_B84F1C9E816AD9C0_1_OFFSET UNITYSDK_OFFSET(0x726AC0)
#define STRUCT_2_53EC6FFE9325B737_2_METHOD_2_B84F1C9E816AD9C0_2_OFFSET UNITYSDK_OFFSET(0x729880)
#define STRUCT_2_53EC6FFE9325B737_2_METHOD_2_B84F1C9E816AD9C0_OFFSET UNITYSDK_OFFSET(0x729CF0)
#define STRUCT_2_53EC6FFE9325B737_2___INIT_OFFSET UNITYSDK_OFFSET(0x726A30)

inline static constexpr unsigned int Struct_2_53EC6FFE9325B737_2_TypeDefinitionIndex = 15374;

struct alignas(8) Struct_2_53EC6FFE9325B737_2
{
	::FlatBuffers::Table Field_2_0; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_53EC6FFE9325B737_2_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 a1, ::FlatBuffers::ByteBuffer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_53EC6FFE9325B737_2___INIT_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_B84F1C9E816AD9C0()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_53EC6FFE9325B737_2_METHOD_2_B84F1C9E816AD9C0_OFFSET))(this);
	}

	/*
	static ::System::Nullable_1<::Struct_2_53EC6FFE9325B737_2> Method_2_67D8B707BE896A69(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::FlatBuffers::ByteBuffer* a4, ::System::Int32& a5)
	{
		return ((::System::Nullable_1<::Struct_2_53EC6FFE9325B737_2>(*)(::System::Int32, ::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + STRUCT_2_53EC6FFE9325B737_2_METHOD_2_67D8B707BE896A69_OFFSET))(a1, a2, a3, a4, a5);
	}
	*/

	::Struct_2_53EC6FFE9325B737_2 Method_2_2AB22D41F7571C1C(::System::Int32 a1, ::FlatBuffers::ByteBuffer* a2)
	{
		return ((::Struct_2_53EC6FFE9325B737_2(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_53EC6FFE9325B737_2_METHOD_2_2AB22D41F7571C1C_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_B84F1C9E816AD9C0_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_53EC6FFE9325B737_2_METHOD_2_B84F1C9E816AD9C0_1_OFFSET))(this);
	}

	::System::Int32 Method_2_B84F1C9E816AD9C0_2()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_53EC6FFE9325B737_2_METHOD_2_B84F1C9E816AD9C0_2_OFFSET))(this);
	}
};
