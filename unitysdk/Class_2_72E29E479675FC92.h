#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3713064DEE761936.h"

class Class_1_0A99AF1699F7F17E_9;
class Class_1_BB4B99DE4C2501EC_6;
namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameContext; }

#define CLASS_2_72E29E479675FC92_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x165A9800)
#define CLASS_2_72E29E479675FC92__CTOR_OFFSET UNITYSDK_OFFSET(0x165A9A70)

inline static constexpr unsigned int Class_2_72E29E479675FC92_TypeDefinitionIndex = 76248;

class Class_2_72E29E479675FC92 : public ::Class_1_3713064DEE761936
{
public:
	::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* FGHLCBFGPEE; // 0x20
	::Class_1_0A99AF1699F7F17E_9* IFKKOHJDCCF; // 0x28
	::Class_1_BB4B99DE4C2501EC_6* KCLPMCMIALP; // 0x30

	::System::Void _ctor(::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* a1, ::Class_1_0A99AF1699F7F17E_9* a2, ::Class_1_BB4B99DE4C2501EC_6* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::ChenLingBattleGameContext*, ::Class_1_0A99AF1699F7F17E_9*, ::Class_1_BB4B99DE4C2501EC_6*))((::PBYTE)hIl2Cpp + CLASS_2_72E29E479675FC92__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_72E29E479675FC92_ONEXECUTE_OFFSET))(this);
	}
};
