#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIAbyssS2EventPageController; }

#define MOLEMOLE_UIABYSSS2EVENTPAGECONTROLLER___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15605810)
#define MOLEMOLE_UIABYSSS2EVENTPAGECONTROLLER___C__DISPLAYCLASS12_0__ONABYSSS2EVENTSELECT_B__0_OFFSET UNITYSDK_OFFSET(0x15605820)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2EventPageController___c__DisplayClass12_0_TypeDefinitionIndex = 82029;

	class UIAbyssS2EventPageController___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::MoleMole::UIAbyssS2EventPageController* __4__this; // 0x10
		::System::Int32 index; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2EVENTPAGECONTROLLER___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnAbyssS2EventSelect_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2EVENTPAGECONTROLLER___C__DISPLAYCLASS12_0__ONABYSSS2EVENTSELECT_B__0_OFFSET))(this);
		}
	};
}
