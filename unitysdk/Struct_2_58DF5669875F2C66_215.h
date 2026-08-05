#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define STRUCT_2_58DF5669875F2C66_215_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x31CCF0)
#define STRUCT_2_58DF5669875F2C66_215_METHOD_2_2AB22D41F7571C1C_OFFSET UNITYSDK_OFFSET(0x77DEF0)
#define STRUCT_2_58DF5669875F2C66_215_METHOD_2_4CDE2E1382E8C4EB_OFFSET UNITYSDK_OFFSET(0x18F91D90)
#define STRUCT_2_58DF5669875F2C66_215_METHOD_2_8F54C68DC21A03C7_OFFSET UNITYSDK_OFFSET(0x18F91D50)
#define STRUCT_2_58DF5669875F2C66_215_METHOD_2_B84F1C9E816AD9C0_OFFSET UNITYSDK_OFFSET(0x7811D0)
#define STRUCT_2_58DF5669875F2C66_215___INIT_OFFSET UNITYSDK_OFFSET(0x77DC50)

inline static constexpr unsigned int Struct_2_58DF5669875F2C66_215_TypeDefinitionIndex = 15631;

struct alignas(8) Struct_2_58DF5669875F2C66_215
{
	::FlatBuffers::Table Field_2_0; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_58DF5669875F2C66_215_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 a1, ::FlatBuffers::ByteBuffer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_58DF5669875F2C66_215___INIT_OFFSET))(this, a1, a2);
	}

	static ::Struct_2_58DF5669875F2C66_215 Method_2_8F54C68DC21A03C7(::FlatBuffers::ByteBuffer* a1)
	{
		return ((::Struct_2_58DF5669875F2C66_215(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_58DF5669875F2C66_215_METHOD_2_8F54C68DC21A03C7_OFFSET))(a1);
	}

	::Struct_2_58DF5669875F2C66_215 Method_2_2AB22D41F7571C1C(::System::Int32 a1, ::FlatBuffers::ByteBuffer* a2)
	{
		return ((::Struct_2_58DF5669875F2C66_215(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_58DF5669875F2C66_215_METHOD_2_2AB22D41F7571C1C_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_B84F1C9E816AD9C0()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_58DF5669875F2C66_215_METHOD_2_B84F1C9E816AD9C0_OFFSET))(this);
	}

	static ::Struct_2_58DF5669875F2C66_215 Method_2_4CDE2E1382E8C4EB(::FlatBuffers::ByteBuffer* a1, ::Struct_2_58DF5669875F2C66_215 a2)
	{
		return ((::Struct_2_58DF5669875F2C66_215(*)(::FlatBuffers::ByteBuffer*, ::Struct_2_58DF5669875F2C66_215))((::PBYTE)hIl2Cpp + STRUCT_2_58DF5669875F2C66_215_METHOD_2_4CDE2E1382E8C4EB_OFFSET))(a1, a2);
	}
};
