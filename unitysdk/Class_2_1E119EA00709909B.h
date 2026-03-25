#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_2_843468DEB2C89684;
namespace RPG::GameCore { class DiceCombatTaskConfig_StrikeBackDamage; }

#define CLASS_2_1E119EA00709909B_METHOD_2_A1C7122184516C18_OFFSET UNITYSDK_OFFSET(0x165CD310)
#define CLASS_2_1E119EA00709909B__CTOR_OFFSET UNITYSDK_OFFSET(0x165CD300)

inline static constexpr unsigned int Class_2_1E119EA00709909B_TypeDefinitionIndex = 28434;

class Class_2_1E119EA00709909B : public ::Class_1_B55037134F9E6688
{
public:
	::Class_2_843468DEB2C89684* Field_2_1; // 0x18
	::RPG::GameCore::DiceCombatTaskConfig_StrikeBackDamage* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_StrikeBackDamage* a1, ::Class_2_843468DEB2C89684* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_StrikeBackDamage*, ::Class_2_843468DEB2C89684*))((::PBYTE)hIl2Cpp + CLASS_2_1E119EA00709909B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A1C7122184516C18()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1E119EA00709909B_METHOD_2_A1C7122184516C18_OFFSET))(this);
	}
};
