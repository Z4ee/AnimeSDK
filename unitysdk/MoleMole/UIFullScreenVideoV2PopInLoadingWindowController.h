#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIFullScreenVideoV2PopWindowController.h"

#define MOLEMOLE_UIFULLSCREENVIDEOV2POPINLOADINGWINDOWCONTROLLER_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x176335C0)
#define MOLEMOLE_UIFULLSCREENVIDEOV2POPINLOADINGWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x176336F0)
#define MOLEMOLE_UIFULLSCREENVIDEOV2POPINLOADINGWINDOWCONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x17633700)

namespace MoleMole
{
	inline static constexpr unsigned int UIFullScreenVideoV2PopInLoadingWindowController_TypeDefinitionIndex = 62478;

	class UIFullScreenVideoV2PopInLoadingWindowController : public ::MoleMole::UIFullScreenVideoV2PopWindowController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENVIDEOV2POPINLOADINGWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENVIDEOV2POPINLOADINGWINDOWCONTROLLER_SETUIWINDOWSETTING_OFFSET))(this);
		}

		::System::Void __base_SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENVIDEOV2POPINLOADINGWINDOWCONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET))(this);
		}
	};
}
