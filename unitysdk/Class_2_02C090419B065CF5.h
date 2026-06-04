#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_1_D8BECDCE48063EC7;
namespace RPG::GameCore { class DiceCombatTaskConfig_WriteCustomValue; }

#define CLASS_2_02C090419B065CF5_METHOD_2_289F28027FF47717_OFFSET UNITYSDK_OFFSET(0x18A154A0)
#define CLASS_2_02C090419B065CF5__CTOR_OFFSET UNITYSDK_OFFSET(0x18A15490)

inline static constexpr unsigned int Class_2_02C090419B065CF5_TypeDefinitionIndex = 34439;

class Class_2_02C090419B065CF5 : public ::Class_1_B55037134F9E6688
{
public:
	::Class_1_D8BECDCE48063EC7* Field_2_0; // 0x18
	::RPG::GameCore::DiceCombatTaskConfig_WriteCustomValue* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_WriteCustomValue* a1, ::Class_1_D8BECDCE48063EC7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_WriteCustomValue*, ::Class_1_D8BECDCE48063EC7*))((::PBYTE)hIl2Cpp + CLASS_2_02C090419B065CF5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_289F28027FF47717()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_02C090419B065CF5_METHOD_2_289F28027FF47717_OFFSET))(this);
	}
};
