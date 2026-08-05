#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8675022DCD7A69F6_Struct_2_680BF1744D60EED9_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class VehicleSplinePath; }

#define STRUCT_2_CD2E1A9CC3537EBD_METHOD_2_B128C90853E23A16_OFFSET UNITYSDK_OFFSET(0x70E4A0)
#define STRUCT_2_CD2E1A9CC3537EBD_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x70E430)

inline static constexpr unsigned int Struct_2_CD2E1A9CC3537EBD_TypeDefinitionIndex = 83278;

struct alignas(8) Struct_2_CD2E1A9CC3537EBD
{
	::MoleMole::VehicleSplinePath* Field_2_3; // 0x10
	::Class_1_8675022DCD7A69F6_Struct_2_680BF1744D60EED9_1 Field_2_2; // 0x18
	::UnityEngine::Vector3 Field_2_1; // 0x20
	::UnityEngine::Vector3 Field_2_0; // 0x2C
	::System::Single Field_2_7; // 0x38
	::System::Single Field_2_6; // 0x3C

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CD2E1A9CC3537EBD_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_2_B128C90853E23A16()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CD2E1A9CC3537EBD_METHOD_2_B128C90853E23A16_OFFSET))(this);
	}
};
