#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3713064DEE761936.h"

class Class_1_45BB92167AED63A0_23;
namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameContext; }

#define CLASS_2_6347450B85B6BBD4_11_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x165C09B0)
#define CLASS_2_6347450B85B6BBD4_11__CTOR_OFFSET UNITYSDK_OFFSET(0x165C09A0)

inline static constexpr unsigned int Class_2_6347450B85B6BBD4_11_TypeDefinitionIndex = 75786;

class Class_2_6347450B85B6BBD4_11 : public ::Class_1_3713064DEE761936
{
public:
	::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* FGHLCBFGPEE; // 0x20
	::Class_1_45BB92167AED63A0_23* PJKPGKFMJJF; // 0x28

	::System::Void _ctor(::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* a1, ::Class_1_45BB92167AED63A0_23* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::ChenLingBattleGameContext*, ::Class_1_45BB92167AED63A0_23*))((::PBYTE)hIl2Cpp + CLASS_2_6347450B85B6BBD4_11__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6347450B85B6BBD4_11_ONEXECUTE_OFFSET))(this);
	}
};
