#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_3E1A0459A6647B99_4;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }

#define MOLEMOLE_UIONLINEPLAYERPROPERTYROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17E11570)
#define MOLEMOLE_UIONLINEPLAYERPROPERTYROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17E11600)
#define MOLEMOLE_UIONLINEPLAYERPROPERTYROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17E114A0)
#define MOLEMOLE_UIONLINEPLAYERPROPERTYROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17E11500)
#define MOLEMOLE_UIONLINEPLAYERPROPERTYROWWIDGETCONTROLLER_SETDATA_OFFSET UNITYSDK_OFFSET(0x17E11680)
#define MOLEMOLE_UIONLINEPLAYERPROPERTYROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17E11760)
#define MOLEMOLE_UIONLINEPLAYERPROPERTYROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17E117C0)
#define MOLEMOLE_UIONLINEPLAYERPROPERTYROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17E11850)
#define MOLEMOLE_UIONLINEPLAYERPROPERTYROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17E118E0)
#define MOLEMOLE_UIONLINEPLAYERPROPERTYROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17E11970)

namespace MoleMole
{
	inline static constexpr unsigned int UIOnlinePlayerPropertyRowWidgetController_TypeDefinitionIndex = 45502;

	class UIOnlinePlayerPropertyRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_3E1A0459A6647B99_4* _view; // 0x2C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIONLINEPLAYERPROPERTYROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIONLINEPLAYERPROPERTYROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIONLINEPLAYERPROPERTYROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIONLINEPLAYERPROPERTYROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIONLINEPLAYERPROPERTYROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetData(::System::String* title, ::System::String* baseValue, ::System::String* addValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIONLINEPLAYERPROPERTYROWWIDGETCONTROLLER_SETDATA_OFFSET))(this, title, baseValue, addValue);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIONLINEPLAYERPROPERTYROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIONLINEPLAYERPROPERTYROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIONLINEPLAYERPROPERTYROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIONLINEPLAYERPROPERTYROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
