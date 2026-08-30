#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_2_48488E8DBD9F6BCE;
namespace RPG::GameCore { class DiceCombatTaskConfig_TriggerSkillCutin; }

#define CLASS_2_FD303BA43EC80462_METHOD_2_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x1A59C660)
#define CLASS_2_FD303BA43EC80462__CTOR_OFFSET UNITYSDK_OFFSET(0x1A560120)

inline static constexpr unsigned int Class_2_FD303BA43EC80462_TypeDefinitionIndex = 35615;

class Class_2_FD303BA43EC80462 : public ::Class_1_B55037134F9E6688
{
public:
	::Class_2_48488E8DBD9F6BCE* EEFMDEHLLFI; // 0x18
	::RPG::GameCore::DiceCombatTaskConfig_TriggerSkillCutin* IGHAHBNLIJA; // 0x20

	::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_TriggerSkillCutin* a1, ::Class_2_48488E8DBD9F6BCE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_TriggerSkillCutin*, ::Class_2_48488E8DBD9F6BCE*))((::PBYTE)hIl2Cpp + CLASS_2_FD303BA43EC80462__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AA169839CB93802A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD303BA43EC80462_METHOD_2_AA169839CB93802A_OFFSET))(this);
	}
};
