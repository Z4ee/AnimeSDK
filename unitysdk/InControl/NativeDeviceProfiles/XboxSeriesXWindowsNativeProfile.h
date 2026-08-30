#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_XBOXSERIESXWINDOWSNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1B5672B0)
#define INCONTROL_NATIVEDEVICEPROFILES_XBOXSERIESXWINDOWSNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B568350)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int XboxSeriesXWindowsNativeProfile_TypeDefinitionIndex = 40037;

	class XboxSeriesXWindowsNativeProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_XBOXSERIESXWINDOWSNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_XBOXSERIESXWINDOWSNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
