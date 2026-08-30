#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_1_D8BECDCE48063EC7;
namespace RPG::GameCore { class DiceCombatTaskConfig_WriteCustomValue_ModifierData; }

#define CLASS_2_6DA49A6BFBCD9355_METHOD_2_BA1BB49741CFDFE1_OFFSET UNITYSDK_OFFSET(0x19D2C3A0)
#define CLASS_2_6DA49A6BFBCD9355__CTOR_OFFSET UNITYSDK_OFFSET(0x19D2C390)

inline static constexpr unsigned int Class_2_6DA49A6BFBCD9355_TypeDefinitionIndex = 35680;

class Class_2_6DA49A6BFBCD9355 : public ::Class_1_B55037134F9E6688
{
public:
	::Class_1_D8BECDCE48063EC7* EEFMDEHLLFI; // 0x18
	::RPG::GameCore::DiceCombatTaskConfig_WriteCustomValue_ModifierData* IGHAHBNLIJA; // 0x20

	::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_WriteCustomValue_ModifierData* a1, ::Class_1_D8BECDCE48063EC7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_WriteCustomValue_ModifierData*, ::Class_1_D8BECDCE48063EC7*))((::PBYTE)hIl2Cpp + CLASS_2_6DA49A6BFBCD9355__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_BA1BB49741CFDFE1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6DA49A6BFBCD9355_METHOD_2_BA1BB49741CFDFE1_OFFSET))(this);
	}
};
