#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_2_843468DEB2C89684;
namespace RPG::GameCore { class DiceCombatModifierConfig; }
namespace RPG::GameCore { class DiceCombatTaskConfig_AddModifier; }

#define CLASS_2_E3652A16B6E1AF0E_METHOD_2_3E321BEED5E85599_OFFSET UNITYSDK_OFFSET(0x16622450)
#define CLASS_2_E3652A16B6E1AF0E_METHOD_2_ACE888BF6F5BC5FD_OFFSET UNITYSDK_OFFSET(0x166221F0)
#define CLASS_2_E3652A16B6E1AF0E__CTOR_OFFSET UNITYSDK_OFFSET(0x166221E0)

inline static constexpr unsigned int Class_2_E3652A16B6E1AF0E_TypeDefinitionIndex = 28419;

class Class_2_E3652A16B6E1AF0E : public ::Class_1_B55037134F9E6688
{
public:
	::Class_2_843468DEB2C89684* Field_2_1; // 0x18
	::RPG::GameCore::DiceCombatTaskConfig_AddModifier* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_AddModifier* a1, ::Class_2_843468DEB2C89684* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_AddModifier*, ::Class_2_843468DEB2C89684*))((::PBYTE)hIl2Cpp + CLASS_2_E3652A16B6E1AF0E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_ACE888BF6F5BC5FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E3652A16B6E1AF0E_METHOD_2_ACE888BF6F5BC5FD_OFFSET))(this);
	}

	::RPG::GameCore::DiceCombatModifierConfig* Method_2_3E321BEED5E85599(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::DiceCombatModifierConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_E3652A16B6E1AF0E_METHOD_2_3E321BEED5E85599_OFFSET))(this, a1);
	}
};
