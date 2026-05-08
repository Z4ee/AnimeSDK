#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define STRUCT_2_56101A14A39BFA03_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x28B580)
#define STRUCT_2_56101A14A39BFA03_METHOD_2_2AB22D41F7571C1C_OFFSET UNITYSDK_OFFSET(0x726A90)
#define STRUCT_2_56101A14A39BFA03_METHOD_2_37944C83B4C06687_OFFSET UNITYSDK_OFFSET(0x726D00)
#define STRUCT_2_56101A14A39BFA03_METHOD_2_574A0EFDE858A687_1_OFFSET UNITYSDK_OFFSET(0x738EF0)
#define STRUCT_2_56101A14A39BFA03_METHOD_2_574A0EFDE858A687_OFFSET UNITYSDK_OFFSET(0x72BE70)
#define STRUCT_2_56101A14A39BFA03_METHOD_2_580E046F32C3C32F_OFFSET UNITYSDK_OFFSET(0x1A133B60)
#define STRUCT_2_56101A14A39BFA03_METHOD_2_96C4E0BD24A6C5C4_1_OFFSET UNITYSDK_OFFSET(0x72BE00)
#define STRUCT_2_56101A14A39BFA03_METHOD_2_96C4E0BD24A6C5C4_OFFSET UNITYSDK_OFFSET(0x738F50)
#define STRUCT_2_56101A14A39BFA03_METHOD_2_A6E855B837335A74_OFFSET UNITYSDK_OFFSET(0x8B91E0)
#define STRUCT_2_56101A14A39BFA03___INIT_OFFSET UNITYSDK_OFFSET(0x726A30)

inline static constexpr unsigned int Struct_2_56101A14A39BFA03_TypeDefinitionIndex = 9902;

struct alignas(8) Struct_2_56101A14A39BFA03
{
	::FlatBuffers::Table Field_2_0; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_56101A14A39BFA03_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 a1, ::FlatBuffers::ByteBuffer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_56101A14A39BFA03___INIT_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_96C4E0BD24A6C5C4(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_56101A14A39BFA03_METHOD_2_96C4E0BD24A6C5C4_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_574A0EFDE858A687()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_56101A14A39BFA03_METHOD_2_574A0EFDE858A687_OFFSET))(this);
	}

	::System::Int32 Method_2_574A0EFDE858A687_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_56101A14A39BFA03_METHOD_2_574A0EFDE858A687_1_OFFSET))(this);
	}

	::System::UInt64 Method_2_A6E855B837335A74()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_56101A14A39BFA03_METHOD_2_A6E855B837335A74_OFFSET))(this);
	}

	/*
	static ::System::Nullable_1<::Struct_2_56101A14A39BFA03> Method_2_580E046F32C3C32F(::System::Int32 a1, ::System::UInt64 a2, ::FlatBuffers::ByteBuffer* a3, ::System::Int32& a4)
	{
		return ((::System::Nullable_1<::Struct_2_56101A14A39BFA03>(*)(::System::Int32, ::System::UInt64, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + STRUCT_2_56101A14A39BFA03_METHOD_2_580E046F32C3C32F_OFFSET))(a1, a2, a3, a4);
	}
	*/

	::System::String* Method_2_37944C83B4C06687()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_56101A14A39BFA03_METHOD_2_37944C83B4C06687_OFFSET))(this);
	}

	::System::Int32 Method_2_96C4E0BD24A6C5C4_1(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_56101A14A39BFA03_METHOD_2_96C4E0BD24A6C5C4_1_OFFSET))(this, a1);
	}

	::Struct_2_56101A14A39BFA03 Method_2_2AB22D41F7571C1C(::System::Int32 a1, ::FlatBuffers::ByteBuffer* a2)
	{
		return ((::Struct_2_56101A14A39BFA03(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_56101A14A39BFA03_METHOD_2_2AB22D41F7571C1C_OFFSET))(this, a1, a2);
	}
};
