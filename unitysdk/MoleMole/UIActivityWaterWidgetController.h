#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_D375C91CCE5D3999;
class Class_2_8374F755CC1451AB;
namespace MoleMole { class ActivityWaterContext; }
namespace MoleMole { class UIActivityWaterProgressBarWidgetController; }
namespace MoleMole { class UIActivityWaterRewardWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIACTIVITYWATERWIDGETCONTROLLER_GETREWARD_OFFSET UNITYSDK_OFFSET(0x19762220)
#define MOLEMOLE_UIACTIVITYWATERWIDGETCONTROLLER_GET__ROOTACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x19762200)
#define MOLEMOLE_UIACTIVITYWATERWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19761A10)
#define MOLEMOLE_UIACTIVITYWATERWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19761AA0)
#define MOLEMOLE_UIACTIVITYWATERWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x197618C0)
#define MOLEMOLE_UIACTIVITYWATERWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19761920)
#define MOLEMOLE_UIACTIVITYWATERWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x19761B20)
#define MOLEMOLE_UIACTIVITYWATERWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19762280)
#define MOLEMOLE_UIACTIVITYWATERWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19762360)
#define MOLEMOLE_UIACTIVITYWATERWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x197623F0)
#define MOLEMOLE_UIACTIVITYWATERWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19762480)
#define MOLEMOLE_UIACTIVITYWATERWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19762510)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityWaterWidgetController_TypeDefinitionIndex = 66032;

	class UIActivityWaterWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_8374F755CC1451AB* _view; // 0x2C0
		::MoleMole::ActivityWaterContext* _context; // 0x2C8
		::MoleMole::UIActivityWaterProgressBarWidgetController* _progressBarWidget; // 0x2D0
		::System::Collections::Generic::List_1<::MoleMole::UIActivityWaterRewardWidgetController*>* _rewardWidgets; // 0x2D8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYWATERWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYWATERWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYWATERWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYWATERWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYWATERWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYWATERWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void GetReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYWATERWIDGETCONTROLLER_GETREWARD_OFFSET))(this);
		}

		::Class_1_D375C91CCE5D3999* get__rootActivityData()
		{
			return ((::Class_1_D375C91CCE5D3999*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYWATERWIDGETCONTROLLER_GET__ROOTACTIVITYDATA_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYWATERWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYWATERWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYWATERWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYWATERWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
