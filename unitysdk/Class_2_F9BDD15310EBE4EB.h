#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D379DAD8E919E749.h"
#include "unitysdk/Class_1_D379DAD8E919E749_TriggerType.h"
#include "unitysdk/RPG/Client/ActivityHipplen/ActivityHipplenEffectSource.h"

class Class_0_16E4307DCC419505_972;
class Class_1_AF32A2B0C832DB74;
namespace RPG::Client::ActivityHipplen { class ActivityHipplenEffectResultData; }

#define CLASS_2_F9BDD15310EBE4EB_METHOD_2_2A1ECCAD60FE5D2E_OFFSET UNITYSDK_OFFSET(0x109280F0)
#define CLASS_2_F9BDD15310EBE4EB_METHOD_2_4EF6C9CA8FABD29C_OFFSET UNITYSDK_OFFSET(0x10928150)
#define CLASS_2_F9BDD15310EBE4EB__CTOR_OFFSET UNITYSDK_OFFSET(0x10928140)

inline static constexpr unsigned int Class_2_F9BDD15310EBE4EB_TypeDefinitionIndex = 61629;

class Class_2_F9BDD15310EBE4EB : public ::Class_1_D379DAD8E919E749
{
public:
	::System::Void _ctor(::Class_1_AF32A2B0C832DB74* a1, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectSource a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_AF32A2B0C832DB74*, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectSource))((::PBYTE)hIl2Cpp + CLASS_2_F9BDD15310EBE4EB__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_1_D379DAD8E919E749_TriggerType Method_2_2A1ECCAD60FE5D2E()
	{
		return ((::Class_1_D379DAD8E919E749_TriggerType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F9BDD15310EBE4EB_METHOD_2_2A1ECCAD60FE5D2E_OFFSET))(this);
	}

	::System::Void Method_2_4EF6C9CA8FABD29C(::Class_0_16E4307DCC419505_972* a1, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_972*, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData*))((::PBYTE)hIl2Cpp + CLASS_2_F9BDD15310EBE4EB_METHOD_2_4EF6C9CA8FABD29C_OFFSET))(this, a1, a2);
	}
};
