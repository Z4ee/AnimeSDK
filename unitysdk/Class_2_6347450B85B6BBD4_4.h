#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3713064DEE761936.h"

class Class_1_825B6978607E6BB0_2;
namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameContext; }

#define CLASS_2_6347450B85B6BBD4_4_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x17874680)
#define CLASS_2_6347450B85B6BBD4_4__CTOR_OFFSET UNITYSDK_OFFSET(0x17874950)
#define CLASS_2_6347450B85B6BBD4_4__ONEXECUTE_B__0_0_OFFSET UNITYSDK_OFFSET(0x17874960)

inline static constexpr unsigned int Class_2_6347450B85B6BBD4_4_TypeDefinitionIndex = 72339;

class Class_2_6347450B85B6BBD4_4 : public ::Class_1_3713064DEE761936
{
public:
	::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* Field_2_0; // 0x20
	::Class_1_825B6978607E6BB0_2* Field_2_1; // 0x28

	::System::Void _ctor(::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* a1, ::Class_1_825B6978607E6BB0_2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::ChenLingBattleGameContext*, ::Class_1_825B6978607E6BB0_2*))((::PBYTE)hIl2Cpp + CLASS_2_6347450B85B6BBD4_4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6347450B85B6BBD4_4_ONEXECUTE_OFFSET))(this);
	}

	::System::Void _OnExecute_b__0_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6347450B85B6BBD4_4__ONEXECUTE_B__0_0_OFFSET))(this);
	}
};
