#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_2_48488E8DBD9F6BCE;
namespace RPG::GameCore { class DiceCombatTaskConfig_MarkBossForceChangePhaseFlag; }

#define CLASS_2_6208592049E02849_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x198C3C60)
#define CLASS_2_6208592049E02849__CTOR_OFFSET UNITYSDK_OFFSET(0x198C3C50)

inline static constexpr unsigned int Class_2_6208592049E02849_TypeDefinitionIndex = 34783;

class Class_2_6208592049E02849 : public ::Class_1_B55037134F9E6688
{
public:
	::RPG::GameCore::DiceCombatTaskConfig_MarkBossForceChangePhaseFlag* Field_2_0; // 0x18
	::Class_2_48488E8DBD9F6BCE* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_MarkBossForceChangePhaseFlag* a1, ::Class_2_48488E8DBD9F6BCE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_MarkBossForceChangePhaseFlag*, ::Class_2_48488E8DBD9F6BCE*))((::PBYTE)hIl2Cpp + CLASS_2_6208592049E02849__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6208592049E02849_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}
};
