#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_STEELSERIESNIMBUSPLUSMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x132E4690)
#define INCONTROL_NATIVEDEVICEPROFILES_STEELSERIESNIMBUSPLUSMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x132E5330)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int SteelseriesNimbusPlusMacNativeProfile_TypeDefinitionIndex = 39113;

	class SteelseriesNimbusPlusMacNativeProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_STEELSERIESNIMBUSPLUSMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_STEELSERIESNIMBUSPLUSMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
