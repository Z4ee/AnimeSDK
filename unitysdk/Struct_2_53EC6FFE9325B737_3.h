#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define STRUCT_2_53EC6FFE9325B737_3_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x31CCF0)
#define STRUCT_2_53EC6FFE9325B737_3_METHOD_2_2AB22D41F7571C1C_OFFSET UNITYSDK_OFFSET(0x77DEF0)
#define STRUCT_2_53EC6FFE9325B737_3_METHOD_2_2EFED33D29922FBC_1_OFFSET UNITYSDK_OFFSET(0x77E4E0)
#define STRUCT_2_53EC6FFE9325B737_3_METHOD_2_2EFED33D29922FBC_OFFSET UNITYSDK_OFFSET(0x781330)
#define STRUCT_2_53EC6FFE9325B737_3_METHOD_2_4645AB3FFA885858_OFFSET UNITYSDK_OFFSET(0x8B7D70)
#define STRUCT_2_53EC6FFE9325B737_3_METHOD_2_574A0EFDE858A687_1_OFFSET UNITYSDK_OFFSET(0x785040)
#define STRUCT_2_53EC6FFE9325B737_3_METHOD_2_574A0EFDE858A687_OFFSET UNITYSDK_OFFSET(0x77EED0)
#define STRUCT_2_53EC6FFE9325B737_3_METHOD_2_67D8B707BE896A69_OFFSET UNITYSDK_OFFSET(0x1A5BD4F0)
#define STRUCT_2_53EC6FFE9325B737_3_METHOD_2_96C4E0BD24A6C5C4_OFFSET UNITYSDK_OFFSET(0x77EF30)
#define STRUCT_2_53EC6FFE9325B737_3_METHOD_2_B84F1C9E816AD9C0_1_OFFSET UNITYSDK_OFFSET(0x77DF20)
#define STRUCT_2_53EC6FFE9325B737_3_METHOD_2_B84F1C9E816AD9C0_OFFSET UNITYSDK_OFFSET(0x77E150)
#define STRUCT_2_53EC6FFE9325B737_3___INIT_OFFSET UNITYSDK_OFFSET(0x77DC50)

inline static constexpr unsigned int Struct_2_53EC6FFE9325B737_3_TypeDefinitionIndex = 9069;

struct alignas(8) Struct_2_53EC6FFE9325B737_3
{
	::FlatBuffers::Table Field_2_0; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_53EC6FFE9325B737_3_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 a1, ::FlatBuffers::ByteBuffer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_53EC6FFE9325B737_3___INIT_OFFSET))(this, a1, a2);
	}

	::Struct_2_53EC6FFE9325B737_3 Method_2_2AB22D41F7571C1C(::System::Int32 a1, ::FlatBuffers::ByteBuffer* a2)
	{
		return ((::Struct_2_53EC6FFE9325B737_3(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_53EC6FFE9325B737_3_METHOD_2_2AB22D41F7571C1C_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_B84F1C9E816AD9C0()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_53EC6FFE9325B737_3_METHOD_2_B84F1C9E816AD9C0_OFFSET))(this);
	}

	::System::Int32 Method_2_B84F1C9E816AD9C0_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_53EC6FFE9325B737_3_METHOD_2_B84F1C9E816AD9C0_1_OFFSET))(this);
	}

	::System::String* Method_2_2EFED33D29922FBC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_53EC6FFE9325B737_3_METHOD_2_2EFED33D29922FBC_OFFSET))(this);
	}

	::System::Int32 Method_2_96C4E0BD24A6C5C4(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_53EC6FFE9325B737_3_METHOD_2_96C4E0BD24A6C5C4_OFFSET))(this, a1);
	}

	::System::String* Method_2_2EFED33D29922FBC_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_53EC6FFE9325B737_3_METHOD_2_2EFED33D29922FBC_1_OFFSET))(this);
	}

	::System::Int32 Method_2_574A0EFDE858A687()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_53EC6FFE9325B737_3_METHOD_2_574A0EFDE858A687_OFFSET))(this);
	}

	::System::Int32 Method_2_574A0EFDE858A687_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_53EC6FFE9325B737_3_METHOD_2_574A0EFDE858A687_1_OFFSET))(this);
	}

	/*
	static ::System::Nullable_1<::Struct_2_53EC6FFE9325B737_3> Method_2_67D8B707BE896A69(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::FlatBuffers::ByteBuffer* a4, ::System::Int32& a5)
	{
		return ((::System::Nullable_1<::Struct_2_53EC6FFE9325B737_3>(*)(::System::Int32, ::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + STRUCT_2_53EC6FFE9325B737_3_METHOD_2_67D8B707BE896A69_OFFSET))(a1, a2, a3, a4, a5);
	}
	*/

	::System::Boolean Method_2_4645AB3FFA885858(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_53EC6FFE9325B737_3_METHOD_2_4645AB3FFA885858_OFFSET))(this, a1);
	}
};
