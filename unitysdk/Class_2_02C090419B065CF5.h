#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_1_D8BECDCE48063EC7;
namespace RPG::GameCore { class DiceCombatTaskConfig_WriteCustomValue; }

#define CLASS_2_02C090419B065CF5_METHOD_2_735EE20B25F86BF4_OFFSET UNITYSDK_OFFSET(0x1C0F2450)
#define CLASS_2_02C090419B065CF5__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0F2440)

inline static constexpr unsigned int Class_2_02C090419B065CF5_TypeDefinitionIndex = 35682;

class Class_2_02C090419B065CF5 : public ::Class_1_B55037134F9E6688
{
public:
	::Class_1_D8BECDCE48063EC7* EEFMDEHLLFI; // 0x18
	::RPG::GameCore::DiceCombatTaskConfig_WriteCustomValue* IGHAHBNLIJA; // 0x20

	::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_WriteCustomValue* a1, ::Class_1_D8BECDCE48063EC7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_WriteCustomValue*, ::Class_1_D8BECDCE48063EC7*))((::PBYTE)hIl2Cpp + CLASS_2_02C090419B065CF5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_735EE20B25F86BF4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_02C090419B065CF5_METHOD_2_735EE20B25F86BF4_OFFSET))(this);
	}
};
