#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3713064DEE761936.h"

class Class_1_97F76DB9187C3D43;
class Class_1_BB4B99DE4C2501EC_6;
namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameContext; }
namespace RPG::Client::ChenLingBattle { class DynamicProgressEffect; }

#define CLASS_2_72E29E479675FC92_1_METHOD_2_BD052BC55FB88E51_OFFSET UNITYSDK_OFFSET(0xCF233C0)
#define CLASS_2_72E29E479675FC92_1_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xCF22F90)
#define CLASS_2_72E29E479675FC92_1__CTOR_OFFSET UNITYSDK_OFFSET(0xCF23A40)

inline static constexpr unsigned int Class_2_72E29E479675FC92_1_TypeDefinitionIndex = 76275;

class Class_2_72E29E479675FC92_1 : public ::Class_1_3713064DEE761936
{
public:
	::Class_1_97F76DB9187C3D43* GECHPCAPLJN; // 0x20
	::Class_1_BB4B99DE4C2501EC_6* KCLPMCMIALP; // 0x28
	::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* FGHLCBFGPEE; // 0x30

	::System::Void _ctor(::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* a1, ::Class_1_97F76DB9187C3D43* a2, ::Class_1_BB4B99DE4C2501EC_6* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::ChenLingBattleGameContext*, ::Class_1_97F76DB9187C3D43*, ::Class_1_BB4B99DE4C2501EC_6*))((::PBYTE)hIl2Cpp + CLASS_2_72E29E479675FC92_1__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_72E29E479675FC92_1_ONEXECUTE_OFFSET))(this);
	}

	::System::Void Method_2_BD052BC55FB88E51(::RPG::Client::ChenLingBattle::DynamicProgressEffect* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::DynamicProgressEffect*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_72E29E479675FC92_1_METHOD_2_BD052BC55FB88E51_OFFSET))(this, a1, a2);
	}
};
