#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_8E90989A26BC6232.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_1A39E1B51756BF41;
class Class_2_208CC9941471731A_132;
class Class_2_7D1DE6036DD3565B;
class Class_2_D691CC1724747647_Class_1_5B726373488B4D86;
class UIControllerExtensionData;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Action; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MOLEMOLE_UILOADINGPOPWINDOWCONTROLLER_ACTIVELOADINGUI_OFFSET UNITYSDK_OFFSET(0x191374B0)
#define MOLEMOLE_UILOADINGPOPWINDOWCONTROLLER_GET_ALLOWASSETPROXYUNLOADRES_OFFSET UNITYSDK_OFFSET(0x191370F0)
#define MOLEMOLE_UILOADINGPOPWINDOWCONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET UNITYSDK_OFFSET(0x19137110)
#define MOLEMOLE_UILOADINGPOPWINDOWCONTROLLER_GET_PERMANENT_OFFSET UNITYSDK_OFFSET(0x19137120)
#define MOLEMOLE_UILOADINGPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x19137100)
#define MOLEMOLE_UILOADINGPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19138310)
#define MOLEMOLE_UILOADINGPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19137130)
#define MOLEMOLE_UILOADINGPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19137440)
#define MOLEMOLE_UILOADINGPOPWINDOWCONTROLLER_SETCORNER_OFFSET UNITYSDK_OFFSET(0x191383A0)
#define MOLEMOLE_UILOADINGPOPWINDOWCONTROLLER_SETLOADINGVIEW_OFFSET UNITYSDK_OFFSET(0x19137680)
#define MOLEMOLE_UILOADINGPOPWINDOWCONTROLLER_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x191381E0)
#define MOLEMOLE_UILOADINGPOPWINDOWCONTROLLER_UNACTIVELOADINGUI_OFFSET UNITYSDK_OFFSET(0x19138020)
#define MOLEMOLE_UILOADINGPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19138650)
#define MOLEMOLE_UILOADINGPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19138660)
#define MOLEMOLE_UILOADINGPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x191386F0)
#define MOLEMOLE_UILOADINGPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19138700)
#define MOLEMOLE_UILOADINGPOPWINDOWCONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x19138790)

namespace MoleMole
{
	inline static constexpr unsigned int UILoadingPopWindowController_TypeDefinitionIndex = 81560;

	class UILoadingPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_7D1DE6036DD3565B* _view; // 0x318
		::UIControllerExtensionData* _extensionData; // 0x320

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_AllowAssetProxyUnloadRes()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGPOPWINDOWCONTROLLER_GET_ALLOWASSETPROXYUNLOADRES_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Enum_3_8E90989A26BC6232 get_HotSwitchRootLayerState()
		{
			return ((::Enum_3_8E90989A26BC6232(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGPOPWINDOWCONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET))(this);
		}

		::System::Boolean get_Permanent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGPOPWINDOWCONTROLLER_GET_PERMANENT_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void ActiveLoadingUI(::Class_2_D691CC1724747647_Class_1_5B726373488B4D86* loadingData, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_D691CC1724747647_Class_1_5B726373488B4D86*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGPOPWINDOWCONTROLLER_ACTIVELOADINGUI_OFFSET))(this, loadingData, callback);
		}

		::System::Void UnActiveLoadingUI(::System::Action* endcallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGPOPWINDOWCONTROLLER_UNACTIVELOADINGUI_OFFSET))(this, endcallback);
		}

		::System::Void SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGPOPWINDOWCONTROLLER_SETUIWINDOWSETTING_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void SetLoadingView(::Class_2_D691CC1724747647_Class_1_5B726373488B4D86* loadingData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_D691CC1724747647_Class_1_5B726373488B4D86*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGPOPWINDOWCONTROLLER_SETLOADINGVIEW_OFFSET))(this, loadingData);
		}

		::System::Void SetCorner(::Class_2_208CC9941471731A_132* loadingPage, ::Class_2_1A39E1B51756BF41* cornerIcon, ::UnityEngine::UI::Extension::UILocalizationText* numberText, ::UnityEngine::UI::Extension::UILocalizationText* tagText)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_132*, ::Class_2_1A39E1B51756BF41*, ::UnityEngine::UI::Extension::UILocalizationText*, ::UnityEngine::UI::Extension::UILocalizationText*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGPOPWINDOWCONTROLLER_SETCORNER_OFFSET))(this, loadingPage, cornerIcon, numberText, tagText);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void __base_SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGPOPWINDOWCONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET))(this);
		}
	};
}
