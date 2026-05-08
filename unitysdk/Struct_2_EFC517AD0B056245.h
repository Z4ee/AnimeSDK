#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Vehicle { class VehicleConfig; }

#define STRUCT_2_EFC517AD0B056245_METHOD_2_5323F2DF46A044DA_1_OFFSET UNITYSDK_OFFSET(0x3AB430)
#define STRUCT_2_EFC517AD0B056245_METHOD_2_5323F2DF46A044DA_2_OFFSET UNITYSDK_OFFSET(0x3AA590)
#define STRUCT_2_EFC517AD0B056245_METHOD_2_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x2E7F50)
#define STRUCT_2_EFC517AD0B056245_METHOD_2_AEFCC100FA014813_OFFSET UNITYSDK_OFFSET(0x776F80)

inline static constexpr unsigned int Struct_2_EFC517AD0B056245_TypeDefinitionIndex = 54350;

struct alignas(4) Struct_2_EFC517AD0B056245
{
	::System::Single Field_2_0; // 0x10
	::System::Single Field_2_1; // 0x14
	::System::Single Field_2_2; // 0x18
	::System::Single Field_2_3; // 0x1C
	::System::Single Field_2_4; // 0x20

	/*
	::System::Single Method_2_AEFCC100FA014813(::MoleMole::Vehicle::VehicleConfig* a1, ::Struct_2_BA49C0837CB7956A& a2, ::Struct_2_BA76FAC59DBCB80D& a3, ::System::Single a4, ::System::Single a5, ::System::Single a6)
	{
		return ((::System::Single(*)(::PVOID, ::MoleMole::Vehicle::VehicleConfig*, ::Struct_2_BA49C0837CB7956A&, ::Struct_2_BA76FAC59DBCB80D&, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_EFC517AD0B056245_METHOD_2_AEFCC100FA014813_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}
	*/

	::System::Single Method_2_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_EFC517AD0B056245_METHOD_2_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Single Method_2_5323F2DF46A044DA_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_EFC517AD0B056245_METHOD_2_5323F2DF46A044DA_1_OFFSET))(this);
	}

	::System::Single Method_2_5323F2DF46A044DA_2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_EFC517AD0B056245_METHOD_2_5323F2DF46A044DA_2_OFFSET))(this);
	}
};
