#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_2_843468DEB2C89684;
namespace RPG::GameCore { class DiceCombatTaskConfig_StartCombat; }

#define CLASS_2_B8B7C96F9EB59D4E_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x166CE380)
#define CLASS_2_B8B7C96F9EB59D4E__CTOR_OFFSET UNITYSDK_OFFSET(0x166CE360)

inline static constexpr unsigned int Class_2_B8B7C96F9EB59D4E_TypeDefinitionIndex = 28430;

class Class_2_B8B7C96F9EB59D4E : public ::Class_1_B55037134F9E6688
{
public:
	::Class_2_843468DEB2C89684* Field_2_1; // 0x18
	::RPG::GameCore::DiceCombatTaskConfig_StartCombat* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_StartCombat* a1, ::Class_2_843468DEB2C89684* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_StartCombat*, ::Class_2_843468DEB2C89684*))((::PBYTE)hIl2Cpp + CLASS_2_B8B7C96F9EB59D4E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B8B7C96F9EB59D4E_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}
};
