#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_D375C91CCE5D3999;
class Class_2_208CC9941471731A_852;
class Class_2_7ABF2118692E7A85;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIACTIVITYVIDEOTABWIDGETCONTROLLER_INITTABS_OFFSET UNITYSDK_OFFSET(0x193409A0)
#define MOLEMOLE_UIACTIVITYVIDEOTABWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19340790)
#define MOLEMOLE_UIACTIVITYVIDEOTABWIDGETCONTROLLER_ONTABCLICKED_OFFSET UNITYSDK_OFFSET(0x19341130)
#define MOLEMOLE_UIACTIVITYVIDEOTABWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19340820)
#define MOLEMOLE_UIACTIVITYVIDEOTABWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19340660)
#define MOLEMOLE_UIACTIVITYVIDEOTABWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19340720)
#define MOLEMOLE_UIACTIVITYVIDEOTABWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x193408B0)
#define MOLEMOLE_UIACTIVITYVIDEOTABWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19341880)
#define MOLEMOLE_UIACTIVITYVIDEOTABWIDGETCONTROLLER__ONUIINIT_B__8_0_OFFSET UNITYSDK_OFFSET(0x193418E0)
#define MOLEMOLE_UIACTIVITYVIDEOTABWIDGETCONTROLLER__ONUIINIT_B__8_1_OFFSET UNITYSDK_OFFSET(0x19341990)
#define MOLEMOLE_UIACTIVITYVIDEOTABWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19341A30)
#define MOLEMOLE_UIACTIVITYVIDEOTABWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19341AC0)
#define MOLEMOLE_UIACTIVITYVIDEOTABWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19341B50)
#define MOLEMOLE_UIACTIVITYVIDEOTABWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19341BE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityVideoTabWidgetController_TypeDefinitionIndex = 68364;

	class UIActivityVideoTabWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_7ABF2118692E7A85* _view; // 0x2C0
		::UnityEngine::RectTransform* _videoRoot; // 0x2C8
		::UnityEngine::RectTransform* _activityRoot; // 0x2D0
		::System::Action_1<::System::Int32>* _onTabSelected; // 0x2D8
		::Class_2_208CC9941471731A_852* _questRuleTemplate; // 0x2E0
		::Class_1_D375C91CCE5D3999* _activityBaseData; // 0x2E8
		::System::Int32 _normalTabIndex; // 0x2F0
		::System::Boolean _isAutoSwitch; // 0x2F4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYVIDEOTABWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYVIDEOTABWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYVIDEOTABWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYVIDEOTABWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYVIDEOTABWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshView(::Class_1_D375C91CCE5D3999* activityBaseData, ::UnityEngine::RectTransform* videoRoot, ::UnityEngine::RectTransform* activityRoot, ::System::Action_1<::System::Int32>* onTabSelected)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D375C91CCE5D3999*, ::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYVIDEOTABWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, activityBaseData, videoRoot, activityRoot, onTabSelected);
		}

		::System::Void InitTabs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYVIDEOTABWIDGETCONTROLLER_INITTABS_OFFSET))(this);
		}

		::System::Void OnTabClicked(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYVIDEOTABWIDGETCONTROLLER_ONTABCLICKED_OFFSET))(this, index);
		}

		::System::Void _OnUIInit_b__8_0(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYVIDEOTABWIDGETCONTROLLER__ONUIINIT_B__8_0_OFFSET))(this, args);
		}

		::System::Void _OnUIInit_b__8_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYVIDEOTABWIDGETCONTROLLER__ONUIINIT_B__8_1_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYVIDEOTABWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYVIDEOTABWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYVIDEOTABWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYVIDEOTABWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
