#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3713064DEE761936.h"

class Class_1_963E317C37FB5E9A_8;
namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameContext; }

#define CLASS_2_6347450B85B6BBD4_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x185EE6C0)
#define CLASS_2_6347450B85B6BBD4__CTOR_OFFSET UNITYSDK_OFFSET(0x185EE880)

inline static constexpr unsigned int Class_2_6347450B85B6BBD4_TypeDefinitionIndex = 75769;

class Class_2_6347450B85B6BBD4 : public ::Class_1_3713064DEE761936
{
public:
	::Class_1_963E317C37FB5E9A_8* FFJJIFAJDHJ; // 0x20
	::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* FGHLCBFGPEE; // 0x28

	::System::Void _ctor(::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* a1, ::Class_1_963E317C37FB5E9A_8* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::ChenLingBattleGameContext*, ::Class_1_963E317C37FB5E9A_8*))((::PBYTE)hIl2Cpp + CLASS_2_6347450B85B6BBD4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6347450B85B6BBD4_ONEXECUTE_OFFSET))(this);
	}
};
