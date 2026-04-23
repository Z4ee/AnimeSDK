#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7ACCB923E979A908.h"

namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameContext; }

#define CLASS_2_F63D688E82E93773_1_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x9509D80)
#define CLASS_2_F63D688E82E93773_1__CTOR_OFFSET UNITYSDK_OFFSET(0x950A2F0)
#define CLASS_2_F63D688E82E93773_1___IFIXBASEPROXY_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x950A300)

inline static constexpr unsigned int Class_2_F63D688E82E93773_1_TypeDefinitionIndex = 70042;

class Class_2_F63D688E82E93773_1 : public ::Class_1_7ACCB923E979A908
{
public:
	::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::ChenLingBattleGameContext*))((::PBYTE)hIl2Cpp + CLASS_2_F63D688E82E93773_1__CTOR_OFFSET))(this, a1);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F63D688E82E93773_1_ONEXECUTE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F63D688E82E93773_1___IFIXBASEPROXY_ONEXECUTE_OFFSET))(this);
	}
};
