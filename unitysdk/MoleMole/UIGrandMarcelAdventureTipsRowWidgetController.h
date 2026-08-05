#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_CDD09A78B46608BD_1;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_UIGRANDMARCELADVENTURETIPSROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19F08E70)
#define MOLEMOLE_UIGRANDMARCELADVENTURETIPSROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19F08F00)
#define MOLEMOLE_UIGRANDMARCELADVENTURETIPSROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19F08970)
#define MOLEMOLE_UIGRANDMARCELADVENTURETIPSROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19F089D0)
#define MOLEMOLE_UIGRANDMARCELADVENTURETIPSROWWIDGETCONTROLLER_SHOWTIP_OFFSET UNITYSDK_OFFSET(0x19F08A40)
#define MOLEMOLE_UIGRANDMARCELADVENTURETIPSROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19F08F80)
#define MOLEMOLE_UIGRANDMARCELADVENTURETIPSROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19F08FE0)
#define MOLEMOLE_UIGRANDMARCELADVENTURETIPSROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19F09070)
#define MOLEMOLE_UIGRANDMARCELADVENTURETIPSROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19F09100)
#define MOLEMOLE_UIGRANDMARCELADVENTURETIPSROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19F09190)

namespace MoleMole
{
	inline static constexpr unsigned int UIGrandMarcelAdventureTipsRowWidgetController_TypeDefinitionIndex = 64293;

	class UIGrandMarcelAdventureTipsRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_CDD09A78B46608BD_1* _view; // 0x2C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRANDMARCELADVENTURETIPSROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRANDMARCELADVENTURETIPSROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRANDMARCELADVENTURETIPSROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void ShowTip(::System::String* mes, ::System::Action* overHandle)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRANDMARCELADVENTURETIPSROWWIDGETCONTROLLER_SHOWTIP_OFFSET))(this, mes, overHandle);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRANDMARCELADVENTURETIPSROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRANDMARCELADVENTURETIPSROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRANDMARCELADVENTURETIPSROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRANDMARCELADVENTURETIPSROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRANDMARCELADVENTURETIPSROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRANDMARCELADVENTURETIPSROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
