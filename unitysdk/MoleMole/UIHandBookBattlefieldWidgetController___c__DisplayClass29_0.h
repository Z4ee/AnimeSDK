#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIHandBookBattlefieldWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIHANDBOOKBATTLEFIELDWIDGETCONTROLLER___C__DISPLAYCLASS29_0__CTOR_OFFSET UNITYSDK_OFFSET(0x184183C0)
#define MOLEMOLE_UIHANDBOOKBATTLEFIELDWIDGETCONTROLLER___C__DISPLAYCLASS29_0__ONSHOPBTNCLICK_B__0_OFFSET UNITYSDK_OFFSET(0x184183D0)
#define MOLEMOLE_UIHANDBOOKBATTLEFIELDWIDGETCONTROLLER___C__DISPLAYCLASS29_0__ONSHOPBTNCLICK_B__1_OFFSET UNITYSDK_OFFSET(0x18418700)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookBattlefieldWidgetController___c__DisplayClass29_0_TypeDefinitionIndex = 50465;

	class UIHandBookBattlefieldWidgetController___c__DisplayClass29_0 : public ::System::Object
	{
	public:
		::MoleMole::UIHandBookBattlefieldWidgetController* __4__this; // 0x10
		::System::Action* __9__1; // 0x18
		::System::Int32 shopId; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKBATTLEFIELDWIDGETCONTROLLER___C__DISPLAYCLASS29_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnShopBtnClick_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKBATTLEFIELDWIDGETCONTROLLER___C__DISPLAYCLASS29_0__ONSHOPBTNCLICK_B__0_OFFSET))(this);
		}

		::System::Void _OnShopBtnClick_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKBATTLEFIELDWIDGETCONTROLLER___C__DISPLAYCLASS29_0__ONSHOPBTNCLICK_B__1_OFFSET))(this);
		}
	};
}
