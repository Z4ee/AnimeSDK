#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_2_843468DEB2C89684;
namespace RPG::GameCore { class DiceCombatTaskConfig_RemoveModifier; }

#define CLASS_2_E89D615EF06C478F_METHOD_2_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0x1660BE90)
#define CLASS_2_E89D615EF06C478F__CTOR_OFFSET UNITYSDK_OFFSET(0x1660BE80)

inline static constexpr unsigned int Class_2_E89D615EF06C478F_TypeDefinitionIndex = 28420;

class Class_2_E89D615EF06C478F : public ::Class_1_B55037134F9E6688
{
public:
	::Class_2_843468DEB2C89684* Field_2_1; // 0x18
	::RPG::GameCore::DiceCombatTaskConfig_RemoveModifier* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_RemoveModifier* a1, ::Class_2_843468DEB2C89684* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_RemoveModifier*, ::Class_2_843468DEB2C89684*))((::PBYTE)hIl2Cpp + CLASS_2_E89D615EF06C478F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_06330CD58CB602B6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E89D615EF06C478F_METHOD_2_06330CD58CB602B6_OFFSET))(this);
	}
};
