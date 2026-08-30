#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3713064DEE761936.h"

namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameContext; }

#define CLASS_2_BBE0F508160921D9_3_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xB939CF0)
#define CLASS_2_BBE0F508160921D9_3__CTOR_OFFSET UNITYSDK_OFFSET(0xB939D90)

inline static constexpr unsigned int Class_2_BBE0F508160921D9_3_TypeDefinitionIndex = 75783;

class Class_2_BBE0F508160921D9_3 : public ::Class_1_3713064DEE761936
{
public:
	::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* FGHLCBFGPEE; // 0x20
	::System::UInt32 DMPJCJIACDB; // 0x28

	::System::Void _ctor(::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::ChenLingBattleGameContext*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_BBE0F508160921D9_3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BBE0F508160921D9_3_ONEXECUTE_OFFSET))(this);
	}
};
