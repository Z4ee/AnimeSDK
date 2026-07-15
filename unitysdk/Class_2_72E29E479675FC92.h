#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3713064DEE761936.h"

class Class_1_0A99AF1699F7F17E_6;
class Class_1_D2520FBD61B50E07;
namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameContext; }

#define CLASS_2_72E29E479675FC92_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x146DC310)
#define CLASS_2_72E29E479675FC92__CTOR_OFFSET UNITYSDK_OFFSET(0x146DC580)

inline static constexpr unsigned int Class_2_72E29E479675FC92_TypeDefinitionIndex = 72334;

class Class_2_72E29E479675FC92 : public ::Class_1_3713064DEE761936
{
public:
	::Class_1_0A99AF1699F7F17E_6* Field_2_0; // 0x20
	::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* Field_2_1; // 0x28
	::Class_1_D2520FBD61B50E07* Field_2_2; // 0x30

	::System::Void _ctor(::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* a1, ::Class_1_0A99AF1699F7F17E_6* a2, ::Class_1_D2520FBD61B50E07* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::ChenLingBattleGameContext*, ::Class_1_0A99AF1699F7F17E_6*, ::Class_1_D2520FBD61B50E07*))((::PBYTE)hIl2Cpp + CLASS_2_72E29E479675FC92__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_72E29E479675FC92_ONEXECUTE_OFFSET))(this);
	}
};
