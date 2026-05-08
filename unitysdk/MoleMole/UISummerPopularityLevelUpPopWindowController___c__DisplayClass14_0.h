#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UISummerPopularityLevelUpPopWindowController; }
namespace System { class Action; }

#define MOLEMOLE_UISUMMERPOPULARITYLEVELUPPOPWINDOWCONTROLLER___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0x11B7E430)
#define MOLEMOLE_UISUMMERPOPULARITYLEVELUPPOPWINDOWCONTROLLER___C__DISPLAYCLASS14_0__REFRESHLEVELTXTVIEW_B__10_OFFSET UNITYSDK_OFFSET(0x11B7E490)
#define MOLEMOLE_UISUMMERPOPULARITYLEVELUPPOPWINDOWCONTROLLER___C__DISPLAYCLASS14_0__REFRESHLEVELTXTVIEW_B__3_OFFSET UNITYSDK_OFFSET(0x11B7E440)
#define MOLEMOLE_UISUMMERPOPULARITYLEVELUPPOPWINDOWCONTROLLER___C__DISPLAYCLASS14_0__REFRESHLEVELTXTVIEW_B__7_OFFSET UNITYSDK_OFFSET(0x11B7E570)
#define MOLEMOLE_UISUMMERPOPULARITYLEVELUPPOPWINDOWCONTROLLER___C__DISPLAYCLASS14_0__REFRESHLEVELTXTVIEW_G__ONPROGRESS_0_OFFSET UNITYSDK_OFFSET(0x11B7E590)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerPopularityLevelUpPopWindowController___c__DisplayClass14_0_TypeDefinitionIndex = 69963;

	class UISummerPopularityLevelUpPopWindowController___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::MoleMole::UISummerPopularityLevelUpPopWindowController* __4__this; // 0x10
		::System::Action* __9__10; // 0x18
		::System::UInt32 expNeededForNxtLv; // 0x20
		::System::UInt32 remainExp; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERPOPULARITYLEVELUPPOPWINDOWCONTROLLER___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshLevelTxtView_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERPOPULARITYLEVELUPPOPWINDOWCONTROLLER___C__DISPLAYCLASS14_0__REFRESHLEVELTXTVIEW_B__3_OFFSET))(this);
		}

		::System::Void _RefreshLevelTxtView_b__10()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERPOPULARITYLEVELUPPOPWINDOWCONTROLLER___C__DISPLAYCLASS14_0__REFRESHLEVELTXTVIEW_B__10_OFFSET))(this);
		}

		::System::Void _RefreshLevelTxtView_b__7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERPOPULARITYLEVELUPPOPWINDOWCONTROLLER___C__DISPLAYCLASS14_0__REFRESHLEVELTXTVIEW_B__7_OFFSET))(this);
		}

		::System::Void _RefreshLevelTxtView_g__OnProgress_0(::System::Single progress)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERPOPULARITYLEVELUPPOPWINDOWCONTROLLER___C__DISPLAYCLASS14_0__REFRESHLEVELTXTVIEW_G__ONPROGRESS_0_OFFSET))(this, progress);
		}
	};
}
