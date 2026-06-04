#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3713064DEE761936.h"

class Class_1_00BAB2C33D444F88_4;
class Class_1_03E620B95D05DE85;
namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameContext; }

#define CLASS_2_72E29E479675FC92_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1429F9B0)
#define CLASS_2_72E29E479675FC92__CTOR_OFFSET UNITYSDK_OFFSET(0x1429FBB0)
#define CLASS_2_72E29E479675FC92___IFIXBASEPROXY_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1429FBC0)

inline static constexpr unsigned int Class_2_72E29E479675FC92_TypeDefinitionIndex = 70821;

class Class_2_72E29E479675FC92 : public ::Class_1_3713064DEE761936
{
public:
	::Class_1_03E620B95D05DE85* Field_2_0; // 0x20
	::Class_1_00BAB2C33D444F88_4* Field_2_1; // 0x28
	::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* Field_2_2; // 0x30

	::System::Void _ctor(::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* a1, ::Class_1_00BAB2C33D444F88_4* a2, ::Class_1_03E620B95D05DE85* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::ChenLingBattleGameContext*, ::Class_1_00BAB2C33D444F88_4*, ::Class_1_03E620B95D05DE85*))((::PBYTE)hIl2Cpp + CLASS_2_72E29E479675FC92__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_72E29E479675FC92_ONEXECUTE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_72E29E479675FC92___IFIXBASEPROXY_ONEXECUTE_OFFSET))(this);
	}
};
