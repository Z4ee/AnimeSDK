#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_2_48488E8DBD9F6BCE;
namespace RPG::GameCore { class DiceCombatTaskConfig_TacticsEffect_AlignDefend; }

#define CLASS_2_6772C174E0BC303F_METHOD_2_3AA20A0DA6990FBE_OFFSET UNITYSDK_OFFSET(0x18AC3510)
#define CLASS_2_6772C174E0BC303F__CTOR_OFFSET UNITYSDK_OFFSET(0x18AC3500)

inline static constexpr unsigned int Class_2_6772C174E0BC303F_TypeDefinitionIndex = 34403;

class Class_2_6772C174E0BC303F : public ::Class_1_B55037134F9E6688
{
public:
	::Class_2_48488E8DBD9F6BCE* Field_2_0; // 0x18
	::RPG::GameCore::DiceCombatTaskConfig_TacticsEffect_AlignDefend* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_TacticsEffect_AlignDefend* a1, ::Class_2_48488E8DBD9F6BCE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_TacticsEffect_AlignDefend*, ::Class_2_48488E8DBD9F6BCE*))((::PBYTE)hIl2Cpp + CLASS_2_6772C174E0BC303F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3AA20A0DA6990FBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6772C174E0BC303F_METHOD_2_3AA20A0DA6990FBE_OFFSET))(this);
	}
};
