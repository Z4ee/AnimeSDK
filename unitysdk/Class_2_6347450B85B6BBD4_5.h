#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7ACCB923E979A908.h"

class Class_1_ECB0576E84484CA9;
namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameContext; }

#define CLASS_2_6347450B85B6BBD4_5_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x117D72E0)
#define CLASS_2_6347450B85B6BBD4_5__CTOR_OFFSET UNITYSDK_OFFSET(0x117D74A0)
#define CLASS_2_6347450B85B6BBD4_5___IFIXBASEPROXY_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x117D74B0)

inline static constexpr unsigned int Class_2_6347450B85B6BBD4_5_TypeDefinitionIndex = 70015;

class Class_2_6347450B85B6BBD4_5 : public ::Class_1_7ACCB923E979A908
{
public:
	::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* Field_2_0; // 0x20
	::Class_1_ECB0576E84484CA9* Field_2_1; // 0x28

	::System::Void _ctor(::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* a1, ::Class_1_ECB0576E84484CA9* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::ChenLingBattleGameContext*, ::Class_1_ECB0576E84484CA9*))((::PBYTE)hIl2Cpp + CLASS_2_6347450B85B6BBD4_5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6347450B85B6BBD4_5_ONEXECUTE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6347450B85B6BBD4_5___IFIXBASEPROXY_ONEXECUTE_OFFSET))(this);
	}
};
