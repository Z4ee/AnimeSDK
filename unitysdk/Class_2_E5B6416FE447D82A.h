#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_2_48488E8DBD9F6BCE;
namespace RPG::GameCore { class DiceCombatTaskConfig_BossChangePhase; }

#define CLASS_2_E5B6416FE447D82A_METHOD_2_62167C28EC14CC63_OFFSET UNITYSDK_OFFSET(0x18B7E0E0)
#define CLASS_2_E5B6416FE447D82A__CTOR_OFFSET UNITYSDK_OFFSET(0x18B7E0D0)

inline static constexpr unsigned int Class_2_E5B6416FE447D82A_TypeDefinitionIndex = 34400;

class Class_2_E5B6416FE447D82A : public ::Class_1_B55037134F9E6688
{
public:
	::RPG::GameCore::DiceCombatTaskConfig_BossChangePhase* Field_2_0; // 0x18
	::Class_2_48488E8DBD9F6BCE* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_BossChangePhase* a1, ::Class_2_48488E8DBD9F6BCE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_BossChangePhase*, ::Class_2_48488E8DBD9F6BCE*))((::PBYTE)hIl2Cpp + CLASS_2_E5B6416FE447D82A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_62167C28EC14CC63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E5B6416FE447D82A_METHOD_2_62167C28EC14CC63_OFFSET))(this);
	}
};
