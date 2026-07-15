#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_2_48488E8DBD9F6BCE;
namespace RPG::GameCore { class DiceCombatTaskConfig_TriggerEffect; }

#define CLASS_2_7CB2AE1B5BBD6C4E_METHOD_2_0BDFAC56E6B704CB_OFFSET UNITYSDK_OFFSET(0x17B9AB70)
#define CLASS_2_7CB2AE1B5BBD6C4E__CTOR_OFFSET UNITYSDK_OFFSET(0x17B9AB60)

inline static constexpr unsigned int Class_2_7CB2AE1B5BBD6C4E_TypeDefinitionIndex = 34753;

class Class_2_7CB2AE1B5BBD6C4E : public ::Class_1_B55037134F9E6688
{
public:
	::RPG::GameCore::DiceCombatTaskConfig_TriggerEffect* Field_2_0; // 0x18
	::Class_2_48488E8DBD9F6BCE* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_TriggerEffect* a1, ::Class_2_48488E8DBD9F6BCE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_TriggerEffect*, ::Class_2_48488E8DBD9F6BCE*))((::PBYTE)hIl2Cpp + CLASS_2_7CB2AE1B5BBD6C4E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_0BDFAC56E6B704CB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CB2AE1B5BBD6C4E_METHOD_2_0BDFAC56E6B704CB_OFFSET))(this);
	}
};
