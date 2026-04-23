#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7ACCB923E979A908.h"

class Class_1_00BAB2C33D444F88_3;
namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameContext; }

#define CLASS_2_6347450B85B6BBD4_21_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xECA6C70)
#define CLASS_2_6347450B85B6BBD4_21__CTOR_OFFSET UNITYSDK_OFFSET(0xECA6D70)
#define CLASS_2_6347450B85B6BBD4_21___IFIXBASEPROXY_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xECA6D80)

inline static constexpr unsigned int Class_2_6347450B85B6BBD4_21_TypeDefinitionIndex = 70044;

class Class_2_6347450B85B6BBD4_21 : public ::Class_1_7ACCB923E979A908
{
public:
	::Class_1_00BAB2C33D444F88_3* Field_2_1; // 0x20
	::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* Field_2_0; // 0x28

	::System::Void _ctor(::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* a1, ::Class_1_00BAB2C33D444F88_3* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::ChenLingBattleGameContext*, ::Class_1_00BAB2C33D444F88_3*))((::PBYTE)hIl2Cpp + CLASS_2_6347450B85B6BBD4_21__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6347450B85B6BBD4_21_ONEXECUTE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6347450B85B6BBD4_21___IFIXBASEPROXY_ONEXECUTE_OFFSET))(this);
	}
};
