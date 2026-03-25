#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_2_843468DEB2C89684;
namespace RPG::GameCore { class DiceCombatTaskConfig_TriggerSpecialHint; }

#define CLASS_2_7BCA72AAF3EC3896_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x166CA610)
#define CLASS_2_7BCA72AAF3EC3896__CTOR_OFFSET UNITYSDK_OFFSET(0x166BF8D0)

inline static constexpr unsigned int Class_2_7BCA72AAF3EC3896_TypeDefinitionIndex = 28424;

class Class_2_7BCA72AAF3EC3896 : public ::Class_1_B55037134F9E6688
{
public:
	::RPG::GameCore::DiceCombatTaskConfig_TriggerSpecialHint* Field_2_0; // 0x18
	::Class_2_843468DEB2C89684* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_TriggerSpecialHint* a1, ::Class_2_843468DEB2C89684* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_TriggerSpecialHint*, ::Class_2_843468DEB2C89684*))((::PBYTE)hIl2Cpp + CLASS_2_7BCA72AAF3EC3896__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7BCA72AAF3EC3896_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}
};
