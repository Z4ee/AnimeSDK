#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_1_D8BECDCE48063EC7;
namespace RPG::GameCore { class DiceCombatTaskConfig_WriteCustomValue_ModifierData; }

#define CLASS_2_6DA49A6BFBCD9355_METHOD_2_5BCE9210F4ACDD0B_OFFSET UNITYSDK_OFFSET(0x18B6BFE0)
#define CLASS_2_6DA49A6BFBCD9355__CTOR_OFFSET UNITYSDK_OFFSET(0x18B6BFD0)

inline static constexpr unsigned int Class_2_6DA49A6BFBCD9355_TypeDefinitionIndex = 34437;

class Class_2_6DA49A6BFBCD9355 : public ::Class_1_B55037134F9E6688
{
public:
	::RPG::GameCore::DiceCombatTaskConfig_WriteCustomValue_ModifierData* Field_2_0; // 0x18
	::Class_1_D8BECDCE48063EC7* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_WriteCustomValue_ModifierData* a1, ::Class_1_D8BECDCE48063EC7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_WriteCustomValue_ModifierData*, ::Class_1_D8BECDCE48063EC7*))((::PBYTE)hIl2Cpp + CLASS_2_6DA49A6BFBCD9355__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5BCE9210F4ACDD0B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6DA49A6BFBCD9355_METHOD_2_5BCE9210F4ACDD0B_OFFSET))(this);
	}
};
