#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18AE1650)
#define MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER___C__DISPLAYCLASS12_0__SETDETAILSICONBTN_B__0_OFFSET UNITYSDK_OFFSET(0x18AE1660)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralItemUsePopWindowController___c__DisplayClass12_0_TypeDefinitionIndex = 55114;

	class UIGeneralItemUsePopWindowController___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::System::Action* onClick; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetDetailsIconBtn_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER___C__DISPLAYCLASS12_0__SETDETAILSICONBTN_B__0_OFFSET))(this);
		}
	};
}
