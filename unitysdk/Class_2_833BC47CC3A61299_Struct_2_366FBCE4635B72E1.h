#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/QingQueEnergyBarIconType.h"
#include "unitysdk/System/ValueType.h"

#define CLASS_2_833BC47CC3A61299_STRUCT_2_366FBCE4635B72E1_COMPARETO_OFFSET UNITYSDK_OFFSET(0x3AA8D90)

inline static constexpr unsigned int Class_2_833BC47CC3A61299_Struct_2_366FBCE4635B72E1_TypeDefinitionIndex = 55494;

struct alignas(4) Class_2_833BC47CC3A61299_Struct_2_366FBCE4635B72E1
{
	::RPG::Client::QingQueEnergyBarIconType MJPKBIGCFOM; // 0x10
	::System::Int32 HCDEOKNIGKG; // 0x14

	::System::Int32 CompareTo(::Class_2_833BC47CC3A61299_Struct_2_366FBCE4635B72E1 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_833BC47CC3A61299_Struct_2_366FBCE4635B72E1))((::PBYTE)hIl2Cpp + CLASS_2_833BC47CC3A61299_STRUCT_2_366FBCE4635B72E1_COMPARETO_OFFSET))(this, a1);
	}
};
