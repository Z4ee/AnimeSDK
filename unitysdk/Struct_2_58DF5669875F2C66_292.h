#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define STRUCT_2_58DF5669875F2C66_292_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2A99F0)
#define STRUCT_2_58DF5669875F2C66_292_METHOD_2_574A0EFDE858A687_OFFSET UNITYSDK_OFFSET(0x7A9260)
#define STRUCT_2_58DF5669875F2C66_292_METHOD_2_96C4E0BD24A6C5C4_OFFSET UNITYSDK_OFFSET(0x7B8E30)
#define STRUCT_2_58DF5669875F2C66_292___INIT_OFFSET UNITYSDK_OFFSET(0x7A55D0)

inline static constexpr unsigned int Struct_2_58DF5669875F2C66_292_TypeDefinitionIndex = 12811;

struct alignas(8) Struct_2_58DF5669875F2C66_292
{
	::FlatBuffers::Table Field_2_0; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_58DF5669875F2C66_292_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 a1, ::FlatBuffers::ByteBuffer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_58DF5669875F2C66_292___INIT_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_96C4E0BD24A6C5C4(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_58DF5669875F2C66_292_METHOD_2_96C4E0BD24A6C5C4_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_574A0EFDE858A687()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_58DF5669875F2C66_292_METHOD_2_574A0EFDE858A687_OFFSET))(this);
	}
};
