#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_2C492A88F0B81752_1;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIRABBuddyGetPopWindowController_Context; }
namespace MoleMole { class UIRABDepositoryElementTextTagRowWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIRABBUDDYGETPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x1674D550)
#define MOLEMOLE_UIRABBUDDYGETPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1674DE60)
#define MOLEMOLE_UIRABBUDDYGETPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1674DEF0)
#define MOLEMOLE_UIRABBUDDYGETPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1674D560)
#define MOLEMOLE_UIRABBUDDYGETPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1674D5B0)
#define MOLEMOLE_UIRABBUDDYGETPOPWINDOWCONTROLLER_REFRESHDESCTAGS_OFFSET UNITYSDK_OFFSET(0x1674E020)
#define MOLEMOLE_UIRABBUDDYGETPOPWINDOWCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x1674D6A0)
#define MOLEMOLE_UIRABBUDDYGETPOPWINDOWCONTROLLER_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x1674DF90)
#define MOLEMOLE_UIRABBUDDYGETPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1674E4F0)
#define MOLEMOLE_UIRABBUDDYGETPOPWINDOWCONTROLLER__REFRESHVIEW_B__10_0_OFFSET UNITYSDK_OFFSET(0x1674E580)
#define MOLEMOLE_UIRABBUDDYGETPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1674E590)
#define MOLEMOLE_UIRABBUDDYGETPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1674E620)
#define MOLEMOLE_UIRABBUDDYGETPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1674E630)
#define MOLEMOLE_UIRABBUDDYGETPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1674E640)
#define MOLEMOLE_UIRABBUDDYGETPOPWINDOWCONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x1674E6D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABBuddyGetPopWindowController_TypeDefinitionIndex = 71205;

	class UIRABBuddyGetPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_2C492A88F0B81752_1* _view; // 0x318
		::System::Collections::Generic::List_1<::MoleMole::UIRABDepositoryElementTextTagRowWidgetController*>* _descTagWidgets; // 0x320
		::MoleMole::UIRABBuddyGetPopWindowController_Context* _context; // 0x328

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBUDDYGETPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBUDDYGETPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBUDDYGETPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBUDDYGETPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBUDDYGETPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBUDDYGETPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBUDDYGETPOPWINDOWCONTROLLER_SETUIWINDOWSETTING_OFFSET))(this);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBUDDYGETPOPWINDOWCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void RefreshDescTags(::System::Collections::Generic::List_1<::System::Int32>* descIds)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBUDDYGETPOPWINDOWCONTROLLER_REFRESHDESCTAGS_OFFSET))(this, descIds);
		}

		::System::Void _RefreshView_b__10_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBUDDYGETPOPWINDOWCONTROLLER__REFRESHVIEW_B__10_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBUDDYGETPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBUDDYGETPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBUDDYGETPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBUDDYGETPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void __base_SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBUDDYGETPOPWINDOWCONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET))(this);
		}
	};
}
