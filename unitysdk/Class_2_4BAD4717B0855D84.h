#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3713064DEE761936.h"

class Class_1_BB4B99DE4C2501EC_6;
namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameContext; }

#define CLASS_2_4BAD4717B0855D84_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xF252F30)
#define CLASS_2_4BAD4717B0855D84__CTOR_OFFSET UNITYSDK_OFFSET(0xF2530E0)

inline static constexpr unsigned int Class_2_4BAD4717B0855D84_TypeDefinitionIndex = 76259;

class Class_2_4BAD4717B0855D84 : public ::Class_1_3713064DEE761936
{
public:
	::Class_1_BB4B99DE4C2501EC_6* BPKKKMOCFIP; // 0x20
	::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* FGHLCBFGPEE; // 0x28
	::System::UInt32 JCNBMHFOLAA; // 0x30

	::System::Void _ctor(::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* a1, ::System::UInt32 a2, ::Class_1_BB4B99DE4C2501EC_6* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::ChenLingBattleGameContext*, ::System::UInt32, ::Class_1_BB4B99DE4C2501EC_6*))((::PBYTE)hIl2Cpp + CLASS_2_4BAD4717B0855D84__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BAD4717B0855D84_ONEXECUTE_OFFSET))(this);
	}
};
