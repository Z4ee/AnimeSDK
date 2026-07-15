#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3713064DEE761936.h"

class Class_1_963E317C37FB5E9A_6;
namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameContext; }

#define CLASS_2_6347450B85B6BBD4_16_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x14B83BA0)
#define CLASS_2_6347450B85B6BBD4_16__CTOR_OFFSET UNITYSDK_OFFSET(0x14B83CE0)

inline static constexpr unsigned int Class_2_6347450B85B6BBD4_16_TypeDefinitionIndex = 72359;

class Class_2_6347450B85B6BBD4_16 : public ::Class_1_3713064DEE761936
{
public:
	::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* Field_2_0; // 0x20
	::Class_1_963E317C37FB5E9A_6* Field_2_1; // 0x28

	::System::Void _ctor(::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* a1, ::Class_1_963E317C37FB5E9A_6* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::ChenLingBattleGameContext*, ::Class_1_963E317C37FB5E9A_6*))((::PBYTE)hIl2Cpp + CLASS_2_6347450B85B6BBD4_16__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6347450B85B6BBD4_16_ONEXECUTE_OFFSET))(this);
	}
};
