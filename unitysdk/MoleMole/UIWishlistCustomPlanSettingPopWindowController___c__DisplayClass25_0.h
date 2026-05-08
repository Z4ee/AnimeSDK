#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIWishlistCustomPlanSettingPopWindowController; }
namespace MoleMole { class UIWishlistCustomSettingSlotPropertySelectWidgetController; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIWISHLISTCUSTOMPLANSETTINGPOPWINDOWCONTROLLER___C__DISPLAYCLASS25_0__CTOR_OFFSET UNITYSDK_OFFSET(0xE856760)
#define MOLEMOLE_UIWISHLISTCUSTOMPLANSETTINGPOPWINDOWCONTROLLER___C__DISPLAYCLASS25_0__REFRESHSUITTYPEVIEW_B__0_OFFSET UNITYSDK_OFFSET(0xE856A20)
#define MOLEMOLE_UIWISHLISTCUSTOMPLANSETTINGPOPWINDOWCONTROLLER___C__DISPLAYCLASS25_0__REFRESHSUITTYPEVIEW_B__1_OFFSET UNITYSDK_OFFSET(0xE856770)
#define MOLEMOLE_UIWISHLISTCUSTOMPLANSETTINGPOPWINDOWCONTROLLER___C__DISPLAYCLASS25_0__REFRESHSUITTYPEVIEW_B__2_OFFSET UNITYSDK_OFFSET(0xE856890)

namespace MoleMole
{
	inline static constexpr unsigned int UIWishlistCustomPlanSettingPopWindowController___c__DisplayClass25_0_TypeDefinitionIndex = 49362;

	class UIWishlistCustomPlanSettingPopWindowController___c__DisplayClass25_0 : public ::System::Object
	{
	public:
		::System::Action_2<::System::Int32, ::System::UInt32>* __9__2; // 0x10
		::MoleMole::UIWishlistCustomPlanSettingPopWindowController* __4__this; // 0x18
		::System::Collections::Generic::List_1<::MoleMole::UIWishlistCustomSettingSlotPropertySelectWidgetController*>* propertySelectWidgetList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTCUSTOMPLANSETTINGPOPWINDOWCONTROLLER___C__DISPLAYCLASS25_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshSuitTypeView_b__1(::System::Collections::Generic::List_1<::System::UInt32>* suitIds)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTCUSTOMPLANSETTINGPOPWINDOWCONTROLLER___C__DISPLAYCLASS25_0__REFRESHSUITTYPEVIEW_B__1_OFFSET))(this, suitIds);
		}

		::System::Void _RefreshSuitTypeView_b__2(::System::Int32 slot, ::System::UInt32 propertyId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTCUSTOMPLANSETTINGPOPWINDOWCONTROLLER___C__DISPLAYCLASS25_0__REFRESHSUITTYPEVIEW_B__2_OFFSET))(this, slot, propertyId);
		}

		::System::Void _RefreshSuitTypeView_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTCUSTOMPLANSETTINGPOPWINDOWCONTROLLER___C__DISPLAYCLASS25_0__REFRESHSUITTYPEVIEW_B__0_OFFSET))(this);
		}
	};
}
