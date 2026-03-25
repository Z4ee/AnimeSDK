#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_XBOXONEWIRELESSADAPTERWINDOWSNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x15BF42D0)
#define INCONTROL_NATIVEDEVICEPROFILES_XBOXONEWIRELESSADAPTERWINDOWSNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x15BF5760)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int XboxOneWirelessAdapterWindowsNativeProfile_TypeDefinitionIndex = 31917;

	class XboxOneWirelessAdapterWindowsNativeProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_XBOXONEWIRELESSADAPTERWINDOWSNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_XBOXONEWIRELESSADAPTERWINDOWSNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
