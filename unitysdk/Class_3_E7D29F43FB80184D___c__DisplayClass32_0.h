#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_36;
class Class_2_465A9E6CC2B0EF21;

#define CLASS_3_E7D29F43FB80184D___C__DISPLAYCLASS32_0__CTOR_OFFSET UNITYSDK_OFFSET(0x150735A0)
#define CLASS_3_E7D29F43FB80184D___C__DISPLAYCLASS32_0___ONSPAWNBRICKENTITY_B__0_OFFSET UNITYSDK_OFFSET(0x1507A420)

inline static constexpr unsigned int Class_3_E7D29F43FB80184D___c__DisplayClass32_0_TypeDefinitionIndex = 75133;

class Class_3_E7D29F43FB80184D___c__DisplayClass32_0 : public ::System::Object
{
public:
	::Class_2_465A9E6CC2B0EF21* teamTowersEntity; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E7D29F43FB80184D___C__DISPLAYCLASS32_0__CTOR_OFFSET))(this);
	}

	::System::Int32 __OnSpawnBrickEntity_b__0(::Class_0_16E4307DCC419505_36* a1, ::System::Single a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_0_16E4307DCC419505_36*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_E7D29F43FB80184D___C__DISPLAYCLASS32_0___ONSPAWNBRICKENTITY_B__0_OFFSET))(this, a1, a2);
	}
};
