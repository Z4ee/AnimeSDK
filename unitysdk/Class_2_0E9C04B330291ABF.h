#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_2_48488E8DBD9F6BCE;
namespace RPG::GameCore { class DiceCombatTaskConfig_TacticsEffect_AlignAttack; }

#define CLASS_2_0E9C04B330291ABF_METHOD_2_3AA20A0DA6990FBE_OFFSET UNITYSDK_OFFSET(0x17AFCDD0)
#define CLASS_2_0E9C04B330291ABF__CTOR_OFFSET UNITYSDK_OFFSET(0x17AFCDC0)

inline static constexpr unsigned int Class_2_0E9C04B330291ABF_TypeDefinitionIndex = 34786;

class Class_2_0E9C04B330291ABF : public ::Class_1_B55037134F9E6688
{
public:
	::RPG::GameCore::DiceCombatTaskConfig_TacticsEffect_AlignAttack* Field_2_0; // 0x18
	::Class_2_48488E8DBD9F6BCE* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_TacticsEffect_AlignAttack* a1, ::Class_2_48488E8DBD9F6BCE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_TacticsEffect_AlignAttack*, ::Class_2_48488E8DBD9F6BCE*))((::PBYTE)hIl2Cpp + CLASS_2_0E9C04B330291ABF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3AA20A0DA6990FBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E9C04B330291ABF_METHOD_2_3AA20A0DA6990FBE_OFFSET))(this);
	}
};
