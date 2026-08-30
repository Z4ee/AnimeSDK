#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_PLAYSTATION5USBMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x149472B0)
#define INCONTROL_NATIVEDEVICEPROFILES_PLAYSTATION5USBMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x149486E0)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int PlayStation5USBMacNativeProfile_TypeDefinitionIndex = 39969;

	class PlayStation5USBMacNativeProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_PLAYSTATION5USBMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_PLAYSTATION5USBMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
