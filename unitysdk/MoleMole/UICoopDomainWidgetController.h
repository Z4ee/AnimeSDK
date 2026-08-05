#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_D3EBF9B5060CE4F4_1.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_5E2FBACADDB625B7_31;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UICOOPDOMAINWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1932CFF0)
#define MOLEMOLE_UICOOPDOMAINWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1932D080)
#define MOLEMOLE_UICOOPDOMAINWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1932CF20)
#define MOLEMOLE_UICOOPDOMAINWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1932CF80)
#define MOLEMOLE_UICOOPDOMAINWIDGETCONTROLLER_REFRESHSTATE_OFFSET UNITYSDK_OFFSET(0x1932D100)
#define MOLEMOLE_UICOOPDOMAINWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1932D1B0)
#define MOLEMOLE_UICOOPDOMAINWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1932D210)
#define MOLEMOLE_UICOOPDOMAINWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1932D2A0)
#define MOLEMOLE_UICOOPDOMAINWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1932D330)
#define MOLEMOLE_UICOOPDOMAINWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1932D3C0)

namespace MoleMole
{
	inline static constexpr unsigned int UICoopDomainWidgetController_TypeDefinitionIndex = 85726;

	class UICoopDomainWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_5E2FBACADDB625B7_31* _view; // 0x2C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPDOMAINWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPDOMAINWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPDOMAINWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPDOMAINWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPDOMAINWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshState(::Enum_3_D3EBF9B5060CE4F4_1 state)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_D3EBF9B5060CE4F4_1))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPDOMAINWIDGETCONTROLLER_REFRESHSTATE_OFFSET))(this, state);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPDOMAINWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPDOMAINWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPDOMAINWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPDOMAINWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
