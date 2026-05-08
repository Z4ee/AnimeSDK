#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define STRUCT_2_58DF5669875F2C66_136_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x28B580)
#define STRUCT_2_58DF5669875F2C66_136_METHOD_2_2AB22D41F7571C1C_OFFSET UNITYSDK_OFFSET(0x726A90)
#define STRUCT_2_58DF5669875F2C66_136_METHOD_2_37944C83B4C06687_OFFSET UNITYSDK_OFFSET(0x7270A0)
#define STRUCT_2_58DF5669875F2C66_136_METHOD_2_574A0EFDE858A687_OFFSET UNITYSDK_OFFSET(0x741D70)
#define STRUCT_2_58DF5669875F2C66_136_METHOD_2_B84F1C9E816AD9C0_OFFSET UNITYSDK_OFFSET(0x726AC0)
#define STRUCT_2_58DF5669875F2C66_136_METHOD_2_BAFD0B2DAD699DB8_OFFSET UNITYSDK_OFFSET(0x739DC0)
#define STRUCT_2_58DF5669875F2C66_136_METHOD_2_CE6837B0AC889B54_OFFSET UNITYSDK_OFFSET(0x770FB0)
#define STRUCT_2_58DF5669875F2C66_136___INIT_OFFSET UNITYSDK_OFFSET(0x726A30)

inline static constexpr unsigned int Struct_2_58DF5669875F2C66_136_TypeDefinitionIndex = 15877;

struct alignas(8) Struct_2_58DF5669875F2C66_136
{
	::FlatBuffers::Table Field_2_0; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_58DF5669875F2C66_136_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 a1, ::FlatBuffers::ByteBuffer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_58DF5669875F2C66_136___INIT_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_B84F1C9E816AD9C0()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_58DF5669875F2C66_136_METHOD_2_B84F1C9E816AD9C0_OFFSET))(this);
	}

	::System::Single Method_2_BAFD0B2DAD699DB8()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_58DF5669875F2C66_136_METHOD_2_BAFD0B2DAD699DB8_OFFSET))(this);
	}

	::System::Int32 Method_2_574A0EFDE858A687()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_58DF5669875F2C66_136_METHOD_2_574A0EFDE858A687_OFFSET))(this);
	}

	::System::Single Method_2_CE6837B0AC889B54(::System::Int32 a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_58DF5669875F2C66_136_METHOD_2_CE6837B0AC889B54_OFFSET))(this, a1);
	}

	::Struct_2_58DF5669875F2C66_136 Method_2_2AB22D41F7571C1C(::System::Int32 a1, ::FlatBuffers::ByteBuffer* a2)
	{
		return ((::Struct_2_58DF5669875F2C66_136(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_58DF5669875F2C66_136_METHOD_2_2AB22D41F7571C1C_OFFSET))(this, a1, a2);
	}

	::System::String* Method_2_37944C83B4C06687()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_58DF5669875F2C66_136_METHOD_2_37944C83B4C06687_OFFSET))(this);
	}
};
