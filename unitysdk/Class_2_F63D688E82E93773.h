#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3713064DEE761936.h"

namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameContext; }

#define CLASS_2_F63D688E82E93773_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xA565DF0)
#define CLASS_2_F63D688E82E93773__CTOR_OFFSET UNITYSDK_OFFSET(0xA565E80)
#define CLASS_2_F63D688E82E93773___IFIXBASEPROXY_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xA565E90)

inline static constexpr unsigned int Class_2_F63D688E82E93773_TypeDefinitionIndex = 70853;

class Class_2_F63D688E82E93773 : public ::Class_1_3713064DEE761936
{
public:
	::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::ChenLingBattleGameContext*))((::PBYTE)hIl2Cpp + CLASS_2_F63D688E82E93773__CTOR_OFFSET))(this, a1);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F63D688E82E93773_ONEXECUTE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F63D688E82E93773___IFIXBASEPROXY_ONEXECUTE_OFFSET))(this);
	}
};
