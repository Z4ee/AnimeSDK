#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_XBOXONEWINDOWS10NATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x132F2360)
#define INCONTROL_NATIVEDEVICEPROFILES_XBOXONEWINDOWS10NATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x132F34E0)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int XboxOneWindows10NativeProfile_TypeDefinitionIndex = 39175;

	class XboxOneWindows10NativeProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_XBOXONEWINDOWS10NATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_XBOXONEWINDOWS10NATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
