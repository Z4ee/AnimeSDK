#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_2_843468DEB2C89684;
namespace RPG::GameCore { class DiceCombatTaskConfig_ChangeLimitedDiceAvailableCount; }

#define CLASS_2_9536F1F16F34C5F4_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x165CC7C0)
#define CLASS_2_9536F1F16F34C5F4__CTOR_OFFSET UNITYSDK_OFFSET(0x165CC7B0)

inline static constexpr unsigned int Class_2_9536F1F16F34C5F4_TypeDefinitionIndex = 28437;

class Class_2_9536F1F16F34C5F4 : public ::Class_1_B55037134F9E6688
{
public:
	::RPG::GameCore::DiceCombatTaskConfig_ChangeLimitedDiceAvailableCount* Field_2_0; // 0x18
	::Class_2_843468DEB2C89684* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_ChangeLimitedDiceAvailableCount* a1, ::Class_2_843468DEB2C89684* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_ChangeLimitedDiceAvailableCount*, ::Class_2_843468DEB2C89684*))((::PBYTE)hIl2Cpp + CLASS_2_9536F1F16F34C5F4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9536F1F16F34C5F4_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}
};
