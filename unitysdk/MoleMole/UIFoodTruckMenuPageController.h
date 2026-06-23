#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIFoodTruckMenuPageController_EOrderType.h"
#include "unitysdk/MoleMole/UIMainCityStorePageController.h"

class Class_1_D375C91CCE5D3999;
class Class_2_208CC9941471731A_488;
class Class_2_7B15B3118FE590CD_27;
class Class_2_7B15B3118FE590CD_27_Class_2_2B4A80331696625A_6;
class Class_3_3C9E752A71CB25A2;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIFoodTruckMenuPageController_Order; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER_GETACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x166CCE10)
#define MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x166CC960)
#define MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER_ONCLOSECLICK_OFFSET UNITYSDK_OFFSET(0x166CE2C0)
#define MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x166CCA10)
#define MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER_ONOKBTNCLICK_LOGIC_OFFSET UNITYSDK_OFFSET(0x166CE480)
#define MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER_ONOKBTNCLICK_OFFSET UNITYSDK_OFFSET(0x166CE430)
#define MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER_ONSELECT_OFFSET UNITYSDK_OFFSET(0x166CE220)
#define MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x166CE040)
#define MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x166CCDA0)
#define MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x166CCAA0)
#define MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x166CCF60)
#define MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER_REFRESHORDER_OFFSET UNITYSDK_OFFSET(0x166CD670)
#define MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x166CC970)
#define MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x166CE1B0)
#define MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x166CF170)
#define MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x166CF2B0)
#define MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x166CF340)
#define MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x166CF350)
#define MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x166CF360)
#define MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x166CF370)
#define MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x166CF380)

namespace MoleMole
{
	inline static constexpr unsigned int UIFoodTruckMenuPageController_TypeDefinitionIndex = 63717;

	class UIFoodTruckMenuPageController : public ::MoleMole::UIMainCityStorePageController
	{
	public:
		// static const ::System::Int32 HAPPY_ACTION = 0x7335D; // 0x0
		// static const ::System::Int32 SAD_ACTION = 0x7335E; // 0x0
		::MoleMole::UIFoodTruckMenuPageController_EOrderType OrderType; // 0x328
		::System::Collections::Generic::List_1<::MoleMole::UIFoodTruckMenuPageController_Order*>* _orders; // 0x330
		::System::Int32 _currentIndex; // 0x338
		::System::Action_1<::System::Boolean>* _onClose; // 0x340
		::Class_2_7B15B3118FE590CD_27* _view; // 0x348
		::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_488*>* _dishList; // 0x350
		::System::Collections::Generic::List_1<::Class_2_7B15B3118FE590CD_27_Class_2_2B4A80331696625A_6*>* _tagWidgetList; // 0x358
		::System::Int32 CurrentSelectIndex; // 0x360
		::System::Boolean Erroring; // 0x364
		::Class_3_3C9E752A71CB25A2* _log; // 0x368
		::System::Boolean _success; // 0x370

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::Class_1_D375C91CCE5D3999* GetActivityData()
		{
			return ((::Class_1_D375C91CCE5D3999*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER_GETACTIVITYDATA_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void OnSelect(::System::Int32 dishIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER_ONSELECT_OFFSET))(this, dishIndex);
		}

		::System::Void OnCloseClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER_ONCLOSECLICK_OFFSET))(this);
		}

		::System::Void OnOkBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER_ONOKBTNCLICK_OFFSET))(this);
		}

		::System::Void OnOkBtnClick_Logic()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER_ONOKBTNCLICK_LOGIC_OFFSET))(this);
		}

		::System::Void RefreshOrder(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER_REFRESHORDER_OFFSET))(this, index);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void __base_SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET))(this);
		}
	};
}
