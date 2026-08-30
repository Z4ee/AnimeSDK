#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define CLASS_1_6EF502A68D7F2109_STRUCT_2_4744775377A1F7D1_COMPARETO_OFFSET UNITYSDK_OFFSET(0x3AA8320)
#define CLASS_1_6EF502A68D7F2109_STRUCT_2_4744775377A1F7D1__CTOR_OFFSET UNITYSDK_OFFSET(0x3AA8310)

inline static constexpr unsigned int Class_1_6EF502A68D7F2109_Struct_2_4744775377A1F7D1_TypeDefinitionIndex = 69257;

struct alignas(8) Class_1_6EF502A68D7F2109_Struct_2_4744775377A1F7D1
{
	::System::Int32 MBNLJEMMPNC; // 0x10
	::System::Int32 HCDEOKNIGKG; // 0x14
	::System::UInt64 NNINFPDDEBE; // 0x18

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::UInt64 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_6EF502A68D7F2109_STRUCT_2_4744775377A1F7D1__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 CompareTo(::Class_1_6EF502A68D7F2109_Struct_2_4744775377A1F7D1 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_6EF502A68D7F2109_Struct_2_4744775377A1F7D1))((::PBYTE)hIl2Cpp + CLASS_1_6EF502A68D7F2109_STRUCT_2_4744775377A1F7D1_COMPARETO_OFFSET))(this, a1);
	}
};
