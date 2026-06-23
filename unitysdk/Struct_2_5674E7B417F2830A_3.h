#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_5674E7B417F2830A_3_METHOD_2_C74CF020AA42ED85_1_OFFSET UNITYSDK_OFFSET(0x2B68B0)
#define STRUCT_2_5674E7B417F2830A_3_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x3EA3D0)
#define STRUCT_2_5674E7B417F2830A_3__CTOR_OFFSET UNITYSDK_OFFSET(0x2AB920)

inline static constexpr unsigned int Struct_2_5674E7B417F2830A_3_TypeDefinitionIndex = 89571;

struct alignas(4) Struct_2_5674E7B417F2830A_3
{
	::System::Int32 Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x14

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_5674E7B417F2830A_3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_5674E7B417F2830A_3_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Int32 Method_2_C74CF020AA42ED85_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_5674E7B417F2830A_3_METHOD_2_C74CF020AA42ED85_1_OFFSET))(this);
	}
};
