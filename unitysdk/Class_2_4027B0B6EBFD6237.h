#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_2_48488E8DBD9F6BCE;
namespace RPG::GameCore { class DiceCombatTaskConfig_TriggerSkillHint; }

#define CLASS_2_4027B0B6EBFD6237_METHOD_2_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x18AE9E90)
#define CLASS_2_4027B0B6EBFD6237__CTOR_OFFSET UNITYSDK_OFFSET(0x18AE9E80)

inline static constexpr unsigned int Class_2_4027B0B6EBFD6237_TypeDefinitionIndex = 34373;

class Class_2_4027B0B6EBFD6237 : public ::Class_1_B55037134F9E6688
{
public:
	::Class_2_48488E8DBD9F6BCE* Field_2_0; // 0x18
	::RPG::GameCore::DiceCombatTaskConfig_TriggerSkillHint* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_TriggerSkillHint* a1, ::Class_2_48488E8DBD9F6BCE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_TriggerSkillHint*, ::Class_2_48488E8DBD9F6BCE*))((::PBYTE)hIl2Cpp + CLASS_2_4027B0B6EBFD6237__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AA169839CB93802A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4027B0B6EBFD6237_METHOD_2_AA169839CB93802A_OFFSET))(this);
	}
};
