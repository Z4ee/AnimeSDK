#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIWishlistCustomPlanSettingPopWindowController; }
namespace MoleMole { class UIWishlistCustomSettingSliderItemWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIWISHLISTCUSTOMPLANSETTINGPOPWINDOWCONTROLLER___C__DISPLAYCLASS22_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14907300)
#define MOLEMOLE_UIWISHLISTCUSTOMPLANSETTINGPOPWINDOWCONTROLLER___C__DISPLAYCLASS22_0__REFRESHSKILLTYPEVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x14907310)

namespace MoleMole
{
	inline static constexpr unsigned int UIWishlistCustomPlanSettingPopWindowController___c__DisplayClass22_0_TypeDefinitionIndex = 87237;

	class UIWishlistCustomPlanSettingPopWindowController___c__DisplayClass22_0 : public ::System::Object
	{
	public:
		::MoleMole::UIWishlistCustomPlanSettingPopWindowController* __4__this; // 0x10
		::System::Collections::Generic::List_1<::MoleMole::UIWishlistCustomSettingSliderItemWidgetController*>* skillSliderItemList; // 0x18

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
