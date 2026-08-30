#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_2_48488E8DBD9F6BCE;
namespace RPG::GameCore { class DiceCombatTaskConfig_InsertAbility; }

#define CLASS_2_B5DB04A6D2546EAC_METHOD_2_921C3C3E09D59CD4_OFFSET UNITYSDK_OFFSET(0x1C0662F0)
#define CLASS_2_B5DB04A6D2546EAC__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0662E0)

inline static constexpr unsigned int Class_2_B5DB04A6D2546EAC_TypeDefinitionIndex = 35625;

class Class_2_B5DB04A6D2546EAC : public ::Class_1_B55037134F9E6688
{
public:
	::Class_2_48488E8DBD9F6BCE* EEFMDEHLLFI; // 0x18
	::RPG::GameCore::DiceCombatTaskConfig_InsertAbility* IGHAHBNLIJA; // 0x20

	::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_InsertAbility* a1, ::Class_2_48488E8DBD9F6BCE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_InsertAbility*, ::Class_2_48488E8DBD9F6BCE*))((::PBYTE)hIl2Cpp + CLASS_2_B5DB04A6D2546EAC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_921C3C3E09D59CD4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B5DB04A6D2546EAC_METHOD_2_921C3C3E09D59CD4_OFFSET))(this);
	}
};
