#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0AB2FF33AF7EB6FE.h"
#include "unitysdk/MoleMole/DisplayCase/DisplayBaseTransformData.h"
#include "unitysdk/System/Object.h"

class Class_1_38EE0169AA9CE03E;
class Class_1_699787DEDB234668;

#define CLASS_1_A6626BB27A1AA876_METHOD_1_097468641FDED14E_1_OFFSET UNITYSDK_OFFSET(0x1020BA00)
#define CLASS_1_A6626BB27A1AA876_METHOD_1_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0x1020B970)
#define CLASS_1_A6626BB27A1AA876_METHOD_1_F86E3F6E3E2B1642_OFFSET UNITYSDK_OFFSET(0x1020BA90)
#define CLASS_1_A6626BB27A1AA876__CTOR_OFFSET UNITYSDK_OFFSET(0x1020BB40)

inline static constexpr unsigned int Class_1_A6626BB27A1AA876_TypeDefinitionIndex = 63382;

class Class_1_A6626BB27A1AA876 : public ::System::Object
{
public:
	::Class_1_699787DEDB234668* Field_1_0; // 0x10
	::MoleMole::DisplayCase::DisplayBaseTransformData Field_1_1; // 0x18
	::Enum_3_0AB2FF33AF7EB6FE Field_1_2; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A6626BB27A1AA876__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_097468641FDED14E(::Class_1_38EE0169AA9CE03E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_38EE0169AA9CE03E*))((::PBYTE)hIl2Cpp + CLASS_1_A6626BB27A1AA876_METHOD_1_097468641FDED14E_OFFSET))(this, a1);
	}

	::System::Void Method_1_097468641FDED14E_1(::Class_1_38EE0169AA9CE03E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_38EE0169AA9CE03E*))((::PBYTE)hIl2Cpp + CLASS_1_A6626BB27A1AA876_METHOD_1_097468641FDED14E_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F86E3F6E3E2B1642(::Class_1_38EE0169AA9CE03E* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_38EE0169AA9CE03E*))((::PBYTE)hIl2Cpp + CLASS_1_A6626BB27A1AA876_METHOD_1_F86E3F6E3E2B1642_OFFSET))(this, a1);
	}
};
