#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3713064DEE761936.h"

class Class_1_21C7581DFE99F091_25;
namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameContext; }

#define CLASS_2_6347450B85B6BBD4_15_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x15B2CF00)
#define CLASS_2_6347450B85B6BBD4_15__CTOR_OFFSET UNITYSDK_OFFSET(0x15B2CFA0)

inline static constexpr unsigned int Class_2_6347450B85B6BBD4_15_TypeDefinitionIndex = 76270;

class Class_2_6347450B85B6BBD4_15 : public ::Class_1_3713064DEE761936
{
public:
	::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* FGHLCBFGPEE; // 0x20
	::Class_1_21C7581DFE99F091_25* KPNOIBCEFLL; // 0x28

	::System::Void _ctor(::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* a1, ::Class_1_21C7581DFE99F091_25* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::ChenLingBattleGameContext*, ::Class_1_21C7581DFE99F091_25*))((::PBYTE)hIl2Cpp + CLASS_2_6347450B85B6BBD4_15__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6347450B85B6BBD4_15_ONEXECUTE_OFFSET))(this);
	}
};
