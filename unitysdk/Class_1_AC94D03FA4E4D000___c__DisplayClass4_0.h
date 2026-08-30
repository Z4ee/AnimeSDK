#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_AC94D03FA4E4D000;
namespace RPG::Client { class Stage; }

#define CLASS_1_AC94D03FA4E4D000___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16B84600)
#define CLASS_1_AC94D03FA4E4D000___C__DISPLAYCLASS4_0__ENTERREGION_B__0_OFFSET UNITYSDK_OFFSET(0x16B898A0)

inline static constexpr unsigned int Class_1_AC94D03FA4E4D000___c__DisplayClass4_0_TypeDefinitionIndex = 60623;

class Class_1_AC94D03FA4E4D000___c__DisplayClass4_0 : public ::System::Object
{
public:
	::RPG::Client::Stage* currentStage; // 0x10
	::Class_1_AC94D03FA4E4D000* __4__this; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC94D03FA4E4D000___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
	}

	::System::Void _EnterRegion_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC94D03FA4E4D000___C__DISPLAYCLASS4_0__ENTERREGION_B__0_OFFSET))(this);
	}
};
