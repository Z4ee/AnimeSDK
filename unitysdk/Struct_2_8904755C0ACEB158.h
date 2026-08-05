#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Vehicle { class VehicleConfig; }

#define STRUCT_2_8904755C0ACEB158_METHOD_2_5323F2DF46A044DA_1_OFFSET UNITYSDK_OFFSET(0x44EB60)
#define STRUCT_2_8904755C0ACEB158_METHOD_2_5323F2DF46A044DA_2_OFFSET UNITYSDK_OFFSET(0x3D1D70)
#define STRUCT_2_8904755C0ACEB158_METHOD_2_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x324CC0)
#define STRUCT_2_8904755C0ACEB158_METHOD_2_6581CE1EA414465C_OFFSET UNITYSDK_OFFSET(0x85E5E0)

inline static constexpr unsigned int Struct_2_8904755C0ACEB158_TypeDefinitionIndex = 75766;

struct alignas(4) Struct_2_8904755C0ACEB158
{
	::System::Single Field_2_2; // 0x10
	::System::Single Field_2_1; // 0x14
	::System::Single Field_2_0; // 0x18
	::System::Single Field_2_7; // 0x1C
	::System::Single Field_2_6; // 0x20

	::System::Single Method_2_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_8904755C0ACEB158_METHOD_2_5323F2DF46A044DA_OFFSET))(this);
	}

	/*
	::System::Single Method_2_6581CE1EA414465C(::MoleMole::Vehicle::VehicleConfig* a1, ::Struct_2_BA49C0837CB7956A& a2, ::Struct_2_BA76FAC59DBCB80D& a3, ::System::Single a4, ::System::Single a5, ::System::Single a6)
	{
		return ((::System::Single(*)(::PVOID, ::MoleMole::Vehicle::VehicleConfig*, ::Struct_2_BA49C0837CB7956A&, ::Struct_2_BA76FAC59DBCB80D&, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_8904755C0ACEB158_METHOD_2_6581CE1EA414465C_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}
	*/

	::System::Single Method_2_5323F2DF46A044DA_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_8904755C0ACEB158_METHOD_2_5323F2DF46A044DA_1_OFFSET))(this);
	}

	::System::Single Method_2_5323F2DF46A044DA_2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_8904755C0ACEB158_METHOD_2_5323F2DF46A044DA_2_OFFSET))(this);
	}
};
