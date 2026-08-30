#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_PCTWINSHOCKWINDOWSNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1493E5E0)
#define INCONTROL_NATIVEDEVICEPROFILES_PCTWINSHOCKWINDOWSNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1493F640)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int PCTWINSHOCKWindowsNativeProfile_TypeDefinitionIndex = 40019;

	class PCTWINSHOCKWindowsNativeProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_PCTWINSHOCKWINDOWSNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_PCTWINSHOCKWINDOWSNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
