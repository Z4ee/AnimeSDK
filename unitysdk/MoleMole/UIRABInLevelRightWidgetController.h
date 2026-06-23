#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_48D56DACBE4271BC;
class Class_1_980AD78C3BD5BDE0;
class Class_2_60638234271CCDB8_100;
class Class_2_8CE3622A05CA8724;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIRABDataStatWidgetController; }
namespace MoleMole { class UIRABInLevelBangbooInfoWidgetController; }
namespace MoleMole { class UIRABInLevelPageController; }

#define MOLEMOLE_UIRABINLEVELRIGHTWIDGETCONTROLLER_BINDVIEW_OFFSET UNITYSDK_OFFSET(0x1789BBF0)
#define MOLEMOLE_UIRABINLEVELRIGHTWIDGETCONTROLLER_CLOSEBANGBOOINFO_OFFSET UNITYSDK_OFFSET(0x1789C0D0)
#define MOLEMOLE_UIRABINLEVELRIGHTWIDGETCONTROLLER_CLOSEDATASTAT_OFFSET UNITYSDK_OFFSET(0x1789C280)
#define MOLEMOLE_UIRABINLEVELRIGHTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1789BAE0)
#define MOLEMOLE_UIRABINLEVELRIGHTWIDGETCONTROLLER_ONRIGHTAREATYPECHANGED_OFFSET UNITYSDK_OFFSET(0x1789BDB0)
#define MOLEMOLE_UIRABINLEVELRIGHTWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1789BB70)
#define MOLEMOLE_UIRABINLEVELRIGHTWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1789B980)
#define MOLEMOLE_UIRABINLEVELRIGHTWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1789BA70)
#define MOLEMOLE_UIRABINLEVELRIGHTWIDGETCONTROLLER_OPENBANGBOOINFO_OFFSET UNITYSDK_OFFSET(0x1789C720)
#define MOLEMOLE_UIRABINLEVELRIGHTWIDGETCONTROLLER_OPENDATASTAT_OFFSET UNITYSDK_OFFSET(0x1789C430)
#define MOLEMOLE_UIRABINLEVELRIGHTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1789CA60)
#define MOLEMOLE_UIRABINLEVELRIGHTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1789CAC0)
#define MOLEMOLE_UIRABINLEVELRIGHTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1789CB50)
#define MOLEMOLE_UIRABINLEVELRIGHTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1789CBE0)
#define MOLEMOLE_UIRABINLEVELRIGHTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1789CC70)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABInLevelRightWidgetController_TypeDefinitionIndex = 57504;

	class UIRABInLevelRightWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_60638234271CCDB8_100* _view; // 0x2C0
		::Class_1_48D56DACBE4271BC* _syncHelper; // 0x2C8
		::Class_1_980AD78C3BD5BDE0* _viewModel; // 0x2D0
		::MoleMole::UIRABDataStatWidgetController* _dataStatCtrl; // 0x2D8
		::MoleMole::UIRABInLevelBangbooInfoWidgetController* _bangbooInfoCtrl; // 0x2E0
		::MoleMole::UIRABInLevelPageController* _parentCtrl; // 0x2E8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELRIGHTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELRIGHTWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELRIGHTWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELRIGHTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELRIGHTWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void BindView(::Class_1_980AD78C3BD5BDE0* viewModel)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_980AD78C3BD5BDE0*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELRIGHTWIDGETCONTROLLER_BINDVIEW_OFFSET))(this, viewModel);
		}

		::System::Void OnRightAreaTypeChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELRIGHTWIDGETCONTROLLER_ONRIGHTAREATYPECHANGED_OFFSET))(this);
		}

		::System::Void OpenBangbooInfo(::Class_2_8CE3622A05CA8724* slotData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_8CE3622A05CA8724*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELRIGHTWIDGETCONTROLLER_OPENBANGBOOINFO_OFFSET))(this, slotData);
		}

		::System::Void CloseBangbooInfo(::System::Boolean hide)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELRIGHTWIDGETCONTROLLER_CLOSEBANGBOOINFO_OFFSET))(this, hide);
		}

		::System::Void OpenDataStat()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELRIGHTWIDGETCONTROLLER_OPENDATASTAT_OFFSET))(this);
		}

		::System::Void CloseDataStat(::System::Boolean hide)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELRIGHTWIDGETCONTROLLER_CLOSEDATASTAT_OFFSET))(this, hide);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELRIGHTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELRIGHTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELRIGHTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELRIGHTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
