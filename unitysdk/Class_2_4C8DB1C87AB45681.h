#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_2_843468DEB2C89684;
namespace RPG::GameCore { class DiceCombatTaskConfig_TriggerIceEffect; }

#define CLASS_2_4C8DB1C87AB45681_METHOD_2_6D93101E4CE10A96_OFFSET UNITYSDK_OFFSET(0x16730AE0)
#define CLASS_2_4C8DB1C87AB45681__CTOR_OFFSET UNITYSDK_OFFSET(0x16730AD0)

inline static constexpr unsigned int Class_2_4C8DB1C87AB45681_TypeDefinitionIndex = 28439;

class Class_2_4C8DB1C87AB45681 : public ::Class_1_B55037134F9E6688
{
public:
	::RPG::GameCore::DiceCombatTaskConfig_TriggerIceEffect* Field_2_0; // 0x18
	::Class_2_843468DEB2C89684* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_TriggerIceEffect* a1, ::Class_2_843468DEB2C89684* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_TriggerIceEffect*, ::Class_2_843468DEB2C89684*))((::PBYTE)hIl2Cpp + CLASS_2_4C8DB1C87AB45681__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_6D93101E4CE10A96()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C8DB1C87AB45681_METHOD_2_6D93101E4CE10A96_OFFSET))(this);
	}
};
