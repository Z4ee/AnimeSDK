#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_C9C16EB5BD29B049;

#define MOLEMOLE_UIABYSSENTRANCEPAGECONTROLLER___C__DISPLAYCLASS66_0__CTOR_OFFSET UNITYSDK_OFFSET(0x13868320)
#define MOLEMOLE_UIABYSSENTRANCEPAGECONTROLLER___C__DISPLAYCLASS66_0__TRYPLAYANIM_B__0_OFFSET UNITYSDK_OFFSET(0x13868330)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssEntrancePageController___c__DisplayClass66_0_TypeDefinitionIndex = 57574;

	class UIAbyssEntrancePageController___c__DisplayClass66_0 : public ::System::Object
	{
	public:
		::Class_3_C9C16EB5BD29B049* groupBaseData; // 0x10
		::System::Int32 reminderID; // 0x18
		::System::Int32 reqExp; // 0x1C
		::System::Int32 reqPointNum; // 0x20
		::System::Int32 reqDutyNum; // 0x24
		::System::Int32 reqPointLimitNum; // 0x28
		::System::Int32 curLevel; // 0x2C
		::System::Boolean reqShowNestHard; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSENTRANCEPAGECONTROLLER___C__DISPLAYCLASS66_0__CTOR_OFFSET))(this);
		}

		::System::Void _TryPlayAnim_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSENTRANCEPAGECONTROLLER___C__DISPLAYCLASS66_0__TRYPLAYANIM_B__0_OFFSET))(this);
		}
	};
}
