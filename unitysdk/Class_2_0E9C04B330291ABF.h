#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_2_843468DEB2C89684;
namespace RPG::GameCore { class DiceCombatTaskConfig_TacticsEffect_AlignAttack; }

#define CLASS_2_0E9C04B330291ABF_METHOD_2_6F73A40265D5B980_OFFSET UNITYSDK_OFFSET(0x17BFFBD0)
#define CLASS_2_0E9C04B330291ABF__CTOR_OFFSET UNITYSDK_OFFSET(0x17BFFBC0)

inline static constexpr unsigned int Class_2_0E9C04B330291ABF_TypeDefinitionIndex = 34122;

class Class_2_0E9C04B330291ABF : public ::Class_1_B55037134F9E6688
{
public:
	::Class_2_843468DEB2C89684* Field_2_1; // 0x18
	::RPG::GameCore::DiceCombatTaskConfig_TacticsEffect_AlignAttack* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_TacticsEffect_AlignAttack* a1, ::Class_2_843468DEB2C89684* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_TacticsEffect_AlignAttack*, ::Class_2_843468DEB2C89684*))((::PBYTE)hIl2Cpp + CLASS_2_0E9C04B330291ABF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_6F73A40265D5B980()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E9C04B330291ABF_METHOD_2_6F73A40265D5B980_OFFSET))(this);
	}
};
