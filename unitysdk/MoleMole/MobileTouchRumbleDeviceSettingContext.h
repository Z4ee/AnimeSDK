#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MobileTouchRumbleDevice.h"
#include "unitysdk/MoleMole/SystemSettingContextBase.h"

#define MOLEMOLE_MOBILETOUCHRUMBLEDEVICESETTINGCONTEXT_ISSHOWONUIINNER_OFFSET UNITYSDK_OFFSET(0x182FE3E0)
#define MOLEMOLE_MOBILETOUCHRUMBLEDEVICESETTINGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x182FE470)
#define MOLEMOLE_MOBILETOUCHRUMBLEDEVICESETTINGCONTEXT___BASE_ISSHOWONUIINNER_OFFSET UNITYSDK_OFFSET(0x182FE490)

namespace MoleMole
{
	inline static constexpr unsigned int MobileTouchRumbleDeviceSettingContext_TypeDefinitionIndex = 68471;

	class MobileTouchRumbleDeviceSettingContext : public ::MoleMole::SystemSettingContextBase
	{
	public:
		::MoleMole::MobileTouchRumbleDevice RumbleDevice; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MOBILETOUCHRUMBLEDEVICESETTINGCONTEXT__CTOR_OFFSET))(this);
		}

		::System::Boolean IsShowOnUIInner()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MOBILETOUCHRUMBLEDEVICESETTINGCONTEXT_ISSHOWONUIINNER_OFFSET))(this);
		}

		::System::Boolean __base_IsShowOnUIInner()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MOBILETOUCHRUMBLEDEVICESETTINGCONTEXT___BASE_ISSHOWONUIINNER_OFFSET))(this);
		}
	};
}
