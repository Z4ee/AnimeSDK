#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralIntimacyChangeWidgetController; }
namespace MoleMole { class UIGeneralIntimacyUpPopWindowController; }
namespace System { class Action; }

#define MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0x195FA260)
#define MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER___C__DISPLAYCLASS14_0__REFRESHVIEW_B__1_OFFSET UNITYSDK_OFFSET(0x195FA270)
#define MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER___C__DISPLAYCLASS14_0__REFRESHVIEW_B__2_OFFSET UNITYSDK_OFFSET(0x195FA300)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralIntimacyUpPopWindowController___c__DisplayClass14_0_TypeDefinitionIndex = 66241;

	class UIGeneralIntimacyUpPopWindowController___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::MoleMole::UIGeneralIntimacyUpPopWindowController* __4__this; // 0x10
		::MoleMole::UIGeneralIntimacyChangeWidgetController* widget; // 0x18
		::System::Action* __9__2; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshView_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER___C__DISPLAYCLASS14_0__REFRESHVIEW_B__1_OFFSET))(this);
		}

		::System::Void _RefreshView_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER___C__DISPLAYCLASS14_0__REFRESHVIEW_B__2_OFFSET))(this);
		}
	};
}
