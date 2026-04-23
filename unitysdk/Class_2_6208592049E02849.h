#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_2_843468DEB2C89684;
namespace RPG::GameCore { class DiceCombatTaskConfig_MarkBossForceChangePhaseFlag; }

#define CLASS_2_6208592049E02849_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x17D3A710)
#define CLASS_2_6208592049E02849__CTOR_OFFSET UNITYSDK_OFFSET(0x17D3A700)

inline static constexpr unsigned int Class_2_6208592049E02849_TypeDefinitionIndex = 34119;

class Class_2_6208592049E02849 : public ::Class_1_B55037134F9E6688
{
public:
	::Class_2_843468DEB2C89684* Field_2_1; // 0x18
	::RPG::GameCore::DiceCombatTaskConfig_MarkBossForceChangePhaseFlag* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_MarkBossForceChangePhaseFlag* a1, ::Class_2_843468DEB2C89684* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_MarkBossForceChangePhaseFlag*, ::Class_2_843468DEB2C89684*))((::PBYTE)hIl2Cpp + CLASS_2_6208592049E02849__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6208592049E02849_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}
};
