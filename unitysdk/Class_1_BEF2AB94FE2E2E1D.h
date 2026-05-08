#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_5C2C676B93EF9ABA.h"
#include "unitysdk/System/Object.h"

class Class_3_01B4CC30216C9ABE_3;

#define CLASS_1_BEF2AB94FE2E2E1D_METHOD_1_E33BEAD2DF8FB1EC_OFFSET UNITYSDK_OFFSET(0x1ABFD180)
#define CLASS_1_BEF2AB94FE2E2E1D__CTOR_OFFSET UNITYSDK_OFFSET(0x1ABFD170)

inline static constexpr unsigned int Class_1_BEF2AB94FE2E2E1D_TypeDefinitionIndex = 83461;

class Class_1_BEF2AB94FE2E2E1D : public ::System::Object
{
public:
	::System::Int32 Field_1_0; // 0x10
	::System::Int32 Field_1_2; // 0x14
	::Enum_3_5C2C676B93EF9ABA Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BEF2AB94FE2E2E1D__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_E33BEAD2DF8FB1EC(::Class_3_01B4CC30216C9ABE_3* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_01B4CC30216C9ABE_3*))((::PBYTE)hIl2Cpp + CLASS_1_BEF2AB94FE2E2E1D_METHOD_1_E33BEAD2DF8FB1EC_OFFSET))(this, a1);
	}
};
