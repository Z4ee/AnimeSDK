#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_147B0F73594951F8;
class Class_1_2003DC478E096D9F_Class_1_B14FCD15EF526C02;
class Class_1_B26E06FC40F846CD_2;

#define CLASS_1_2003DC478E096D9F___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB0CD760)
#define CLASS_1_2003DC478E096D9F___C__DISPLAYCLASS7_0___SENDNORMALENDMATCHASYNC_B__0_OFFSET UNITYSDK_OFFSET(0xB0CD980)

inline static constexpr unsigned int Class_1_2003DC478E096D9F___c__DisplayClass7_0_TypeDefinitionIndex = 81855;

class Class_1_2003DC478E096D9F___c__DisplayClass7_0 : public ::System::Object
{
public:
	::Class_1_2003DC478E096D9F_Class_1_B14FCD15EF526C02* requestData; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2003DC478E096D9F___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
	}

	::Class_1_B26E06FC40F846CD_2* __SendNormalEndMatchAsync_b__0(::Class_1_147B0F73594951F8* a1)
	{
		return ((::Class_1_B26E06FC40F846CD_2*(*)(::PVOID, ::Class_1_147B0F73594951F8*))((::PBYTE)hIl2Cpp + CLASS_1_2003DC478E096D9F___C__DISPLAYCLASS7_0___SENDNORMALENDMATCHASYNC_B__0_OFFSET))(this, a1);
	}
};
