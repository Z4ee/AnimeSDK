#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_D375C91CCE5D3999;
class Class_2_50B55DEC69B319F7;
namespace MoleMole { class UIActivityCheckinFinalRewardWidgetController; }
namespace MoleMole { class UIActivityCheckinProgressBarWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }

#define MOLEMOLE_UIACTIVITYCHECKINGAMEWIDGETCONTROLLER_GETREWARD_OFFSET UNITYSDK_OFFSET(0x12B40C40)
#define MOLEMOLE_UIACTIVITYCHECKINGAMEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x12B3FFA0)
#define MOLEMOLE_UIACTIVITYCHECKINGAMEWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x12B40030)
#define MOLEMOLE_UIACTIVITYCHECKINGAMEWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x12B3F980)
#define MOLEMOLE_UIACTIVITYCHECKINGAMEWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x12B3FC80)
#define MOLEMOLE_UIACTIVITYCHECKINGAMEWIDGETCONTROLLER_REFRESHFINALREWARD_OFFSET UNITYSDK_OFFSET(0x12B408C0)
#define MOLEMOLE_UIACTIVITYCHECKINGAMEWIDGETCONTROLLER_REFRESHPROGRESS_OFFSET UNITYSDK_OFFSET(0x12B40700)
#define MOLEMOLE_UIACTIVITYCHECKINGAMEWIDGETCONTROLLER_REFRESHREWARD_OFFSET UNITYSDK_OFFSET(0x12B400B0)
#define MOLEMOLE_UIACTIVITYCHECKINGAMEWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x12B3FD00)
#define MOLEMOLE_UIACTIVITYCHECKINGAMEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x12B41360)
#define MOLEMOLE_UIACTIVITYCHECKINGAMEWIDGETCONTROLLER__ONUIINIT_B__5_1_OFFSET UNITYSDK_OFFSET(0x12B413C0)
#define MOLEMOLE_UIACTIVITYCHECKINGAMEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x12B413D0)
#define MOLEMOLE_UIACTIVITYCHECKINGAMEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x12B41460)
#define MOLEMOLE_UIACTIVITYCHECKINGAMEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x12B414F0)
#define MOLEMOLE_UIACTIVITYCHECKINGAMEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x12B41580)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityCheckinGameWidgetController_TypeDefinitionIndex = 75137;

	class UIActivityCheckinGameWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		// static const ::System::Int32 CoinItemID = 0x8A; // 0x0
		::Class_2_50B55DEC69B319F7* _view; // 0x2B8
		::Class_1_D375C91CCE5D3999* _rootActivity; // 0x2C0
		::MoleMole::UIActivityCheckinProgressBarWidgetController* _progressBarWidget; // 0x2C8
		::MoleMole::UIActivityCheckinFinalRewardWidgetController* _finalRewardWidget; // 0x2D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCHECKINGAMEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCHECKINGAMEWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCHECKINGAMEWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCHECKINGAMEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCHECKINGAMEWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCHECKINGAMEWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void RefreshReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCHECKINGAMEWIDGETCONTROLLER_REFRESHREWARD_OFFSET))(this);
		}

		::System::Void RefreshFinalReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCHECKINGAMEWIDGETCONTROLLER_REFRESHFINALREWARD_OFFSET))(this);
		}

		::System::Void RefreshProgress()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCHECKINGAMEWIDGETCONTROLLER_REFRESHPROGRESS_OFFSET))(this);
		}

		::System::Void GetReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCHECKINGAMEWIDGETCONTROLLER_GETREWARD_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__5_1(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCHECKINGAMEWIDGETCONTROLLER__ONUIINIT_B__5_1_OFFSET))(this, args);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCHECKINGAMEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCHECKINGAMEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCHECKINGAMEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCHECKINGAMEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
