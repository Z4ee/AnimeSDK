#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_2_843468DEB2C89684;
namespace RPG::GameCore { class DiceCombatTaskConfig_TriggerSkillHint; }

#define CLASS_2_4027B0B6EBFD6237_METHOD_2_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x166173A0)
#define CLASS_2_4027B0B6EBFD6237__CTOR_OFFSET UNITYSDK_OFFSET(0x16617390)

inline static constexpr unsigned int Class_2_4027B0B6EBFD6237_TypeDefinitionIndex = 28423;

class Class_2_4027B0B6EBFD6237 : public ::Class_1_B55037134F9E6688
{
public:
	::RPG::GameCore::DiceCombatTaskConfig_TriggerSkillHint* Field_2_0; // 0x18
	::Class_2_843468DEB2C89684* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_TriggerSkillHint* a1, ::Class_2_843468DEB2C89684* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_TriggerSkillHint*, ::Class_2_843468DEB2C89684*))((::PBYTE)hIl2Cpp + CLASS_2_4027B0B6EBFD6237__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AA169839CB93802A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4027B0B6EBFD6237_METHOD_2_AA169839CB93802A_OFFSET))(this);
	}
};
