#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define STRUCT_2_58DF5669875F2C66_333_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x31CCF0)
#define STRUCT_2_58DF5669875F2C66_333_METHOD_2_2AB22D41F7571C1C_OFFSET UNITYSDK_OFFSET(0x77DEF0)
#define STRUCT_2_58DF5669875F2C66_333_METHOD_2_B84F1C9E816AD9C0_1_OFFSET UNITYSDK_OFFSET(0x77DC60)
#define STRUCT_2_58DF5669875F2C66_333_METHOD_2_B84F1C9E816AD9C0_OFFSET UNITYSDK_OFFSET(0x77E150)
#define STRUCT_2_58DF5669875F2C66_333___INIT_OFFSET UNITYSDK_OFFSET(0x77DC50)

inline static constexpr unsigned int Struct_2_58DF5669875F2C66_333_TypeDefinitionIndex = 16023;

struct alignas(8) Struct_2_58DF5669875F2C66_333
{
	::FlatBuffers::Table Field_2_0; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_58DF5669875F2C66_333_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 a1, ::FlatBuffers::ByteBuffer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_58DF5669875F2C66_333___INIT_OFFSET))(this, a1, a2);
	}

	::Struct_2_58DF5669875F2C66_333 Method_2_2AB22D41F7571C1C(::System::Int32 a1, ::FlatBuffers::ByteBuffer* a2)
	{
		return ((::Struct_2_58DF5669875F2C66_333(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_58DF5669875F2C66_333_METHOD_2_2AB22D41F7571C1C_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_B84F1C9E816AD9C0()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_58DF5669875F2C66_333_METHOD_2_B84F1C9E816AD9C0_OFFSET))(this);
	}

	::System::Int32 Method_2_B84F1C9E816AD9C0_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_58DF5669875F2C66_333_METHOD_2_B84F1C9E816AD9C0_1_OFFSET))(this);
	}
};
