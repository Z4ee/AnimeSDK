#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_45DADD7452402E44_4;
namespace MoleMole { class UIActivityBattleYCLMissionRowWidgetController_Context; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIACTIVITYBATTLEYCLMISSIONROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x196DBE50)
#define MOLEMOLE_UIACTIVITYBATTLEYCLMISSIONROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x196DBEE0)
#define MOLEMOLE_UIACTIVITYBATTLEYCLMISSIONROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x196DBF60)
#define MOLEMOLE_UIACTIVITYBATTLEYCLMISSIONROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x196DBFC0)
#define MOLEMOLE_UIACTIVITYBATTLEYCLMISSIONROWWIDGETCONTROLLER_REFRESHWIDGET_OFFSET UNITYSDK_OFFSET(0x196D92C0)
#define MOLEMOLE_UIACTIVITYBATTLEYCLMISSIONROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x196DC0C0)
#define MOLEMOLE_UIACTIVITYBATTLEYCLMISSIONROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x196DC120)
#define MOLEMOLE_UIACTIVITYBATTLEYCLMISSIONROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x196DC1B0)
#define MOLEMOLE_UIACTIVITYBATTLEYCLMISSIONROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x196DC240)
#define MOLEMOLE_UIACTIVITYBATTLEYCLMISSIONROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x196DC2D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityBattleYCLMissionRowWidgetController_TypeDefinitionIndex = 85496;

	class UIActivityBattleYCLMissionRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_45DADD7452402E44_4* _view; // 0x2C0
		::MoleMole::UIActivityBattleYCLMissionRowWidgetController_Context* _context; // 0x2C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBATTLEYCLMISSIONROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBATTLEYCLMISSIONROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBATTLEYCLMISSIONROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBATTLEYCLMISSIONROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBATTLEYCLMISSIONROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void RefreshWidget(::System::Int32 index, ::System::Int32 questID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBATTLEYCLMISSIONROWWIDGETCONTROLLER_REFRESHWIDGET_OFFSET))(this, index, questID);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBATTLEYCLMISSIONROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBATTLEYCLMISSIONROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBATTLEYCLMISSIONROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBATTLEYCLMISSIONROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
