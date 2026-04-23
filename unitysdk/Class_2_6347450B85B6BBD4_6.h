#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7ACCB923E979A908.h"

class Class_1_D811CE24096BDBCA_2;
namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameContext; }

#define CLASS_2_6347450B85B6BBD4_6_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x9073F20)
#define CLASS_2_6347450B85B6BBD4_6__CTOR_OFFSET UNITYSDK_OFFSET(0x90740C0)
#define CLASS_2_6347450B85B6BBD4_6___IFIXBASEPROXY_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x90740D0)

inline static constexpr unsigned int Class_2_6347450B85B6BBD4_6_TypeDefinitionIndex = 70017;

class Class_2_6347450B85B6BBD4_6 : public ::Class_1_7ACCB923E979A908
{
public:
	::Class_1_D811CE24096BDBCA_2* Field_2_1; // 0x20
	::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* Field_2_0; // 0x28

	::System::Void _ctor(::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* a1, ::Class_1_D811CE24096BDBCA_2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::ChenLingBattleGameContext*, ::Class_1_D811CE24096BDBCA_2*))((::PBYTE)hIl2Cpp + CLASS_2_6347450B85B6BBD4_6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6347450B85B6BBD4_6_ONEXECUTE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6347450B85B6BBD4_6___IFIXBASEPROXY_ONEXECUTE_OFFSET))(this);
	}
};
