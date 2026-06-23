#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define STRUCT_2_3E75877A2888D88A_748_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2A99F0)
#define STRUCT_2_3E75877A2888D88A_748_METHOD_2_2AB22D41F7571C1C_OFFSET UNITYSDK_OFFSET(0x7A5740)
#define STRUCT_2_3E75877A2888D88A_748_METHOD_2_2EFED33D29922FBC_OFFSET UNITYSDK_OFFSET(0x7A83B0)
#define STRUCT_2_3E75877A2888D88A_748_METHOD_2_3FB7760ADA66821B_OFFSET UNITYSDK_OFFSET(0x18CD4D30)
#define STRUCT_2_3E75877A2888D88A_748_METHOD_2_574A0EFDE858A687_OFFSET UNITYSDK_OFFSET(0x7A6130)
#define STRUCT_2_3E75877A2888D88A_748_METHOD_2_96C4E0BD24A6C5C4_OFFSET UNITYSDK_OFFSET(0x7A6190)
#define STRUCT_2_3E75877A2888D88A_748_METHOD_2_9F84D1FF74319152_1_OFFSET UNITYSDK_OFFSET(0x7EC950)
#define STRUCT_2_3E75877A2888D88A_748_METHOD_2_9F84D1FF74319152_OFFSET UNITYSDK_OFFSET(0x7E2430)
#define STRUCT_2_3E75877A2888D88A_748_METHOD_2_B84F1C9E816AD9C0_OFFSET UNITYSDK_OFFSET(0x7A55E0)
#define STRUCT_2_3E75877A2888D88A_748___INIT_OFFSET UNITYSDK_OFFSET(0x7A55D0)

inline static constexpr unsigned int Struct_2_3E75877A2888D88A_748_TypeDefinitionIndex = 17016;

struct alignas(8) Struct_2_3E75877A2888D88A_748
{
	::FlatBuffers::Table Field_2_0; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_3E75877A2888D88A_748_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 a1, ::FlatBuffers::ByteBuffer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_3E75877A2888D88A_748___INIT_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_9F84D1FF74319152()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_3E75877A2888D88A_748_METHOD_2_9F84D1FF74319152_OFFSET))(this);
	}

	::System::Int32 Method_2_574A0EFDE858A687()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_3E75877A2888D88A_748_METHOD_2_574A0EFDE858A687_OFFSET))(this);
	}

	::System::Int32 Method_2_B84F1C9E816AD9C0()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_3E75877A2888D88A_748_METHOD_2_B84F1C9E816AD9C0_OFFSET))(this);
	}

	/*
	static ::System::Nullable_1<::Struct_2_3E75877A2888D88A_748> Method_2_3FB7760ADA66821B(::System::Int32 a1, ::System::Int32 a2, ::FlatBuffers::ByteBuffer* a3, ::System::Int32& a4)
	{
		return ((::System::Nullable_1<::Struct_2_3E75877A2888D88A_748>(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + STRUCT_2_3E75877A2888D88A_748_METHOD_2_3FB7760ADA66821B_OFFSET))(a1, a2, a3, a4);
	}
	*/

	::System::String* Method_2_2EFED33D29922FBC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_3E75877A2888D88A_748_METHOD_2_2EFED33D29922FBC_OFFSET))(this);
	}

	::System::Boolean Method_2_9F84D1FF74319152_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_3E75877A2888D88A_748_METHOD_2_9F84D1FF74319152_1_OFFSET))(this);
	}

	::Struct_2_3E75877A2888D88A_748 Method_2_2AB22D41F7571C1C(::System::Int32 a1, ::FlatBuffers::ByteBuffer* a2)
	{
		return ((::Struct_2_3E75877A2888D88A_748(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_3E75877A2888D88A_748_METHOD_2_2AB22D41F7571C1C_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_96C4E0BD24A6C5C4(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_3E75877A2888D88A_748_METHOD_2_96C4E0BD24A6C5C4_OFFSET))(this, a1);
	}
};
