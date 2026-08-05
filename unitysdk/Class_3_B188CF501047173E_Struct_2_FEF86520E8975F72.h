#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class MonoCurveMoveObjectRopeHandler; }
namespace RootMotion::FinalIK { class FABRIK; }

#define CLASS_3_B188CF501047173E_STRUCT_2_FEF86520E8975F72_METHOD_2_021EB51849B836B1_OFFSET UNITYSDK_OFFSET(0x730F90)
#define CLASS_3_B188CF501047173E_STRUCT_2_FEF86520E8975F72_METHOD_2_473DCFFFC42C2E73_OFFSET UNITYSDK_OFFSET(0x730FA0)

inline static constexpr unsigned int Class_3_B188CF501047173E_Struct_2_FEF86520E8975F72_TypeDefinitionIndex = 88048;

struct alignas(8) Class_3_B188CF501047173E_Struct_2_FEF86520E8975F72
{
	::MoleMole::MonoCurveMoveObjectRopeHandler* Field_2_1; // 0x10
	::RootMotion::FinalIK::FABRIK* Field_2_0; // 0x18

	/*
	::System::Void Method_2_021EB51849B836B1(::Class_3_B188CF501047173E_Struct_2_A2B31A9A43BAF25F& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_B188CF501047173E_Struct_2_A2B31A9A43BAF25F&))((::PBYTE)hIl2Cpp + CLASS_3_B188CF501047173E_STRUCT_2_FEF86520E8975F72_METHOD_2_021EB51849B836B1_OFFSET))(this, a1);
	}
	*/

	::System::Boolean Method_2_473DCFFFC42C2E73()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B188CF501047173E_STRUCT_2_FEF86520E8975F72_METHOD_2_473DCFFFC42C2E73_OFFSET))(this);
	}
};
