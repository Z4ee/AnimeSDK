#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3713064DEE761936.h"

namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameContext; }

#define CLASS_2_F63D688E82E93773_2_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x16190000)
#define CLASS_2_F63D688E82E93773_2__CTOR_OFFSET UNITYSDK_OFFSET(0x16190120)

inline static constexpr unsigned int Class_2_F63D688E82E93773_2_TypeDefinitionIndex = 75805;

class Class_2_F63D688E82E93773_2 : public ::Class_1_3713064DEE761936
{
public:
	::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* FGHLCBFGPEE; // 0x20

	::System::Void _ctor(::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::ChenLingBattleGameContext*))((::PBYTE)hIl2Cpp + CLASS_2_F63D688E82E93773_2__CTOR_OFFSET))(this, a1);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F63D688E82E93773_2_ONEXECUTE_OFFSET))(this);
	}
};
