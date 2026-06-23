#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWindowController.h"

#define MOLEMOLE_UIACTIVITYPOPBASEWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15E43110)
#define MOLEMOLE_UIACTIVITYPOPBASEWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15E42CB0)
#define MOLEMOLE_UIACTIVITYPOPBASEWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15E433F0)
#define MOLEMOLE_UIACTIVITYPOPBASEWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15E49960)
#define MOLEMOLE_UIACTIVITYPOPBASEWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15E49970)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityPopBaseWindowController_TypeDefinitionIndex = 53351;

	class UIActivityPopBaseWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYPOPBASEWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYPOPBASEWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYPOPBASEWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYPOPBASEWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYPOPBASEWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
