#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_2_48488E8DBD9F6BCE;
namespace RPG::GameCore { class DiceCombatTaskConfig_TriggerIceEffect; }

#define CLASS_2_4C8DB1C87AB45681_METHOD_2_6D93101E4CE10A96_OFFSET UNITYSDK_OFFSET(0x18AC5320)
#define CLASS_2_4C8DB1C87AB45681__CTOR_OFFSET UNITYSDK_OFFSET(0x18AC5310)

inline static constexpr unsigned int Class_2_4C8DB1C87AB45681_TypeDefinitionIndex = 34391;

class Class_2_4C8DB1C87AB45681 : public ::Class_1_B55037134F9E6688
{
public:
	::Class_2_48488E8DBD9F6BCE* Field_2_0; // 0x18
	::RPG::GameCore::DiceCombatTaskConfig_TriggerIceEffect* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_TriggerIceEffect* a1, ::Class_2_48488E8DBD9F6BCE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_TriggerIceEffect*, ::Class_2_48488E8DBD9F6BCE*))((::PBYTE)hIl2Cpp + CLASS_2_4C8DB1C87AB45681__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_6D93101E4CE10A96()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C8DB1C87AB45681_METHOD_2_6D93101E4CE10A96_OFFSET))(this);
	}
};
