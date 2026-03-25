#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7ACCB923E979A908.h"

class Class_1_F4C6CB9A7CE9D3F2;
namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameContext; }

#define CLASS_2_6347450B85B6BBD4_1_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x8E9DAE0)
#define CLASS_2_6347450B85B6BBD4_1__CTOR_OFFSET UNITYSDK_OFFSET(0x8E9DB50)
#define CLASS_2_6347450B85B6BBD4_1___IFIXBASEPROXY_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x8E9DB60)

inline static constexpr unsigned int Class_2_6347450B85B6BBD4_1_TypeDefinitionIndex = 62011;

class Class_2_6347450B85B6BBD4_1 : public ::Class_1_7ACCB923E979A908
{
public:
	::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* Field_2_0; // 0x20
	::Class_1_F4C6CB9A7CE9D3F2* Field_2_1; // 0x28

	::System::Void _ctor(::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* a1, ::Class_1_F4C6CB9A7CE9D3F2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::ChenLingBattleGameContext*, ::Class_1_F4C6CB9A7CE9D3F2*))((::PBYTE)hIl2Cpp + CLASS_2_6347450B85B6BBD4_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6347450B85B6BBD4_1_ONEXECUTE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6347450B85B6BBD4_1___IFIXBASEPROXY_ONEXECUTE_OFFSET))(this);
	}
};
