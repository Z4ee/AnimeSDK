#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define STRUCT_2_58DF5669875F2C66_106_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x28B580)
#define STRUCT_2_58DF5669875F2C66_106_METHOD_2_2AB22D41F7571C1C_OFFSET UNITYSDK_OFFSET(0x726A90)
#define STRUCT_2_58DF5669875F2C66_106_METHOD_2_574A0EFDE858A687_OFFSET UNITYSDK_OFFSET(0x72BE70)
#define STRUCT_2_58DF5669875F2C66_106_METHOD_2_96C4E0BD24A6C5C4_OFFSET UNITYSDK_OFFSET(0x72BE00)
#define STRUCT_2_58DF5669875F2C66_106_METHOD_2_B84F1C9E816AD9C0_OFFSET UNITYSDK_OFFSET(0x726AC0)
#define STRUCT_2_58DF5669875F2C66_106___INIT_OFFSET UNITYSDK_OFFSET(0x726A30)

inline static constexpr unsigned int Struct_2_58DF5669875F2C66_106_TypeDefinitionIndex = 14212;

struct alignas(8) Struct_2_58DF5669875F2C66_106
{
	::FlatBuffers::Table Field_2_0; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_58DF5669875F2C66_106_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 a1, ::FlatBuffers::ByteBuffer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_58DF5669875F2C66_106___INIT_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_B84F1C9E816AD9C0()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_58DF5669875F2C66_106_METHOD_2_B84F1C9E816AD9C0_OFFSET))(this);
	}

	::System::Int32 Method_2_96C4E0BD24A6C5C4(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_58DF5669875F2C66_106_METHOD_2_96C4E0BD24A6C5C4_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_574A0EFDE858A687()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_58DF5669875F2C66_106_METHOD_2_574A0EFDE858A687_OFFSET))(this);
	}

	::Struct_2_58DF5669875F2C66_106 Method_2_2AB22D41F7571C1C(::System::Int32 a1, ::FlatBuffers::ByteBuffer* a2)
	{
		return ((::Struct_2_58DF5669875F2C66_106(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_58DF5669875F2C66_106_METHOD_2_2AB22D41F7571C1C_OFFSET))(this, a1, a2);
	}
};
