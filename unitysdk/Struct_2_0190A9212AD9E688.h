#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define STRUCT_2_0190A9212AD9E688_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x28B580)
#define STRUCT_2_0190A9212AD9E688_METHOD_2_1AB60631F75552EE_OFFSET UNITYSDK_OFFSET(0x19018DF0)
#define STRUCT_2_0190A9212AD9E688_METHOD_2_2AB22D41F7571C1C_OFFSET UNITYSDK_OFFSET(0x726A90)
#define STRUCT_2_0190A9212AD9E688_METHOD_2_37944C83B4C06687_1_OFFSET UNITYSDK_OFFSET(0x728130)
#define STRUCT_2_0190A9212AD9E688_METHOD_2_37944C83B4C06687_2_OFFSET UNITYSDK_OFFSET(0x726D00)
#define STRUCT_2_0190A9212AD9E688_METHOD_2_37944C83B4C06687_3_OFFSET UNITYSDK_OFFSET(0x727020)
#define STRUCT_2_0190A9212AD9E688_METHOD_2_37944C83B4C06687_4_OFFSET UNITYSDK_OFFSET(0x72B860)
#define STRUCT_2_0190A9212AD9E688_METHOD_2_37944C83B4C06687_OFFSET UNITYSDK_OFFSET(0x728B10)
#define STRUCT_2_0190A9212AD9E688_METHOD_2_5151C40048508F8C_OFFSET UNITYSDK_OFFSET(0x741F50)
#define STRUCT_2_0190A9212AD9E688_METHOD_2_B84F1C9E816AD9C0_OFFSET UNITYSDK_OFFSET(0x7281B0)
#define STRUCT_2_0190A9212AD9E688___INIT_OFFSET UNITYSDK_OFFSET(0x726A30)

inline static constexpr unsigned int Struct_2_0190A9212AD9E688_TypeDefinitionIndex = 17396;

struct alignas(8) Struct_2_0190A9212AD9E688
{
	::FlatBuffers::Table Field_2_0; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_0190A9212AD9E688_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 a1, ::FlatBuffers::ByteBuffer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_0190A9212AD9E688___INIT_OFFSET))(this, a1, a2);
	}

	/*
	::System::Span_1<::System::Byte> Method_2_5151C40048508F8C()
	{
		return ((::System::Span_1<::System::Byte>(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_0190A9212AD9E688_METHOD_2_5151C40048508F8C_OFFSET))(this);
	}
	*/

	::System::String* Method_2_37944C83B4C06687()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_0190A9212AD9E688_METHOD_2_37944C83B4C06687_OFFSET))(this);
	}

	::System::String* Method_2_37944C83B4C06687_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_0190A9212AD9E688_METHOD_2_37944C83B4C06687_1_OFFSET))(this);
	}

	::System::String* Method_2_37944C83B4C06687_2()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_0190A9212AD9E688_METHOD_2_37944C83B4C06687_2_OFFSET))(this);
	}

	::System::String* Method_2_37944C83B4C06687_3()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_0190A9212AD9E688_METHOD_2_37944C83B4C06687_3_OFFSET))(this);
	}

	/*
	static ::System::Nullable_1<::Struct_2_0190A9212AD9E688> Method_2_1AB60631F75552EE(::System::Int32 a1, ::System::String* a2, ::FlatBuffers::ByteBuffer* a3, ::System::Int32& a4)
	{
		return ((::System::Nullable_1<::Struct_2_0190A9212AD9E688>(*)(::System::Int32, ::System::String*, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + STRUCT_2_0190A9212AD9E688_METHOD_2_1AB60631F75552EE_OFFSET))(a1, a2, a3, a4);
	}
	*/

	::System::Int32 Method_2_B84F1C9E816AD9C0()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_0190A9212AD9E688_METHOD_2_B84F1C9E816AD9C0_OFFSET))(this);
	}

	::Struct_2_0190A9212AD9E688 Method_2_2AB22D41F7571C1C(::System::Int32 a1, ::FlatBuffers::ByteBuffer* a2)
	{
		return ((::Struct_2_0190A9212AD9E688(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_0190A9212AD9E688_METHOD_2_2AB22D41F7571C1C_OFFSET))(this, a1, a2);
	}

	::System::String* Method_2_37944C83B4C06687_4()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_0190A9212AD9E688_METHOD_2_37944C83B4C06687_4_OFFSET))(this);
	}
};
