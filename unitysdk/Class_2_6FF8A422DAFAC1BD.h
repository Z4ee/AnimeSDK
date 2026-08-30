#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_2_48488E8DBD9F6BCE;
namespace RPG::GameCore { class DiceCombatTaskConfig_TriggerBossSpecialEffect; }

#define CLASS_2_6FF8A422DAFAC1BD_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x1C077CA0)
#define CLASS_2_6FF8A422DAFAC1BD__CTOR_OFFSET UNITYSDK_OFFSET(0x1C077C90)

inline static constexpr unsigned int Class_2_6FF8A422DAFAC1BD_TypeDefinitionIndex = 35617;

class Class_2_6FF8A422DAFAC1BD : public ::Class_1_B55037134F9E6688
{
public:
	::Class_2_48488E8DBD9F6BCE* EEFMDEHLLFI; // 0x18
	::RPG::GameCore::DiceCombatTaskConfig_TriggerBossSpecialEffect* IGHAHBNLIJA; // 0x20

	::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_TriggerBossSpecialEffect* a1, ::Class_2_48488E8DBD9F6BCE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_TriggerBossSpecialEffect*, ::Class_2_48488E8DBD9F6BCE*))((::PBYTE)hIl2Cpp + CLASS_2_6FF8A422DAFAC1BD__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6FF8A422DAFAC1BD_METHOD_2_33ACA6CB2ABC73F7_OFFSET))(this);
	}
};
