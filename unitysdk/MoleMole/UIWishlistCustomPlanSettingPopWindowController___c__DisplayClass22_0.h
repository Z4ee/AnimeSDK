#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIWishlistCustomPlanSettingPopWindowController; }
namespace MoleMole { class UIWishlistCustomSettingSliderItemWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIWISHLISTCUSTOMPLANSETTINGPOPWINDOWCONTROLLER___C__DISPLAYCLASS22_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15A85FC0)
#define MOLEMOLE_UIWISHLISTCUSTOMPLANSETTINGPOPWINDOWCONTROLLER___C__DISPLAYCLASS22_0__REFRESHSKILLTYPEVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x15A85FD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIWishlistCustomPlanSettingPopWindowController___c__DisplayClass22_0_TypeDefinitionIndex = 60360;

	class UIWishlistCustomPlanSettingPopWindowController___c__DisplayClass22_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::UIWishlistCustomSettingSliderItemWidgetController*>* skillSliderItemList; // 0x10
		::MoleMole::UIWishlistCustomPlanSettingPopWindowController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTCUSTOMPLANSETTINGPOPWINDOWCONTROLLER___C__DISPLAYCLASS22_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshSkillTypeView_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTCUSTOMPLANSETTINGPOPWINDOWCONTROLLER___C__DISPLAYCLASS22_0__REFRESHSKILLTYPEVIEW_B__0_OFFSET))(this);
		}
	};
}
