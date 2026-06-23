#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define STRUCT_2_0190A9212AD9E688_6_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2A99F0)
#define STRUCT_2_0190A9212AD9E688_6_METHOD_2_1AB60631F75552EE_OFFSET UNITYSDK_OFFSET(0x19E6A5F0)
#define STRUCT_2_0190A9212AD9E688_6_METHOD_2_2AB22D41F7571C1C_OFFSET UNITYSDK_OFFSET(0x7A5740)
#define STRUCT_2_0190A9212AD9E688_6_METHOD_2_5151C40048508F8C_OFFSET UNITYSDK_OFFSET(0x7EB9D0)
#define STRUCT_2_0190A9212AD9E688_6_METHOD_2_BAFD0B2DAD699DB8_1_OFFSET UNITYSDK_OFFSET(0x7D86A0)
#define STRUCT_2_0190A9212AD9E688_6_METHOD_2_BAFD0B2DAD699DB8_2_OFFSET UNITYSDK_OFFSET(0x7A9780)
#define STRUCT_2_0190A9212AD9E688_6_METHOD_2_BAFD0B2DAD699DB8_3_OFFSET UNITYSDK_OFFSET(0x7D8650)
#define STRUCT_2_0190A9212AD9E688_6_METHOD_2_BAFD0B2DAD699DB8_OFFSET UNITYSDK_OFFSET(0x7B9600)
#define STRUCT_2_0190A9212AD9E688_6___INIT_OFFSET UNITYSDK_OFFSET(0x7A55D0)

inline static constexpr unsigned int Struct_2_0190A9212AD9E688_6_TypeDefinitionIndex = 9667;

struct alignas(8) Struct_2_0190A9212AD9E688_6
{
	::FlatBuffers::Table Field_2_0; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_0190A9212AD9E688_6_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 a1, ::FlatBuffers::ByteBuffer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_0190A9212AD9E688_6___INIT_OFFSET))(this, a1, a2);
	}

	/*
	static ::System::Nullable_1<::Struct_2_0190A9212AD9E688_6> Method_2_1AB60631F75552EE(::System::Int32 a1, ::System::String* a2, ::FlatBuffers::ByteBuffer* a3, ::System::Int32& a4)
	{
		return ((::System::Nullable_1<::Struct_2_0190A9212AD9E688_6>(*)(::System::Int32, ::System::String*, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + STRUCT_2_0190A9212AD9E688_6_METHOD_2_1AB60631F75552EE_OFFSET))(a1, a2, a3, a4);
	}
	*/

	::System::Single Method_2_BAFD0B2DAD699DB8()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_0190A9212AD9E688_6_METHOD_2_BAFD0B2DAD699DB8_OFFSET))(this);
	}

	::System::Single Method_2_BAFD0B2DAD699DB8_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_0190A9212AD9E688_6_METHOD_2_BAFD0B2DAD699DB8_1_OFFSET))(this);
	}

	::System::Single Method_2_BAFD0B2DAD699DB8_2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_0190A9212AD9E688_6_METHOD_2_BAFD0B2DAD699DB8_2_OFFSET))(this);
	}

	/*
	::System::Span_1<::System::Byte> Method_2_5151C40048508F8C()
	{
		return ((::System::Span_1<::System::Byte>(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_0190A9212AD9E688_6_METHOD_2_5151C40048508F8C_OFFSET))(this);
	}
	*/

	::Struct_2_0190A9212AD9E688_6 Method_2_2AB22D41F7571C1C(::System::Int32 a1, ::FlatBuffers::ByteBuffer* a2)
	{
		return ((::Struct_2_0190A9212AD9E688_6(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_0190A9212AD9E688_6_METHOD_2_2AB22D41F7571C1C_OFFSET))(this, a1, a2);
	}

	::System::Single Method_2_BAFD0B2DAD699DB8_3()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_0190A9212AD9E688_6_METHOD_2_BAFD0B2DAD699DB8_3_OFFSET))(this);
	}
};
