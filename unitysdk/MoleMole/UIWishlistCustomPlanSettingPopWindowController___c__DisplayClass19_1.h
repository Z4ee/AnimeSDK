#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIWishlistCustomPlanSettingPopWindowController___c__DisplayClass19_0; }

#define MOLEMOLE_UIWISHLISTCUSTOMPLANSETTINGPOPWINDOWCONTROLLER___C__DISPLAYCLASS19_1__CTOR_OFFSET UNITYSDK_OFFSET(0x16DF60D0)
#define MOLEMOLE_UIWISHLISTCUSTOMPLANSETTINGPOPWINDOWCONTROLLER___C__DISPLAYCLASS19_1__REFRESHAVATARTYPEVIEW_B__1_OFFSET UNITYSDK_OFFSET(0x16DF60E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIWishlistCustomPlanSettingPopWindowController___c__DisplayClass19_1_TypeDefinitionIndex = 87240;

	class UIWishlistCustomPlanSettingPopWindowController___c__DisplayClass19_1 : public ::System::Object
	{
	public:
		::MoleMole::UIWishlistCustomPlanSettingPopWindowController___c__DisplayClass19_0* CS___8__locals1; // 0x10
		::System::UInt32 maxLevel; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTCUSTOMPLANSETTINGPOPWINDOWCONTROLLER___C__DISPLAYCLASS19_1__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshAvatarTypeView_b__1(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTCUSTOMPLANSETTINGPOPWINDOWCONTROLLER___C__DISPLAYCLASS19_1__REFRESHAVATARTYPEVIEW_B__1_OFFSET))(this, value);
		}
	};
}
