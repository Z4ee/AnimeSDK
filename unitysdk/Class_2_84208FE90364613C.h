#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3713064DEE761936.h"

namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameContext; }

#define CLASS_2_84208FE90364613C_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x12E73F80)
#define CLASS_2_84208FE90364613C__CTOR_OFFSET UNITYSDK_OFFSET(0x12E740C0)

inline static constexpr unsigned int Class_2_84208FE90364613C_TypeDefinitionIndex = 75791;

class Class_2_84208FE90364613C : public ::Class_1_3713064DEE761936
{
public:
	::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* FGHLCBFGPEE; // 0x20
	::System::UInt64 BIHIHHKEKLB; // 0x28

	::System::Void _ctor(::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* a1, ::System::UInt64 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::ChenLingBattleGameContext*, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_2_84208FE90364613C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_84208FE90364613C_ONEXECUTE_OFFSET))(this);
	}
};
