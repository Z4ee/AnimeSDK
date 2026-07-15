#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_2_48488E8DBD9F6BCE;
namespace RPG::GameCore { class DiceCombatTaskConfig_ChangeLimitedDiceAvailableCount; }

#define CLASS_2_9536F1F16F34C5F4_METHOD_2_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x14A9F230)
#define CLASS_2_9536F1F16F34C5F4__CTOR_OFFSET UNITYSDK_OFFSET(0x14A9F220)

inline static constexpr unsigned int Class_2_9536F1F16F34C5F4_TypeDefinitionIndex = 34770;

class Class_2_9536F1F16F34C5F4 : public ::Class_1_B55037134F9E6688
{
public:
	::Class_2_48488E8DBD9F6BCE* Field_2_0; // 0x18
	::RPG::GameCore::DiceCombatTaskConfig_ChangeLimitedDiceAvailableCount* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_ChangeLimitedDiceAvailableCount* a1, ::Class_2_48488E8DBD9F6BCE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_ChangeLimitedDiceAvailableCount*, ::Class_2_48488E8DBD9F6BCE*))((::PBYTE)hIl2Cpp + CLASS_2_9536F1F16F34C5F4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9536F1F16F34C5F4_METHOD_2_51CFFE2AF748ECD7_OFFSET))(this);
	}
};
