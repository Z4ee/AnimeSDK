#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_C9C16EB5BD29B049;

#define MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER___C__DISPLAYCLASS26_0__CTOR_OFFSET UNITYSDK_OFFSET(0x183B1A10)
#define MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER___C__DISPLAYCLASS26_0__TRYPLAYANIM_B__0_OFFSET UNITYSDK_OFFSET(0x183B1A20)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2EntrancePageController___c__DisplayClass26_0_TypeDefinitionIndex = 54793;

	class UIAbyssS2EntrancePageController___c__DisplayClass26_0 : public ::System::Object
	{
	public:
		::Class_3_C9C16EB5BD29B049* groupBaseData; // 0x10
		::System::Int32 reminderID; // 0x18
		::System::Int32 reqExp; // 0x1C
		::System::Int32 reqPointLimitNum; // 0x20
		::System::Int32 reqPointNum; // 0x24
		::System::Int32 reqDutyNum; // 0x28
		::System::Boolean reqShowNestHard; // 0x2C
		::System::Int32 curLevel; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER___C__DISPLAYCLASS26_0__CTOR_OFFSET))(this);
		}

		::System::Void _TryPlayAnim_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER___C__DISPLAYCLASS26_0__TRYPLAYANIM_B__0_OFFSET))(this);
		}
	};
}
