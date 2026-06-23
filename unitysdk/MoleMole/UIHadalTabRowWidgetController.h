#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_D375C91CCE5D3999;
class Class_2_59ECDDAF26C61FF5;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIHadalGuideWidgetController_HadalTabData; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define MOLEMOLE_UIHADALTABROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x171F8F10)
#define MOLEMOLE_UIHADALTABROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x171F8FA0)
#define MOLEMOLE_UIHADALTABROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x171F8E40)
#define MOLEMOLE_UIHADALTABROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x171F8EA0)
#define MOLEMOLE_UIHADALTABROWWIDGETCONTROLLER_REFRESHHADALINFO_OFFSET UNITYSDK_OFFSET(0x171F97D0)
#define MOLEMOLE_UIHADALTABROWWIDGETCONTROLLER_REFRESHHADALSELECTINFO_OFFSET UNITYSDK_OFFSET(0x171FAA60)
#define MOLEMOLE_UIHADALTABROWWIDGETCONTROLLER_REFRESHINFO_OFFSET UNITYSDK_OFFSET(0x171F96F0)
#define MOLEMOLE_UIHADALTABROWWIDGETCONTROLLER_REFRESHMEMORYBATTLEINFO_OFFSET UNITYSDK_OFFSET(0x171FA3F0)
#define MOLEMOLE_UIHADALTABROWWIDGETCONTROLLER_REFRESHMEMORYBATTLESELECTINFO_OFFSET UNITYSDK_OFFSET(0x171FADB0)
#define MOLEMOLE_UIHADALTABROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x171F9580)
#define MOLEMOLE_UIHADALTABROWWIDGETCONTROLLER_SETBTNINTERACT_OFFSET UNITYSDK_OFFSET(0x171F9760)
#define MOLEMOLE_UIHADALTABROWWIDGETCONTROLLER_SETTABDATA_OFFSET UNITYSDK_OFFSET(0x171F9020)
#define MOLEMOLE_UIHADALTABROWWIDGETCONTROLLER_SETTIMER_OFFSET UNITYSDK_OFFSET(0x171F9530)
#define MOLEMOLE_UIHADALTABROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x171FB220)
#define MOLEMOLE_UIHADALTABROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x171FB280)
#define MOLEMOLE_UIHADALTABROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x171FB310)
#define MOLEMOLE_UIHADALTABROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x171FB3A0)
#define MOLEMOLE_UIHADALTABROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x171FB430)

namespace MoleMole
{
	inline static constexpr unsigned int UIHadalTabRowWidgetController_TypeDefinitionIndex = 68161;

	class UIHadalTabRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_59ECDDAF26C61FF5* _view; // 0x2C0
		::Class_1_D375C91CCE5D3999* _activityData; // 0x2C8
		::MoleMole::UIHadalGuideWidgetController_HadalTabData* _tabData; // 0x2D0
		::UnityEngine::UI::Extension::UITimeWidget* _timer; // 0x2D8
		::System::Boolean _isSelect; // 0x2E0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALTABROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALTABROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALTABROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALTABROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALTABROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetTabData(::MoleMole::UIHadalGuideWidgetController_HadalTabData* tabData)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIHadalGuideWidgetController_HadalTabData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALTABROWWIDGETCONTROLLER_SETTABDATA_OFFSET))(this, tabData);
		}

		::System::Void SetTimer(::UnityEngine::UI::Extension::UITimeWidget* timeWidget)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UITimeWidget*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALTABROWWIDGETCONTROLLER_SETTIMER_OFFSET))(this, timeWidget);
		}

		::System::Void RefreshView(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALTABROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, isSelect);
		}

		::System::Void SetBtnInteract(::System::Boolean interact)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALTABROWWIDGETCONTROLLER_SETBTNINTERACT_OFFSET))(this, interact);
		}

		::System::Void RefreshInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALTABROWWIDGETCONTROLLER_REFRESHINFO_OFFSET))(this);
		}

		::System::Void RefreshHadalInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALTABROWWIDGETCONTROLLER_REFRESHHADALINFO_OFFSET))(this);
		}

		::System::Void RefreshHadalSelectInfo(::System::Boolean isDynamicOpen, ::System::Int32 dynamicZoneID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALTABROWWIDGETCONTROLLER_REFRESHHADALSELECTINFO_OFFSET))(this, isDynamicOpen, dynamicZoneID);
		}

		::System::Void RefreshMemoryBattleInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALTABROWWIDGETCONTROLLER_REFRESHMEMORYBATTLEINFO_OFFSET))(this);
		}

		::System::Void RefreshMemoryBattleSelectInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALTABROWWIDGETCONTROLLER_REFRESHMEMORYBATTLESELECTINFO_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALTABROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALTABROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALTABROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALTABROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
