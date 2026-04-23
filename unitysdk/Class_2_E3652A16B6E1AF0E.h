#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_2_843468DEB2C89684;
namespace RPG::GameCore { class DiceCombatTaskConfig_AddModifier; }

#define CLASS_2_E3652A16B6E1AF0E_METHOD_2_81FEFD1B22CE37A2_OFFSET UNITYSDK_OFFSET(0x17DBD590)
#define CLASS_2_E3652A16B6E1AF0E__CTOR_OFFSET UNITYSDK_OFFSET(0x17DBD580)

inline static constexpr unsigned int Class_2_E3652A16B6E1AF0E_TypeDefinitionIndex = 34086;

class Class_2_E3652A16B6E1AF0E : public ::Class_1_B55037134F9E6688
{
public:
	::RPG::GameCore::DiceCombatTaskConfig_AddModifier* Field_2_0; // 0x18
	::Class_2_843468DEB2C89684* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_AddModifier* a1, ::Class_2_843468DEB2C89684* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_AddModifier*, ::Class_2_843468DEB2C89684*))((::PBYTE)hIl2Cpp + CLASS_2_E3652A16B6E1AF0E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_81FEFD1B22CE37A2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E3652A16B6E1AF0E_METHOD_2_81FEFD1B22CE37A2_OFFSET))(this);
	}
};
