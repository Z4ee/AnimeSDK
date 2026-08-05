#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define STRUCT_2_3E75877A2888D88A_223_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x31CCF0)
#define STRUCT_2_3E75877A2888D88A_223_METHOD_2_2AB22D41F7571C1C_OFFSET UNITYSDK_OFFSET(0x77DEF0)
#define STRUCT_2_3E75877A2888D88A_223_METHOD_2_3FB7760ADA66821B_OFFSET UNITYSDK_OFFSET(0x1AFE1630)
#define STRUCT_2_3E75877A2888D88A_223_METHOD_2_574A0EFDE858A687_OFFSET UNITYSDK_OFFSET(0x77E0D0)
#define STRUCT_2_3E75877A2888D88A_223_METHOD_2_96C4E0BD24A6C5C4_OFFSET UNITYSDK_OFFSET(0x77E060)
#define STRUCT_2_3E75877A2888D88A_223_METHOD_2_B84F1C9E816AD9C0_OFFSET UNITYSDK_OFFSET(0x77DC60)
#define STRUCT_2_3E75877A2888D88A_223___INIT_OFFSET UNITYSDK_OFFSET(0x77DC50)

inline static constexpr unsigned int Struct_2_3E75877A2888D88A_223_TypeDefinitionIndex = 9503;

struct alignas(8) Struct_2_3E75877A2888D88A_223
{
	::FlatBuffers::Table Field_2_0; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_3E75877A2888D88A_223_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 a1, ::FlatBuffers::ByteBuffer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_3E75877A2888D88A_223___INIT_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_574A0EFDE858A687()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_3E75877A2888D88A_223_METHOD_2_574A0EFDE858A687_OFFSET))(this);
	}

	::System::Int32 Method_2_96C4E0BD24A6C5C4(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_3E75877A2888D88A_223_METHOD_2_96C4E0BD24A6C5C4_OFFSET))(this, a1);
	}

	::Struct_2_3E75877A2888D88A_223 Method_2_2AB22D41F7571C1C(::System::Int32 a1, ::FlatBuffers::ByteBuffer* a2)
	{
		return ((::Struct_2_3E75877A2888D88A_223(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_3E75877A2888D88A_223_METHOD_2_2AB22D41F7571C1C_OFFSET))(this, a1, a2);
	}

	/*
	static ::System::Nullable_1<::Struct_2_3E75877A2888D88A_223> Method_2_3FB7760ADA66821B(::System::Int32 a1, ::System::Int32 a2, ::FlatBuffers::ByteBuffer* a3, ::System::Int32& a4)
	{
		return ((::System::Nullable_1<::Struct_2_3E75877A2888D88A_223>(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + STRUCT_2_3E75877A2888D88A_223_METHOD_2_3FB7760ADA66821B_OFFSET))(a1, a2, a3, a4);
	}
	*/

	::System::Int32 Method_2_B84F1C9E816AD9C0()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_3E75877A2888D88A_223_METHOD_2_B84F1C9E816AD9C0_OFFSET))(this);
	}
};
