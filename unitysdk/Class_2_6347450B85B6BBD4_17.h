#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7ACCB923E979A908.h"

class Class_1_6E708EAB438EC183_15;
namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameContext; }

#define CLASS_2_6347450B85B6BBD4_17_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x110F9420)
#define CLASS_2_6347450B85B6BBD4_17__CTOR_OFFSET UNITYSDK_OFFSET(0x110F9490)
#define CLASS_2_6347450B85B6BBD4_17___IFIXBASEPROXY_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x110F94A0)

inline static constexpr unsigned int Class_2_6347450B85B6BBD4_17_TypeDefinitionIndex = 62036;

class Class_2_6347450B85B6BBD4_17 : public ::Class_1_7ACCB923E979A908
{
public:
	::Class_1_6E708EAB438EC183_15* Field_2_1; // 0x20
	::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* Field_2_0; // 0x28

	::System::Void _ctor(::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* a1, ::Class_1_6E708EAB438EC183_15* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::ChenLingBattleGameContext*, ::Class_1_6E708EAB438EC183_15*))((::PBYTE)hIl2Cpp + CLASS_2_6347450B85B6BBD4_17__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6347450B85B6BBD4_17_ONEXECUTE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6347450B85B6BBD4_17___IFIXBASEPROXY_ONEXECUTE_OFFSET))(this);
	}
};
