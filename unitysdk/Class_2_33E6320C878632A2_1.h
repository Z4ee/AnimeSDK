#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D379DAD8E919E749.h"
#include "unitysdk/Class_1_D379DAD8E919E749_TriggerType.h"
#include "unitysdk/RPG/Client/ActivityHipplen/ActivityHipplenEffectSource.h"

class Class_0_16E4307DCC419505_1151;
class Class_1_69DB8A72C044FA28;
namespace RPG::Client::ActivityHipplen { class ActivityHipplenEffectResultData; }

#define CLASS_2_33E6320C878632A2_1_METHOD_2_2A1ECCAD60FE5D2E_OFFSET UNITYSDK_OFFSET(0x138034C0)
#define CLASS_2_33E6320C878632A2_1_METHOD_2_9BFAEB5C59A5121D_OFFSET UNITYSDK_OFFSET(0x13803520)
#define CLASS_2_33E6320C878632A2_1__CTOR_OFFSET UNITYSDK_OFFSET(0x13803510)

inline static constexpr unsigned int Class_2_33E6320C878632A2_1_TypeDefinitionIndex = 70355;

class Class_2_33E6320C878632A2_1 : public ::Class_1_D379DAD8E919E749
{
public:
	::System::Void _ctor(::Class_1_69DB8A72C044FA28* a1, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectSource a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_69DB8A72C044FA28*, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectSource))((::PBYTE)hIl2Cpp + CLASS_2_33E6320C878632A2_1__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_1_D379DAD8E919E749_TriggerType Method_2_2A1ECCAD60FE5D2E()
	{
		return ((::Class_1_D379DAD8E919E749_TriggerType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_33E6320C878632A2_1_METHOD_2_2A1ECCAD60FE5D2E_OFFSET))(this);
	}

	::System::Void Method_2_9BFAEB5C59A5121D(::Class_0_16E4307DCC419505_1151* a1, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1151*, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData*))((::PBYTE)hIl2Cpp + CLASS_2_33E6320C878632A2_1_METHOD_2_9BFAEB5C59A5121D_OFFSET))(this, a1, a2);
	}
};
