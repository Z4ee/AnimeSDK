#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18AE1690)
#define MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER___C__DISPLAYCLASS14_0__SETCONSOLEINFOBTN_B__0_OFFSET UNITYSDK_OFFSET(0x18AE16A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralItemUsePopWindowController___c__DisplayClass14_0_TypeDefinitionIndex = 55119;

	class UIGeneralItemUsePopWindowController___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::System::Action* onClick; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetConsoleInfoBtn_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER___C__DISPLAYCLASS14_0__SETCONSOLEINFOBTN_B__0_OFFSET))(this);
		}
	};
}
