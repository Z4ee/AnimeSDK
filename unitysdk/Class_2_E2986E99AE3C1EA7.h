#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_2_48488E8DBD9F6BCE;
namespace RPG::GameCore { class DiceCombatTaskConfig_AttackDamage; }

#define CLASS_2_E2986E99AE3C1EA7_METHOD_2_735EE20B25F86BF4_OFFSET UNITYSDK_OFFSET(0x18AA8740)
#define CLASS_2_E2986E99AE3C1EA7__CTOR_OFFSET UNITYSDK_OFFSET(0x18AA8730)

inline static constexpr unsigned int Class_2_E2986E99AE3C1EA7_TypeDefinitionIndex = 34379;

class Class_2_E2986E99AE3C1EA7 : public ::Class_1_B55037134F9E6688
{
public:
	::Class_2_48488E8DBD9F6BCE* Field_2_0; // 0x18
	::RPG::GameCore::DiceCombatTaskConfig_AttackDamage* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_AttackDamage* a1, ::Class_2_48488E8DBD9F6BCE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_AttackDamage*, ::Class_2_48488E8DBD9F6BCE*))((::PBYTE)hIl2Cpp + CLASS_2_E2986E99AE3C1EA7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_735EE20B25F86BF4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E2986E99AE3C1EA7_METHOD_2_735EE20B25F86BF4_OFFSET))(this);
	}
};
