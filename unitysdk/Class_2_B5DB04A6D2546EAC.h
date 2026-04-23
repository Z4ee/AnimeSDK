#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_2_843468DEB2C89684;
namespace RPG::GameCore { class DiceCombatTaskConfig_InsertAbility; }

#define CLASS_2_B5DB04A6D2546EAC_METHOD_2_921C3C3E09D59CD4_OFFSET UNITYSDK_OFFSET(0x17C12AA0)
#define CLASS_2_B5DB04A6D2546EAC__CTOR_OFFSET UNITYSDK_OFFSET(0x17C12A90)

inline static constexpr unsigned int Class_2_B5DB04A6D2546EAC_TypeDefinitionIndex = 34100;

class Class_2_B5DB04A6D2546EAC : public ::Class_1_B55037134F9E6688
{
public:
	::RPG::GameCore::DiceCombatTaskConfig_InsertAbility* Field_2_0; // 0x18
	::Class_2_843468DEB2C89684* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_InsertAbility* a1, ::Class_2_843468DEB2C89684* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_InsertAbility*, ::Class_2_843468DEB2C89684*))((::PBYTE)hIl2Cpp + CLASS_2_B5DB04A6D2546EAC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_921C3C3E09D59CD4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B5DB04A6D2546EAC_METHOD_2_921C3C3E09D59CD4_OFFSET))(this);
	}
};
