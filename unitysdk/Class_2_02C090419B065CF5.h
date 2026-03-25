#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_1_B1A7D8EBAB39D13D;
namespace RPG::GameCore { class DiceCombatTaskConfig_WriteCustomValue; }

#define CLASS_2_02C090419B065CF5_METHOD_2_289F28027FF47717_OFFSET UNITYSDK_OFFSET(0x1661F780)
#define CLASS_2_02C090419B065CF5__CTOR_OFFSET UNITYSDK_OFFSET(0x1661F770)

inline static constexpr unsigned int Class_2_02C090419B065CF5_TypeDefinitionIndex = 28477;

class Class_2_02C090419B065CF5 : public ::Class_1_B55037134F9E6688
{
public:
	::RPG::GameCore::DiceCombatTaskConfig_WriteCustomValue* Field_2_0; // 0x18
	::Class_1_B1A7D8EBAB39D13D* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_WriteCustomValue* a1, ::Class_1_B1A7D8EBAB39D13D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_WriteCustomValue*, ::Class_1_B1A7D8EBAB39D13D*))((::PBYTE)hIl2Cpp + CLASS_2_02C090419B065CF5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_289F28027FF47717()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_02C090419B065CF5_METHOD_2_289F28027FF47717_OFFSET))(this);
	}
};
