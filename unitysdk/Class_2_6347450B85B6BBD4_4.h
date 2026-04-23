#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7ACCB923E979A908.h"

class Class_1_D811CE24096BDBCA_2;
namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameContext; }

#define CLASS_2_6347450B85B6BBD4_4_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x9026C30)
#define CLASS_2_6347450B85B6BBD4_4__CTOR_OFFSET UNITYSDK_OFFSET(0x9026F80)
#define CLASS_2_6347450B85B6BBD4_4__ONEXECUTE_B__0_0_OFFSET UNITYSDK_OFFSET(0x9026F90)
#define CLASS_2_6347450B85B6BBD4_4___IFIXBASEPROXY_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x9026FA0)

inline static constexpr unsigned int Class_2_6347450B85B6BBD4_4_TypeDefinitionIndex = 70014;

class Class_2_6347450B85B6BBD4_4 : public ::Class_1_7ACCB923E979A908
{
public:
	::Class_1_D811CE24096BDBCA_2* Field_2_1; // 0x20
	::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* Field_2_0; // 0x28

	::System::Void _ctor(::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* a1, ::Class_1_D811CE24096BDBCA_2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::ChenLingBattleGameContext*, ::Class_1_D811CE24096BDBCA_2*))((::PBYTE)hIl2Cpp + CLASS_2_6347450B85B6BBD4_4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6347450B85B6BBD4_4_ONEXECUTE_OFFSET))(this);
	}

	::System::Void _OnExecute_b__0_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6347450B85B6BBD4_4__ONEXECUTE_B__0_0_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6347450B85B6BBD4_4___IFIXBASEPROXY_ONEXECUTE_OFFSET))(this);
	}
};
