#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIMainCityStorePageController.h"

class Class_1_D375C91CCE5D3999;
class Class_2_D77EAB658E5C94F9;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UICommentInfoWidgetController; }
namespace MoleMole { class UICommentLevelWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace UnityEngine { class Material; }

#define MOLEMOLE_UICOMMENTMAINPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x19373E50)
#define MOLEMOLE_UICOMMENTMAINPAGECONTROLLER_INITACTIVITYREWARD_OFFSET UNITYSDK_OFFSET(0x193743A0)
#define MOLEMOLE_UICOMMENTMAINPAGECONTROLLER_INITBIND_OFFSET UNITYSDK_OFFSET(0x193741B0)
#define MOLEMOLE_UICOMMENTMAINPAGECONTROLLER_MODIFYFILLPERCENTCONTENT_OFFSET UNITYSDK_OFFSET(0x193750E0)
#define MOLEMOLE_UICOMMENTMAINPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19373F00)
#define MOLEMOLE_UICOMMENTMAINPAGECONTROLLER_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0x19374940)
#define MOLEMOLE_UICOMMENTMAINPAGECONTROLLER_ONGAMEPADMODULELOSTFOCUS_OFFSET UNITYSDK_OFFSET(0x19374B70)
#define MOLEMOLE_UICOMMENTMAINPAGECONTROLLER_ONINFOBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x19374DA0)
#define MOLEMOLE_UICOMMENTMAINPAGECONTROLLER_ONLEVELPROGRESSBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x19374E00)
#define MOLEMOLE_UICOMMENTMAINPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x193748C0)
#define MOLEMOLE_UICOMMENTMAINPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19373F90)
#define MOLEMOLE_UICOMMENTMAINPAGECONTROLLER_OPENINFOPANEL_OFFSET UNITYSDK_OFFSET(0x193738F0)
#define MOLEMOLE_UICOMMENTMAINPAGECONTROLLER_REFRESHLEVELPROGRESSINFO_OFFSET UNITYSDK_OFFSET(0x19374EF0)
#define MOLEMOLE_UICOMMENTMAINPAGECONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x19374780)
#define MOLEMOLE_UICOMMENTMAINPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x19373E60)
#define MOLEMOLE_UICOMMENTMAINPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x193752E0)
#define MOLEMOLE_UICOMMENTMAINPAGECONTROLLER__INITACTIVITYREWARD_B__15_1_OFFSET UNITYSDK_OFFSET(0x19375380)
#define MOLEMOLE_UICOMMENTMAINPAGECONTROLLER__INITBIND_B__14_0_OFFSET UNITYSDK_OFFSET(0x193752F0)
#define MOLEMOLE_UICOMMENTMAINPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x193754A0)
#define MOLEMOLE_UICOMMENTMAINPAGECONTROLLER___BASE_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0x19375530)
#define MOLEMOLE_UICOMMENTMAINPAGECONTROLLER___BASE_ONGAMEPADMODULELOSTFOCUS_OFFSET UNITYSDK_OFFSET(0x193755C0)
#define MOLEMOLE_UICOMMENTMAINPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19375650)
#define MOLEMOLE_UICOMMENTMAINPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19375660)
#define MOLEMOLE_UICOMMENTMAINPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x19375670)

namespace MoleMole
{
	inline static constexpr unsigned int UICommentMainPageController_TypeDefinitionIndex = 50589;

	class UICommentMainPageController : public ::MoleMole::UIMainCityStorePageController
	{
	public:
		::Class_2_D77EAB658E5C94F9* _view; // 0x328
		::Class_1_D375C91CCE5D3999* _activityBaseData; // 0x330
		::System::Boolean _isInInfoPanel; // 0x338
		::MoleMole::UICommentLevelWidgetController* _levelWidgetController; // 0x340
		::MoleMole::UICommentInfoWidgetController* _infoWidgetController; // 0x348
		::UnityEngine::Material* _LevelProgressFillMat; // 0x350

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMENTMAINPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMENTMAINPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMENTMAINPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMENTMAINPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMENTMAINPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMENTMAINPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnGamepadModuleFocus(::MoleMole::MonoGamepadModule* gamepadModule)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMENTMAINPAGECONTROLLER_ONGAMEPADMODULEFOCUS_OFFSET))(this, gamepadModule);
		}

		::System::Void OnGamepadModuleLostFocus(::MoleMole::MonoGamepadModule* gamepadModule)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMENTMAINPAGECONTROLLER_ONGAMEPADMODULELOSTFOCUS_OFFSET))(this, gamepadModule);
		}

		::System::Void InitBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMENTMAINPAGECONTROLLER_INITBIND_OFFSET))(this);
		}

		::System::Void InitActivityReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMENTMAINPAGECONTROLLER_INITACTIVITYREWARD_OFFSET))(this);
		}

		::System::Void OnInfoButtonClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMENTMAINPAGECONTROLLER_ONINFOBUTTONCLICK_OFFSET))(this);
		}

		::System::Void OnLevelProgressButtonClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMENTMAINPAGECONTROLLER_ONLEVELPROGRESSBUTTONCLICK_OFFSET))(this);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMENTMAINPAGECONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void ModifyFillPercentContent(::UnityEngine::Material* material, ::System::Int32 currentNum, ::System::Int32 maxNum)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMENTMAINPAGECONTROLLER_MODIFYFILLPERCENTCONTENT_OFFSET))(this, material, currentNum, maxNum);
		}

		::System::Void OpenInfoPanel(::System::Int32 generalLevelID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMENTMAINPAGECONTROLLER_OPENINFOPANEL_OFFSET))(this, generalLevelID);
		}

		::System::Void RefreshLevelProgressInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMENTMAINPAGECONTROLLER_REFRESHLEVELPROGRESSINFO_OFFSET))(this);
		}

		::System::Void _InitBind_b__14_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMENTMAINPAGECONTROLLER__INITBIND_B__14_0_OFFSET))(this);
		}

		::System::Void _InitActivityReward_b__15_1(::Class_1_D375C91CCE5D3999* activity)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D375C91CCE5D3999*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMENTMAINPAGECONTROLLER__INITACTIVITYREWARD_B__15_1_OFFSET))(this, activity);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMENTMAINPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleFocus(::MoleMole::MonoGamepadModule* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMENTMAINPAGECONTROLLER___BASE_ONGAMEPADMODULEFOCUS_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleLostFocus(::MoleMole::MonoGamepadModule* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMENTMAINPAGECONTROLLER___BASE_ONGAMEPADMODULELOSTFOCUS_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMENTMAINPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMENTMAINPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMENTMAINPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET))(this);
		}
	};
}
