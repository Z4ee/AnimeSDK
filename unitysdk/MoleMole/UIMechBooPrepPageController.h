#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIMainCityStorePageController.h"

class Class_0_16E4307DCC419505_134;
class Class_2_14DA2AB09617B4AF;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIMECHBOOPREPPAGECONTROLLER_CLICKSCRIPTACTION_OFFSET UNITYSDK_OFFSET(0x15572E30)
#define MOLEMOLE_UIMECHBOOPREPPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x15571A80)
#define MOLEMOLE_UIMECHBOOPREPPAGECONTROLLER_GOTOSCRIPT_OFFSET UNITYSDK_OFFSET(0x15573800)
#define MOLEMOLE_UIMECHBOOPREPPAGECONTROLLER_ONCLICKTABBTN_OFFSET UNITYSDK_OFFSET(0x155725D0)
#define MOLEMOLE_UIMECHBOOPREPPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15571A90)
#define MOLEMOLE_UIMECHBOOPREPPAGECONTROLLER_ONOPENTIPSPANELBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x15573980)
#define MOLEMOLE_UIMECHBOOPREPPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15572560)
#define MOLEMOLE_UIMECHBOOPREPPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15571B20)
#define MOLEMOLE_UIMECHBOOPREPPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15572080)
#define MOLEMOLE_UIMECHBOOPREPPAGECONTROLLER_REFRESHSCRIPTLISTVIEW_OFFSET UNITYSDK_OFFSET(0x155726C0)
#define MOLEMOLE_UIMECHBOOPREPPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x155724C0)
#define MOLEMOLE_UIMECHBOOPREPPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15573A50)
#define MOLEMOLE_UIMECHBOOPREPPAGECONTROLLER__ONUIINIT_B__7_0_OFFSET UNITYSDK_OFFSET(0x15573AF0)
#define MOLEMOLE_UIMECHBOOPREPPAGECONTROLLER__ONUIINIT_B__7_1_OFFSET UNITYSDK_OFFSET(0x15573B00)
#define MOLEMOLE_UIMECHBOOPREPPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15573B10)
#define MOLEMOLE_UIMECHBOOPREPPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15573BA0)
#define MOLEMOLE_UIMECHBOOPREPPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15573BB0)
#define MOLEMOLE_UIMECHBOOPREPPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15573BC0)
#define MOLEMOLE_UIMECHBOOPREPPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x15573BD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMechBooPrepPageController_TypeDefinitionIndex = 45469;

	class UIMechBooPrepPageController : public ::MoleMole::UIMainCityStorePageController
	{
	public:
		// static const ::System::String* mechbooHardModelRecordKey; // 0x0
		// static const ::System::String* mechbooFreedomModelRecordKey; // 0x0
		::Class_2_14DA2AB09617B4AF* _view; // 0x320
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* _levelCtrlRootList; // 0x328
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_134*>* _curLevels; // 0x330
		::System::Int32 _curTabIndex; // 0x338

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

		::System::Void ClickScriptAction(::Class_0_16E4307DCC419505_134* levelInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_134*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPREPPAGECONTROLLER_CLICKSCRIPTACTION_OFFSET))(this, levelInfo);
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
