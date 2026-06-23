#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_12FCF630ACFD46F6.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_1_0D6706375CDAAE8C;
class Class_1_1685EC66FBD28897;
class Class_2_F145AD2BDA997EC0;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIGENERALREWARDBAGPOPWINDOWCONTROLLER_CLICKTAKE_OFFSET UNITYSDK_OFFSET(0x16F716F0)
#define MOLEMOLE_UIGENERALREWARDBAGPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x16F70DA0)
#define MOLEMOLE_UIGENERALREWARDBAGPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16F710E0)
#define MOLEMOLE_UIGENERALREWARDBAGPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16F71170)
#define MOLEMOLE_UIGENERALREWARDBAGPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16F70DB0)
#define MOLEMOLE_UIGENERALREWARDBAGPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16F70E00)
#define MOLEMOLE_UIGENERALREWARDBAGPOPWINDOWCONTROLLER_SETGROCERYACTIVITYREWARDS_OFFSET UNITYSDK_OFFSET(0x16F711E0)
#define MOLEMOLE_UIGENERALREWARDBAGPOPWINDOWCONTROLLER_SETGROYCERYACTIVITYSTATUS_OFFSET UNITYSDK_OFFSET(0x16F713B0)
#define MOLEMOLE_UIGENERALREWARDBAGPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16F71750)
#define MOLEMOLE_UIGENERALREWARDBAGPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16F71760)
#define MOLEMOLE_UIGENERALREWARDBAGPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16F717F0)
#define MOLEMOLE_UIGENERALREWARDBAGPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16F71800)
#define MOLEMOLE_UIGENERALREWARDBAGPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16F71810)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralRewardBagPopWindowController_TypeDefinitionIndex = 47382;

	class UIGeneralRewardBagPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_F145AD2BDA997EC0* _view; // 0x318
		::System::Action* clickCallback; // 0x320
		::System::Collections::Generic::List_1<::Class_1_1685EC66FBD28897*>* itemViewList; // 0x328

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALREWARDBAGPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALREWARDBAGPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALREWARDBAGPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALREWARDBAGPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALREWARDBAGPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALREWARDBAGPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetGroceryActivityRewards(::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* itemList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALREWARDBAGPOPWINDOWCONTROLLER_SETGROCERYACTIVITYREWARDS_OFFSET))(this, itemList);
		}

		::System::Void SetGroyceryActivityStatus(::Enum_3_12FCF630ACFD46F6 stateEnum, ::System::String* showString, ::System::Action* callBack)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_12FCF630ACFD46F6, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALREWARDBAGPOPWINDOWCONTROLLER_SETGROYCERYACTIVITYSTATUS_OFFSET))(this, stateEnum, showString, callBack);
		}

		::System::Void ClickTake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALREWARDBAGPOPWINDOWCONTROLLER_CLICKTAKE_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALREWARDBAGPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALREWARDBAGPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALREWARDBAGPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALREWARDBAGPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
