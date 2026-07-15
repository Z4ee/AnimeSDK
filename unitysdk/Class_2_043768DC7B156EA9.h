#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_1_D8BECDCE48063EC7;
namespace RPG::GameCore { class DiceCombatTaskConfig_ShowBossPersistentTipsView; }

#define CLASS_2_043768DC7B156EA9_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x17AF8CC0)
#define CLASS_2_043768DC7B156EA9__CTOR_OFFSET UNITYSDK_OFFSET(0x17AF8CB0)

inline static constexpr unsigned int Class_2_043768DC7B156EA9_TypeDefinitionIndex = 34747;

class Class_2_043768DC7B156EA9 : public ::Class_1_B55037134F9E6688
{
public:
	::Class_1_D8BECDCE48063EC7* Field_2_0; // 0x18
	::RPG::GameCore::DiceCombatTaskConfig_ShowBossPersistentTipsView* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_ShowBossPersistentTipsView* a1, ::Class_1_D8BECDCE48063EC7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_ShowBossPersistentTipsView*, ::Class_1_D8BECDCE48063EC7*))((::PBYTE)hIl2Cpp + CLASS_2_043768DC7B156EA9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_043768DC7B156EA9_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}
};
