#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3713064DEE761936.h"

class Class_1_03E620B95D05DE85;
class Class_1_F158EBB544151B42;
namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameContext; }
namespace RPG::Client::ChenLingBattle { class DynamicProgressEffect; }

#define CLASS_2_72E29E479675FC92_1_METHOD_2_A7A9919FE7556982_OFFSET UNITYSDK_OFFSET(0xBF2EC10)
#define CLASS_2_72E29E479675FC92_1_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xBF2E8D0)
#define CLASS_2_72E29E479675FC92_1__CTOR_OFFSET UNITYSDK_OFFSET(0xBF2F1E0)
#define CLASS_2_72E29E479675FC92_1___IFIXBASEPROXY_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xBF2F1F0)

inline static constexpr unsigned int Class_2_72E29E479675FC92_1_TypeDefinitionIndex = 70848;

class Class_2_72E29E479675FC92_1 : public ::Class_1_3713064DEE761936
{
public:
	::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* Field_2_0; // 0x20
	::Class_1_F158EBB544151B42* Field_2_1; // 0x28
	::Class_1_03E620B95D05DE85* Field_2_2; // 0x30

	::System::Void _ctor(::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* a1, ::Class_1_F158EBB544151B42* a2, ::Class_1_03E620B95D05DE85* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::ChenLingBattleGameContext*, ::Class_1_F158EBB544151B42*, ::Class_1_03E620B95D05DE85*))((::PBYTE)hIl2Cpp + CLASS_2_72E29E479675FC92_1__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_72E29E479675FC92_1_ONEXECUTE_OFFSET))(this);
	}

	::System::Void Method_2_A7A9919FE7556982(::RPG::Client::ChenLingBattle::DynamicProgressEffect* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::DynamicProgressEffect*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_72E29E479675FC92_1_METHOD_2_A7A9919FE7556982_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_72E29E479675FC92_1___IFIXBASEPROXY_ONEXECUTE_OFFSET))(this);
	}
};
