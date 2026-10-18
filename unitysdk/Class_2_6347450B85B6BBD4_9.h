#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3713064DEE761936.h"

class Class_1_38EDFE5CA7B8A5B6_2;
namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameContext; }

#define CLASS_2_6347450B85B6BBD4_9_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x154FBFF0)
#define CLASS_2_6347450B85B6BBD4_9__CTOR_OFFSET UNITYSDK_OFFSET(0x154FC130)

inline static constexpr unsigned int Class_2_6347450B85B6BBD4_9_TypeDefinitionIndex = 76262;

class Class_2_6347450B85B6BBD4_9 : public ::Class_1_3713064DEE761936
{
public:
	::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* FGHLCBFGPEE; // 0x20
	::Class_1_38EDFE5CA7B8A5B6_2* CDEBJIOBPEM; // 0x28

	::System::Void _ctor(::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* a1, ::Class_1_38EDFE5CA7B8A5B6_2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::ChenLingBattleGameContext*, ::Class_1_38EDFE5CA7B8A5B6_2*))((::PBYTE)hIl2Cpp + CLASS_2_6347450B85B6BBD4_9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6347450B85B6BBD4_9_ONEXECUTE_OFFSET))(this);
	}
};
