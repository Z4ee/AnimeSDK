#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7ACCB923E979A908.h"

class Class_1_D8EE112A2956A00E;
namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameContext; }

#define CLASS_2_6347450B85B6BBD4_19_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x11923450)
#define CLASS_2_6347450B85B6BBD4_19__CTOR_OFFSET UNITYSDK_OFFSET(0x11923660)
#define CLASS_2_6347450B85B6BBD4_19___IFIXBASEPROXY_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x11923670)

inline static constexpr unsigned int Class_2_6347450B85B6BBD4_19_TypeDefinitionIndex = 62040;

class Class_2_6347450B85B6BBD4_19 : public ::Class_1_7ACCB923E979A908
{
public:
	::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* Field_2_0; // 0x20
	::Class_1_D8EE112A2956A00E* Field_2_1; // 0x28

	::System::Void _ctor(::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* a1, ::Class_1_D8EE112A2956A00E* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::ChenLingBattleGameContext*, ::Class_1_D8EE112A2956A00E*))((::PBYTE)hIl2Cpp + CLASS_2_6347450B85B6BBD4_19__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6347450B85B6BBD4_19_ONEXECUTE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6347450B85B6BBD4_19___IFIXBASEPROXY_ONEXECUTE_OFFSET))(this);
	}
};
