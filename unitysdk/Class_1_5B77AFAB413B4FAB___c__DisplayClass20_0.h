#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_145;
class Class_1_D05699509194BF9B;

#define CLASS_1_5B77AFAB413B4FAB___C__DISPLAYCLASS20_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C516630)
#define CLASS_1_5B77AFAB413B4FAB___C__DISPLAYCLASS20_0___PLACECHIP_B__0_OFFSET UNITYSDK_OFFSET(0x1C517570)

inline static constexpr unsigned int Class_1_5B77AFAB413B4FAB___c__DisplayClass20_0_TypeDefinitionIndex = 41820;

class Class_1_5B77AFAB413B4FAB___c__DisplayClass20_0 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_145* placement; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B77AFAB413B4FAB___C__DISPLAYCLASS20_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __PlaceChip_b__0(::Class_1_D05699509194BF9B* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D05699509194BF9B*))((::PBYTE)hIl2Cpp + CLASS_1_5B77AFAB413B4FAB___C__DISPLAYCLASS20_0___PLACECHIP_B__0_OFFSET))(this, a1);
	}
};
