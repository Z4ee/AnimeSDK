#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_66C20D6C355B068E_2;
class Class_1_C50F5982E5600913;

#define CLASS_1_4AB01E8FEDBFD1EC___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBBAC70)
#define CLASS_1_4AB01E8FEDBFD1EC___C__DISPLAYCLASS11_0___FILLDEFAULTCOOPBOSSPLAYERTEAM_B__0_OFFSET UNITYSDK_OFFSET(0x1CBDD300)

inline static constexpr unsigned int Class_1_4AB01E8FEDBFD1EC___c__DisplayClass11_0_TypeDefinitionIndex = 43073;

class Class_1_4AB01E8FEDBFD1EC___c__DisplayClass11_0 : public ::System::Object
{
public:
	::Class_1_66C20D6C355B068E_2* slot; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __FillDefaultCoopBossPlayerTeam_b__0(::Class_1_C50F5982E5600913* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C50F5982E5600913*))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC___C__DISPLAYCLASS11_0___FILLDEFAULTCOOPBOSSPLAYERTEAM_B__0_OFFSET))(this, a1);
	}
};
