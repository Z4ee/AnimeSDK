#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/AudioMixerDeviceSettingType.h"
#include "unitysdk/MoleMole/SystemSettingContextBase.h"

#define MOLEMOLE_AUDIOMIXERDEVICESETTINGCONTEXT_ISSHOWONUIINNER_OFFSET UNITYSDK_OFFSET(0x12A14280)
#define MOLEMOLE_AUDIOMIXERDEVICESETTINGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x12A14520)
#define MOLEMOLE_AUDIOMIXERDEVICESETTINGCONTEXT___BASE_ISSHOWONUIINNER_OFFSET UNITYSDK_OFFSET(0x12A14540)

namespace MoleMole
{
	inline static constexpr unsigned int AudioMixerDeviceSettingContext_TypeDefinitionIndex = 63787;

	class AudioMixerDeviceSettingContext : public ::MoleMole::SystemSettingContextBase
	{
	public:
		::MoleMole::AudioMixerDeviceSettingType AudioMixerDevice; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIOMIXERDEVICESETTINGCONTEXT__CTOR_OFFSET))(this);
		}

		::System::Boolean IsShowOnUIInner()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIOMIXERDEVICESETTINGCONTEXT_ISSHOWONUIINNER_OFFSET))(this);
		}

		::System::Boolean __base_IsShowOnUIInner()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIOMIXERDEVICESETTINGCONTEXT___BASE_ISSHOWONUIINNER_OFFSET))(this);
		}
	};
}
