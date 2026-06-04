#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3713064DEE761936.h"

class Class_1_5516F5B2865E1357_1;
namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameContext; }

#define CLASS_2_6347450B85B6BBD4_19_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x142E3350)
#define CLASS_2_6347450B85B6BBD4_19__CTOR_OFFSET UNITYSDK_OFFSET(0x142E3560)
#define CLASS_2_6347450B85B6BBD4_19___IFIXBASEPROXY_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x142E3570)

inline static constexpr unsigned int Class_2_6347450B85B6BBD4_19_TypeDefinitionIndex = 70851;

class Class_2_6347450B85B6BBD4_19 : public ::Class_1_3713064DEE761936
{
public:
	::Class_1_5516F5B2865E1357_1* Field_2_0; // 0x20
	::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* Field_2_1; // 0x28

	::System::Void _ctor(::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* a1, ::Class_1_5516F5B2865E1357_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::ChenLingBattleGameContext*, ::Class_1_5516F5B2865E1357_1*))((::PBYTE)hIl2Cpp + CLASS_2_6347450B85B6BBD4_19__CTOR_OFFSET))(this, a1, a2);
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
