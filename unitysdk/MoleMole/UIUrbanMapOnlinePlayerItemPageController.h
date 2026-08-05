#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_4C4C6AF73CB3C359;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIUrbanOnLinePlayerWidgetContext; }
namespace System { class EventArgs; }

#define MOLEMOLE_UIURBANMAPONLINEPLAYERITEMPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x188B1930)
#define MOLEMOLE_UIURBANMAPONLINEPLAYERITEMPAGECONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x188B1940)
#define MOLEMOLE_UIURBANMAPONLINEPLAYERITEMPAGECONTROLLER_ONCAMERAFOLLOWCHANGE_OFFSET UNITYSDK_OFFSET(0x188B1D40)
#define MOLEMOLE_UIURBANMAPONLINEPLAYERITEMPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x188B19B0)
#define MOLEMOLE_UIURBANMAPONLINEPLAYERITEMPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x188B1AC0)
#define MOLEMOLE_UIURBANMAPONLINEPLAYERITEMPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x188B1CD0)
#define MOLEMOLE_UIURBANMAPONLINEPLAYERITEMPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x188B20F0)
#define MOLEMOLE_UIURBANMAPONLINEPLAYERITEMPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x188B2150)
#define MOLEMOLE_UIURBANMAPONLINEPLAYERITEMPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x188B21F0)
#define MOLEMOLE_UIURBANMAPONLINEPLAYERITEMPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x188B2290)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapOnlinePlayerItemPageController_TypeDefinitionIndex = 82973;

	class UIUrbanMapOnlinePlayerItemPageController : public ::MoleMole::UIWidgetController
	{
	public:
		::MoleMole::UIUrbanOnLinePlayerWidgetContext* _context; // 0x2C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPONLINEPLAYERITEMPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPONLINEPLAYERITEMPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Class_2_4C4C6AF73CB3C359* get__viewModel()
		{
			return ((::Class_2_4C4C6AF73CB3C359*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPONLINEPLAYERITEMPAGECONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPONLINEPLAYERITEMPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPONLINEPLAYERITEMPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPONLINEPLAYERITEMPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCameraFollowChange(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPONLINEPLAYERITEMPAGECONTROLLER_ONCAMERAFOLLOWCHANGE_OFFSET))(this, args);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPONLINEPLAYERITEMPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPONLINEPLAYERITEMPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPONLINEPLAYERITEMPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
