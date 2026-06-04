#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_2_48488E8DBD9F6BCE;
namespace RPG::GameCore { class DiceCombatTaskConfig_TriggerBossSpecialEffect; }

#define CLASS_2_6FF8A422DAFAC1BD_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x189B1A90)
#define CLASS_2_6FF8A422DAFAC1BD__CTOR_OFFSET UNITYSDK_OFFSET(0x189B1A80)

inline static constexpr unsigned int Class_2_6FF8A422DAFAC1BD_TypeDefinitionIndex = 34374;

class Class_2_6FF8A422DAFAC1BD : public ::Class_1_B55037134F9E6688
{
public:
	::RPG::GameCore::DiceCombatTaskConfig_TriggerBossSpecialEffect* Field_2_0; // 0x18
	::Class_2_48488E8DBD9F6BCE* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_TriggerBossSpecialEffect* a1, ::Class_2_48488E8DBD9F6BCE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_TriggerBossSpecialEffect*, ::Class_2_48488E8DBD9F6BCE*))((::PBYTE)hIl2Cpp + CLASS_2_6FF8A422DAFAC1BD__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6FF8A422DAFAC1BD_METHOD_2_33ACA6CB2ABC73F7_OFFSET))(this);
	}
};
