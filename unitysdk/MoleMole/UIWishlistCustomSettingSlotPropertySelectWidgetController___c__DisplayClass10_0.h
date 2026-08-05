#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralFilterItemRowWidgetController; }
namespace MoleMole { class UIWishlistCustomSettingSlotPropertySelectWidgetController; }

#define MOLEMOLE_UIWISHLISTCUSTOMSETTINGSLOTPROPERTYSELECTWIDGETCONTROLLER___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x11E38C60)
#define MOLEMOLE_UIWISHLISTCUSTOMSETTINGSLOTPROPERTYSELECTWIDGETCONTROLLER___C__DISPLAYCLASS10_0__REFRESHVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x11E38C70)

namespace MoleMole
{
	inline static constexpr unsigned int UIWishlistCustomSettingSlotPropertySelectWidgetController___c__DisplayClass10_0_TypeDefinitionIndex = 89609;

	class UIWishlistCustomSettingSlotPropertySelectWidgetController___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::MoleMole::UIGeneralFilterItemRowWidgetController* itemCtrl; // 0x10
		::MoleMole::UIWishlistCustomSettingSlotPropertySelectWidgetController* __4__this; // 0x18
		::System::Int32 propertyId; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTCUSTOMSETTINGSLOTPROPERTYSELECTWIDGETCONTROLLER___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshView_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTCUSTOMSETTINGSLOTPROPERTYSELECTWIDGETCONTROLLER___C__DISPLAYCLASS10_0__REFRESHVIEW_B__0_OFFSET))(this);
		}
	};
}
