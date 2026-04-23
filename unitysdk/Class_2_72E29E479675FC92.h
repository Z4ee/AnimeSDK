#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7ACCB923E979A908.h"

class Class_1_00BAB2C33D444F88_4;
class Class_1_BE8B780D54F2A10A;
namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameContext; }

#define CLASS_2_72E29E479675FC92_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xA080560)
#define CLASS_2_72E29E479675FC92__CTOR_OFFSET UNITYSDK_OFFSET(0xA080750)
#define CLASS_2_72E29E479675FC92___IFIXBASEPROXY_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xA080760)

inline static constexpr unsigned int Class_2_72E29E479675FC92_TypeDefinitionIndex = 70009;

class Class_2_72E29E479675FC92 : public ::Class_1_7ACCB923E979A908
{
public:
	::Class_1_00BAB2C33D444F88_4* Field_2_1; // 0x20
	::Class_1_BE8B780D54F2A10A* Field_2_2; // 0x28
	::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* Field_2_0; // 0x30

	::System::Void _ctor(::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* a1, ::Class_1_00BAB2C33D444F88_4* a2, ::Class_1_BE8B780D54F2A10A* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::ChenLingBattleGameContext*, ::Class_1_00BAB2C33D444F88_4*, ::Class_1_BE8B780D54F2A10A*))((::PBYTE)hIl2Cpp + CLASS_2_72E29E479675FC92__CTOR_OFFSET))(this, a1, a2, a3);
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
