#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_2_48488E8DBD9F6BCE;
namespace RPG::GameCore { class DiceCombatTaskConfig_TriggerSpecialHint; }

#define CLASS_2_7BCA72AAF3EC3896_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x18AC5990)
#define CLASS_2_7BCA72AAF3EC3896__CTOR_OFFSET UNITYSDK_OFFSET(0x18AC5980)

inline static constexpr unsigned int Class_2_7BCA72AAF3EC3896_TypeDefinitionIndex = 34375;

class Class_2_7BCA72AAF3EC3896 : public ::Class_1_B55037134F9E6688
{
public:
	::RPG::GameCore::DiceCombatTaskConfig_TriggerSpecialHint* Field_2_0; // 0x18
	::Class_2_48488E8DBD9F6BCE* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_TriggerSpecialHint* a1, ::Class_2_48488E8DBD9F6BCE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_TriggerSpecialHint*, ::Class_2_48488E8DBD9F6BCE*))((::PBYTE)hIl2Cpp + CLASS_2_7BCA72AAF3EC3896__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7BCA72AAF3EC3896_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}
};
