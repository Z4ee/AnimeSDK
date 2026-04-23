#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D379DAD8E919E749.h"
#include "unitysdk/Class_1_D379DAD8E919E749_TriggerType.h"
#include "unitysdk/RPG/Client/ActivityHipplen/ActivityHipplenEffectSource.h"

class Class_0_16E4307DCC419505_1101;
class Class_1_BAA2B2ED8E9FC46C;
namespace RPG::Client::ActivityHipplen { class ActivityHipplenEffectResultData; }

#define CLASS_2_F9BDD15310EBE4EB_METHOD_2_2A1ECCAD60FE5D2E_OFFSET UNITYSDK_OFFSET(0x98BDD60)
#define CLASS_2_F9BDD15310EBE4EB_METHOD_2_4EF6C9CA8FABD29C_OFFSET UNITYSDK_OFFSET(0x98BDDC0)
#define CLASS_2_F9BDD15310EBE4EB__CTOR_OFFSET UNITYSDK_OFFSET(0x98BDDB0)

inline static constexpr unsigned int Class_2_F9BDD15310EBE4EB_TypeDefinitionIndex = 69539;

class Class_2_F9BDD15310EBE4EB : public ::Class_1_D379DAD8E919E749
{
public:
	::System::Void _ctor(::Class_1_BAA2B2ED8E9FC46C* a1, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectSource a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BAA2B2ED8E9FC46C*, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectSource))((::PBYTE)hIl2Cpp + CLASS_2_F9BDD15310EBE4EB__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_1_D379DAD8E919E749_TriggerType Method_2_2A1ECCAD60FE5D2E()
	{
		return ((::Class_1_D379DAD8E919E749_TriggerType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F9BDD15310EBE4EB_METHOD_2_2A1ECCAD60FE5D2E_OFFSET))(this);
	}

	::System::Void Method_2_4EF6C9CA8FABD29C(::Class_0_16E4307DCC419505_1101* a1, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1101*, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData*))((::PBYTE)hIl2Cpp + CLASS_2_F9BDD15310EBE4EB_METHOD_2_4EF6C9CA8FABD29C_OFFSET))(this, a1, a2);
	}
};
