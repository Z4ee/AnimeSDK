#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/QingQueEnergyBarIconType.h"
#include "unitysdk/System/ValueType.h"

#define CLASS_2_1503B57B7D9B19EC_STRUCT_2_366FBCE4635B72E1_COMPARETO_OFFSET UNITYSDK_OFFSET(0x14E9C40)

inline static constexpr unsigned int Class_2_1503B57B7D9B19EC_Struct_2_366FBCE4635B72E1_TypeDefinitionIndex = 44264;

struct alignas(4) Class_2_1503B57B7D9B19EC_Struct_2_366FBCE4635B72E1
{
	::RPG::Client::QingQueEnergyBarIconType Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x14

	::System::Int32 CompareTo(::Class_2_1503B57B7D9B19EC_Struct_2_366FBCE4635B72E1 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_1503B57B7D9B19EC_Struct_2_366FBCE4635B72E1))((::PBYTE)hIl2Cpp + CLASS_2_1503B57B7D9B19EC_STRUCT_2_366FBCE4635B72E1_COMPARETO_OFFSET))(this, a1);
	}
};
