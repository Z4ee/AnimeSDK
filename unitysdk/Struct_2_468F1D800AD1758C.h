#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_468F1D800AD1758C_METHOD_2_7ADD5F1F5E247E3B_1_OFFSET UNITYSDK_OFFSET(0x14410)
#define STRUCT_2_468F1D800AD1758C_METHOD_2_7ADD5F1F5E247E3B_OFFSET UNITYSDK_OFFSET(0x60D0)
#define STRUCT_2_468F1D800AD1758C_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x5FB0)
#define STRUCT_2_468F1D800AD1758C_METHOD_2_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x384B420)
#define STRUCT_2_468F1D800AD1758C__CTOR_OFFSET UNITYSDK_OFFSET(0x384B410)

inline static constexpr unsigned int Struct_2_468F1D800AD1758C_TypeDefinitionIndex = 40437;

struct alignas(8) Struct_2_468F1D800AD1758C
{
	::System::Int32 Field_2_0; // 0x10
	::System::Int64 Field_2_1; // 0x18
	::System::Int64 Field_2_2; // 0x20

	::System::Void _ctor(::System::Int64 a1, ::System::Int64 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::Int64, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_468F1D800AD1758C__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_CE34EA208837238D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_468F1D800AD1758C_METHOD_2_CE34EA208837238D_OFFSET))(this);
	}

	::System::Int64 Method_2_7ADD5F1F5E247E3B()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_468F1D800AD1758C_METHOD_2_7ADD5F1F5E247E3B_OFFSET))(this);
	}

	::System::Int64 Method_2_7ADD5F1F5E247E3B_1()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_468F1D800AD1758C_METHOD_2_7ADD5F1F5E247E3B_1_OFFSET))(this);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_468F1D800AD1758C_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}
};
