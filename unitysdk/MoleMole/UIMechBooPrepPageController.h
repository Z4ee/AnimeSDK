#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIMainCityStorePageController.h"

class Class_0_16E4307DCC419505_169;
class Class_2_14DA2AB09617B4AF;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIMECHBOOPREPPAGECONTROLLER_CLICKSCRIPTACTION_OFFSET UNITYSDK_OFFSET(0x178B1300)
#define MOLEMOLE_UIMECHBOOPREPPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x178AFF50)
#define MOLEMOLE_UIMECHBOOPREPPAGECONTROLLER_GOTOSCRIPT_OFFSET UNITYSDK_OFFSET(0x178B1CD0)
#define MOLEMOLE_UIMECHBOOPREPPAGECONTROLLER_ONCLICKTABBTN_OFFSET UNITYSDK_OFFSET(0x178B0AA0)
#define MOLEMOLE_UIMECHBOOPREPPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x178AFF60)
#define MOLEMOLE_UIMECHBOOPREPPAGECONTROLLER_ONOPENTIPSPANELBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x178B1E40)
#define MOLEMOLE_UIMECHBOOPREPPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x178B0A30)
#define MOLEMOLE_UIMECHBOOPREPPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x178AFFF0)
#define MOLEMOLE_UIMECHBOOPREPPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x178B0550)
#define MOLEMOLE_UIMECHBOOPREPPAGECONTROLLER_REFRESHSCRIPTLISTVIEW_OFFSET UNITYSDK_OFFSET(0x178B0B90)
#define MOLEMOLE_UIMECHBOOPREPPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x178B0990)
#define MOLEMOLE_UIMECHBOOPREPPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x178B1F10)
#define MOLEMOLE_UIMECHBOOPREPPAGECONTROLLER__ONUIINIT_B__7_0_OFFSET UNITYSDK_OFFSET(0x178B1FB0)
#define MOLEMOLE_UIMECHBOOPREPPAGECONTROLLER__ONUIINIT_B__7_1_OFFSET UNITYSDK_OFFSET(0x178B1FC0)
#define MOLEMOLE_UIMECHBOOPREPPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x178B1FD0)
#define MOLEMOLE_UIMECHBOOPREPPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x178B2060)
#define MOLEMOLE_UIMECHBOOPREPPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x178B2070)
#define MOLEMOLE_UIMECHBOOPREPPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x178B2080)
#define MOLEMOLE_UIMECHBOOPREPPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x178B2090)

namespace MoleMole
{
	inline static constexpr unsigned int UIMechBooPrepPageController_TypeDefinitionIndex = 73535;

	class UIMechBooPrepPageController : public ::MoleMole::UIMainCityStorePageController
	{
	public:
		// static const ::System::String* mechbooHardModelRecordKey; // 0x0
		// static const ::System::String* mechbooFreedomModelRecordKey; // 0x0
		::Class_2_14DA2AB09617B4AF* _view; // 0x328
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* _levelCtrlRootList; // 0x330
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_169*>* _curLevels; // 0x338
		::System::Int32 _curTabIndex; // 0x340

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPREPPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPREPPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPREPPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPREPPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPREPPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPREPPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPREPPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnClickTabBtn(::System::Int32 tabIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPREPPAGECONTROLLER_ONCLICKTABBTN_OFFSET))(this, tabIndex);
		}

		::System::Void RefreshScriptListView(::System::Boolean isSimple)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPREPPAGECONTROLLER_REFRESHSCRIPTLISTVIEW_OFFSET))(this, isSimple);
		}

		::System::Void ClickScriptAction(::Class_0_16E4307DCC419505_169* levelInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_169*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPREPPAGECONTROLLER_CLICKSCRIPTACTION_OFFSET))(this, levelInfo);
		}

		::System::Void GotoScript(::System::Int32 scriptID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPREPPAGECONTROLLER_GOTOSCRIPT_OFFSET))(this, scriptID);
		}

		::System::Void OnOpenTipsPanelButtonClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPREPPAGECONTROLLER_ONOPENTIPSPANELBUTTONCLICK_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__7_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPREPPAGECONTROLLER__ONUIINIT_B__7_0_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__7_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPREPPAGECONTROLLER__ONUIINIT_B__7_1_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPREPPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPREPPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPREPPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPREPPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void __base_SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPREPPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET))(this);
		}
	};
}
