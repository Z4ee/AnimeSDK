#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7ACCB923E979A908.h"

class Class_1_D2520FBD61B50E07;
class Class_1_E85FDBE62E39A5EA_4;
namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameContext; }

#define CLASS_2_72E29E479675FC92_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x10B47360)
#define CLASS_2_72E29E479675FC92__CTOR_OFFSET UNITYSDK_OFFSET(0x10B47550)
#define CLASS_2_72E29E479675FC92___IFIXBASEPROXY_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x10B47560)

inline static constexpr unsigned int Class_2_72E29E479675FC92_TypeDefinitionIndex = 62010;

class Class_2_72E29E479675FC92 : public ::Class_1_7ACCB923E979A908
{
public:
	::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* Field_2_0; // 0x20
	::Class_1_D2520FBD61B50E07* Field_2_2; // 0x28
	::Class_1_E85FDBE62E39A5EA_4* Field_2_1; // 0x30

	::System::Void _ctor(::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* a1, ::Class_1_E85FDBE62E39A5EA_4* a2, ::Class_1_D2520FBD61B50E07* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::ChenLingBattleGameContext*, ::Class_1_E85FDBE62E39A5EA_4*, ::Class_1_D2520FBD61B50E07*))((::PBYTE)hIl2Cpp + CLASS_2_72E29E479675FC92__CTOR_OFFSET))(this, a1, a2, a3);
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
