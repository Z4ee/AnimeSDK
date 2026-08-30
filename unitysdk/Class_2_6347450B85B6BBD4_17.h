#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3713064DEE761936.h"

class Class_1_075C34D03AFA1215_18;
namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameContext; }

#define CLASS_2_6347450B85B6BBD4_17_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xC51A220)
#define CLASS_2_6347450B85B6BBD4_17__CTOR_OFFSET UNITYSDK_OFFSET(0xC51A290)

inline static constexpr unsigned int Class_2_6347450B85B6BBD4_17_TypeDefinitionIndex = 75797;

class Class_2_6347450B85B6BBD4_17 : public ::Class_1_3713064DEE761936
{
public:
	::Class_1_075C34D03AFA1215_18* HPBKIGIFFIA; // 0x20
	::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* FGHLCBFGPEE; // 0x28

	::System::Void _ctor(::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* a1, ::Class_1_075C34D03AFA1215_18* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::ChenLingBattleGameContext*, ::Class_1_075C34D03AFA1215_18*))((::PBYTE)hIl2Cpp + CLASS_2_6347450B85B6BBD4_17__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6347450B85B6BBD4_17_ONEXECUTE_OFFSET))(this);
	}
};
