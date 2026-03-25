#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_XBOXSERIESXWINDOWSNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x15BF84D0)
#define INCONTROL_NATIVEDEVICEPROFILES_XBOXSERIESXWINDOWSNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x15BF9920)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int XboxSeriesXWindowsNativeProfile_TypeDefinitionIndex = 31918;

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
