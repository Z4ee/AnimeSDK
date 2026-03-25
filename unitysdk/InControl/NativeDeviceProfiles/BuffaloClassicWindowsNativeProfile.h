#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_BUFFALOCLASSICWINDOWSNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x15B874D0)
#define INCONTROL_NATIVEDEVICEPROFILES_BUFFALOCLASSICWINDOWSNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x15B88000)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int BuffaloClassicWindowsNativeProfile_TypeDefinitionIndex = 31881;

	class BuffaloClassicWindowsNativeProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_BUFFALOCLASSICWINDOWSNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_BUFFALOCLASSICWINDOWSNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
