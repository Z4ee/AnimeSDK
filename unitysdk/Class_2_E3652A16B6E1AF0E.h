#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_2_48488E8DBD9F6BCE;
namespace RPG::GameCore { class DiceCombatTaskConfig_AddModifier; }

#define CLASS_2_E3652A16B6E1AF0E_METHOD_2_1F3793A40D6D0F7F_OFFSET UNITYSDK_OFFSET(0x162553C0)
#define CLASS_2_E3652A16B6E1AF0E__CTOR_OFFSET UNITYSDK_OFFSET(0x162553B0)

inline static constexpr unsigned int Class_2_E3652A16B6E1AF0E_TypeDefinitionIndex = 35611;

class Class_2_E3652A16B6E1AF0E : public ::Class_1_B55037134F9E6688
{
public:
	::RPG::GameCore::DiceCombatTaskConfig_AddModifier* IGHAHBNLIJA; // 0x18
	::Class_2_48488E8DBD9F6BCE* EEFMDEHLLFI; // 0x20

	::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_AddModifier* a1, ::Class_2_48488E8DBD9F6BCE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_AddModifier*, ::Class_2_48488E8DBD9F6BCE*))((::PBYTE)hIl2Cpp + CLASS_2_E3652A16B6E1AF0E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1F3793A40D6D0F7F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E3652A16B6E1AF0E_METHOD_2_1F3793A40D6D0F7F_OFFSET))(this);
	}
};
