#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define STRUCT_2_0190A9212AD9E688_12_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x31CCF0)
#define STRUCT_2_0190A9212AD9E688_12_METHOD_2_1AB60631F75552EE_OFFSET UNITYSDK_OFFSET(0x16FAD9C0)
#define STRUCT_2_0190A9212AD9E688_12_METHOD_2_2AB22D41F7571C1C_OFFSET UNITYSDK_OFFSET(0x77DEF0)
#define STRUCT_2_0190A9212AD9E688_12_METHOD_2_2EFED33D29922FBC_OFFSET UNITYSDK_OFFSET(0x77E560)
#define STRUCT_2_0190A9212AD9E688_12_METHOD_2_5151C40048508F8C_OFFSET UNITYSDK_OFFSET(0x84F040)
#define STRUCT_2_0190A9212AD9E688_12___INIT_OFFSET UNITYSDK_OFFSET(0x77DC50)

inline static constexpr unsigned int Struct_2_0190A9212AD9E688_12_TypeDefinitionIndex = 13768;

struct alignas(8) Struct_2_0190A9212AD9E688_12
{
	::FlatBuffers::Table Field_2_0; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_0190A9212AD9E688_12_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 a1, ::FlatBuffers::ByteBuffer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_0190A9212AD9E688_12___INIT_OFFSET))(this, a1, a2);
	}

	/*
	::System::Span_1<::System::Byte> Method_2_5151C40048508F8C()
	{
		return ((::System::Span_1<::System::Byte>(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_0190A9212AD9E688_12_METHOD_2_5151C40048508F8C_OFFSET))(this);
	}
	*/

	/*
	static ::System::Nullable_1<::Struct_2_0190A9212AD9E688_12> Method_2_1AB60631F75552EE(::System::Int32 a1, ::System::String* a2, ::FlatBuffers::ByteBuffer* a3, ::System::Int32& a4)
	{
		return ((::System::Nullable_1<::Struct_2_0190A9212AD9E688_12>(*)(::System::Int32, ::System::String*, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + STRUCT_2_0190A9212AD9E688_12_METHOD_2_1AB60631F75552EE_OFFSET))(a1, a2, a3, a4);
	}
	*/

	::System::String* Method_2_2EFED33D29922FBC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_0190A9212AD9E688_12_METHOD_2_2EFED33D29922FBC_OFFSET))(this);
	}

	::Struct_2_0190A9212AD9E688_12 Method_2_2AB22D41F7571C1C(::System::Int32 a1, ::FlatBuffers::ByteBuffer* a2)
	{
		return ((::Struct_2_0190A9212AD9E688_12(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_0190A9212AD9E688_12_METHOD_2_2AB22D41F7571C1C_OFFSET))(this, a1, a2);
	}
};
