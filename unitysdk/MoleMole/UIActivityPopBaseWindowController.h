#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWindowController.h"

#define MOLEMOLE_UIACTIVITYPOPBASEWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x173D13A0)
#define MOLEMOLE_UIACTIVITYPOPBASEWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x173D0F40)
#define MOLEMOLE_UIACTIVITYPOPBASEWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x173D1680)
#define MOLEMOLE_UIACTIVITYPOPBASEWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x173D7950)
#define MOLEMOLE_UIACTIVITYPOPBASEWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x173D7960)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityPopBaseWindowController_TypeDefinitionIndex = 45196;

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
