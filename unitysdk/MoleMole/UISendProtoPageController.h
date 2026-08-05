#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

#define MOLEMOLE_UISENDPROTOPAGECONTROLLER_CLOSEMAINCITYSTOREPAGE_OFFSET UNITYSDK_OFFSET(0x15113DE0)
#define MOLEMOLE_UISENDPROTOPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x15113D40)
#define MOLEMOLE_UISENDPROTOPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x15113D50)
#define MOLEMOLE_UISENDPROTOPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15113E60)
#define MOLEMOLE_UISENDPROTOPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x15113E70)

namespace MoleMole
{
	inline static constexpr unsigned int UISendProtoPageController_TypeDefinitionIndex = 81869;

	class UISendProtoPageController : public ::MoleMole::UIWindowController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISENDPROTOPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISENDPROTOPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISENDPROTOPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET))(this);
		}

		::System::Void CloseMainCityStorePage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISENDPROTOPAGECONTROLLER_CLOSEMAINCITYSTOREPAGE_OFFSET))(this);
		}

		::System::Void __base_SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISENDPROTOPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET))(this);
		}
	};
}
