#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UISummerFishPlayPageController_ECloseReason.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UISummerFishPlayPageController; }
namespace System { class Action; }

#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER___C__DISPLAYCLASS14_0__CLOSEUI_B__0_OFFSET UNITYSDK_OFFSET(0x1889CB30)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER___C__DISPLAYCLASS14_0__CLOSEUI_B__1_OFFSET UNITYSDK_OFFSET(0x1889CDA0)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1889CB20)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerFishPlayPageController___c__DisplayClass14_0_TypeDefinitionIndex = 54759;

	class UISummerFishPlayPageController___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::System::Action* __9__1; // 0x10
		::MoleMole::UISummerFishPlayPageController* __4__this; // 0x18
		::MoleMole::UISummerFishPlayPageController_ECloseReason reason; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
		}

		::System::Void _CloseUI_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER___C__DISPLAYCLASS14_0__CLOSEUI_B__0_OFFSET))(this);
		}

		::System::Void _CloseUI_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER___C__DISPLAYCLASS14_0__CLOSEUI_B__1_OFFSET))(this);
		}
	};
}
