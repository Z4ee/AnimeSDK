#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_2_843468DEB2C89684;
namespace RPG::GameCore { class DiceCombatTaskConfig_TriggerSkillCutin; }

#define CLASS_2_FD303BA43EC80462_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x166D0100)
#define CLASS_2_FD303BA43EC80462__CTOR_OFFSET UNITYSDK_OFFSET(0x166D00F0)

inline static constexpr unsigned int Class_2_FD303BA43EC80462_TypeDefinitionIndex = 28422;

class Class_2_FD303BA43EC80462 : public ::Class_1_B55037134F9E6688
{
public:
	::RPG::GameCore::DiceCombatTaskConfig_TriggerSkillCutin* Field_2_0; // 0x18
	::Class_2_843468DEB2C89684* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_TriggerSkillCutin* a1, ::Class_2_843468DEB2C89684* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_TriggerSkillCutin*, ::Class_2_843468DEB2C89684*))((::PBYTE)hIl2Cpp + CLASS_2_FD303BA43EC80462__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD303BA43EC80462_METHOD_2_33ACA6CB2ABC73F7_OFFSET))(this);
	}
};
