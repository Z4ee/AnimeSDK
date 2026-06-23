#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_00E0F6A4450214AA_1;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UISwitchPageListWidgetContext; }

#define MOLEMOLE_UISWITCHPAGELISTWIDGETCONTROLLER_ONCLICKNEXTPAGE_OFFSET UNITYSDK_OFFSET(0x10892860)
#define MOLEMOLE_UISWITCHPAGELISTWIDGETCONTROLLER_ONCLICKPREVPAGE_OFFSET UNITYSDK_OFFSET(0x108927B0)
#define MOLEMOLE_UISWITCHPAGELISTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x108926A0)
#define MOLEMOLE_UISWITCHPAGELISTWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x10892730)
#define MOLEMOLE_UISWITCHPAGELISTWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x10892230)
#define MOLEMOLE_UISWITCHPAGELISTWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x10892430)
#define MOLEMOLE_UISWITCHPAGELISTWIDGETCONTROLLER_REFRESHUI_OFFSET UNITYSDK_OFFSET(0x10892520)
#define MOLEMOLE_UISWITCHPAGELISTWIDGETCONTROLLER_RESETUICONTEXT_OFFSET UNITYSDK_OFFSET(0x10892930)
#define MOLEMOLE_UISWITCHPAGELISTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x108929A0)
#define MOLEMOLE_UISWITCHPAGELISTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x10892A00)
#define MOLEMOLE_UISWITCHPAGELISTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x10892A90)
#define MOLEMOLE_UISWITCHPAGELISTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x10892B20)
#define MOLEMOLE_UISWITCHPAGELISTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x10892BB0)

namespace MoleMole
{
	inline static constexpr unsigned int UISwitchPageListWidgetController_TypeDefinitionIndex = 83350;

	class UISwitchPageListWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_00E0F6A4450214AA_1* _view; // 0x2C0
		::MoleMole::UISwitchPageListWidgetContext* _context; // 0x2C8
		::System::Int32 _currentPage; // 0x2D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISWITCHPAGELISTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISWITCHPAGELISTWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISWITCHPAGELISTWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISWITCHPAGELISTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISWITCHPAGELISTWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnClickPrevPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISWITCHPAGELISTWIDGETCONTROLLER_ONCLICKPREVPAGE_OFFSET))(this);
		}

		::System::Void OnClickNextPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISWITCHPAGELISTWIDGETCONTROLLER_ONCLICKNEXTPAGE_OFFSET))(this);
		}

		::System::Void RefreshUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISWITCHPAGELISTWIDGETCONTROLLER_REFRESHUI_OFFSET))(this);
		}

		::System::Void ResetUIContext(::MoleMole::UISwitchPageListWidgetContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UISwitchPageListWidgetContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISWITCHPAGELISTWIDGETCONTROLLER_RESETUICONTEXT_OFFSET))(this, context);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISWITCHPAGELISTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISWITCHPAGELISTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISWITCHPAGELISTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISWITCHPAGELISTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
