#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_80745CA250F26994;
class Class_2_0C58AD91B0F4D809;

#define CLASS_1_80745CA250F26994___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x119649E0)
#define CLASS_1_80745CA250F26994___C__DISPLAYCLASS9_0___DEPLOYSWITCHPLATFORMTRIGGER_B__0_OFFSET UNITYSDK_OFFSET(0x119661F0)
#define CLASS_1_80745CA250F26994___C__DISPLAYCLASS9_0___DEPLOYSWITCHPLATFORMTRIGGER_B__1_OFFSET UNITYSDK_OFFSET(0x119662E0)

inline static constexpr unsigned int Class_1_80745CA250F26994___c__DisplayClass9_0_TypeDefinitionIndex = 70534;

class Class_1_80745CA250F26994___c__DisplayClass9_0 : public ::System::Object
{
public:
	::Class_1_80745CA250F26994* __4__this; // 0x10
	::Class_2_0C58AD91B0F4D809* entity; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_80745CA250F26994___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
	}

	::System::Void __DeploySwitchPlatformTrigger_b__0(::Class_2_0C58AD91B0F4D809* triggerEntity)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0C58AD91B0F4D809*))((::PBYTE)hIl2Cpp + CLASS_1_80745CA250F26994___C__DISPLAYCLASS9_0___DEPLOYSWITCHPLATFORMTRIGGER_B__0_OFFSET))(this, triggerEntity);
	}

	::System::Void __DeploySwitchPlatformTrigger_b__1(::Class_2_0C58AD91B0F4D809* triggerEntity)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0C58AD91B0F4D809*))((::PBYTE)hIl2Cpp + CLASS_1_80745CA250F26994___C__DISPLAYCLASS9_0___DEPLOYSWITCHPLATFORMTRIGGER_B__1_OFFSET))(this, triggerEntity);
	}
};
