#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define STRUCT_2_3E75877A2888D88A_652_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x31CCF0)
#define STRUCT_2_3E75877A2888D88A_652_METHOD_2_2AB22D41F7571C1C_OFFSET UNITYSDK_OFFSET(0x77DEF0)
#define STRUCT_2_3E75877A2888D88A_652_METHOD_2_3FB7760ADA66821B_OFFSET UNITYSDK_OFFSET(0x198E4EA0)
#define STRUCT_2_3E75877A2888D88A_652_METHOD_2_B84F1C9E816AD9C0_1_OFFSET UNITYSDK_OFFSET(0x77DC60)
#define STRUCT_2_3E75877A2888D88A_652_METHOD_2_B84F1C9E816AD9C0_OFFSET UNITYSDK_OFFSET(0x77E150)
#define STRUCT_2_3E75877A2888D88A_652___INIT_OFFSET UNITYSDK_OFFSET(0x77DC50)

inline static constexpr unsigned int Struct_2_3E75877A2888D88A_652_TypeDefinitionIndex = 14106;

struct alignas(8) Struct_2_3E75877A2888D88A_652
{
	::FlatBuffers::Table Field_2_0; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_3E75877A2888D88A_652_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 a1, ::FlatBuffers::ByteBuffer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_3E75877A2888D88A_652___INIT_OFFSET))(this, a1, a2);
	}

	::Struct_2_3E75877A2888D88A_652 Method_2_2AB22D41F7571C1C(::System::Int32 a1, ::FlatBuffers::ByteBuffer* a2)
	{
		return ((::Struct_2_3E75877A2888D88A_652(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_3E75877A2888D88A_652_METHOD_2_2AB22D41F7571C1C_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_B84F1C9E816AD9C0()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_3E75877A2888D88A_652_METHOD_2_B84F1C9E816AD9C0_OFFSET))(this);
	}

	::System::Int32 Method_2_B84F1C9E816AD9C0_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_3E75877A2888D88A_652_METHOD_2_B84F1C9E816AD9C0_1_OFFSET))(this);
	}

	/*
	static ::System::Nullable_1<::Struct_2_3E75877A2888D88A_652> Method_2_3FB7760ADA66821B(::System::Int32 a1, ::System::Int32 a2, ::FlatBuffers::ByteBuffer* a3, ::System::Int32& a4)
	{
		return ((::System::Nullable_1<::Struct_2_3E75877A2888D88A_652>(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + STRUCT_2_3E75877A2888D88A_652_METHOD_2_3FB7760ADA66821B_OFFSET))(a1, a2, a3, a4);
	}
	*/
};
