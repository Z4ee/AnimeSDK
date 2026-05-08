#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIAntiqueLevelUpPopWindowController; }
namespace System { class Action; }

#define MOLEMOLE_UIANTIQUELEVELUPPOPWINDOWCONTROLLER___C__DISPLAYCLASS19_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1561E190)
#define MOLEMOLE_UIANTIQUELEVELUPPOPWINDOWCONTROLLER___C__DISPLAYCLASS19_0__REFRESHLEVELTXTVIEW_B__10_OFFSET UNITYSDK_OFFSET(0x1561E1F0)
#define MOLEMOLE_UIANTIQUELEVELUPPOPWINDOWCONTROLLER___C__DISPLAYCLASS19_0__REFRESHLEVELTXTVIEW_B__3_OFFSET UNITYSDK_OFFSET(0x1561E1A0)
#define MOLEMOLE_UIANTIQUELEVELUPPOPWINDOWCONTROLLER___C__DISPLAYCLASS19_0__REFRESHLEVELTXTVIEW_B__7_OFFSET UNITYSDK_OFFSET(0x1561E2D0)
#define MOLEMOLE_UIANTIQUELEVELUPPOPWINDOWCONTROLLER___C__DISPLAYCLASS19_0__REFRESHLEVELTXTVIEW_G__ONPROGRESS_0_OFFSET UNITYSDK_OFFSET(0x1561E2F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAntiqueLevelUpPopWindowController___c__DisplayClass19_0_TypeDefinitionIndex = 77811;

	class UIAntiqueLevelUpPopWindowController___c__DisplayClass19_0 : public ::System::Object
	{
	public:
		::System::Action* __9__10; // 0x10
		::MoleMole::UIAntiqueLevelUpPopWindowController* __4__this; // 0x18
		::System::Int32 remainExp; // 0x20
		::System::Int32 expNeededForNxtLv; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANTIQUELEVELUPPOPWINDOWCONTROLLER___C__DISPLAYCLASS19_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshLevelTxtView_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANTIQUELEVELUPPOPWINDOWCONTROLLER___C__DISPLAYCLASS19_0__REFRESHLEVELTXTVIEW_B__3_OFFSET))(this);
		}

		::System::Void _RefreshLevelTxtView_b__10()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANTIQUELEVELUPPOPWINDOWCONTROLLER___C__DISPLAYCLASS19_0__REFRESHLEVELTXTVIEW_B__10_OFFSET))(this);
		}

		::System::Void _RefreshLevelTxtView_b__7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANTIQUELEVELUPPOPWINDOWCONTROLLER___C__DISPLAYCLASS19_0__REFRESHLEVELTXTVIEW_B__7_OFFSET))(this);
		}

		::System::Void _RefreshLevelTxtView_g__OnProgress_0(::System::Single progress)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANTIQUELEVELUPPOPWINDOWCONTROLLER___C__DISPLAYCLASS19_0__REFRESHLEVELTXTVIEW_G__ONPROGRESS_0_OFFSET))(this, progress);
		}
	};
}
