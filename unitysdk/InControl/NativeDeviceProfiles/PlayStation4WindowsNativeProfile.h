#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_PLAYSTATION4WINDOWSNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x171B9130)
#define INCONTROL_NATIVEDEVICEPROFILES_PLAYSTATION4WINDOWSNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x171BA7B0)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int PlayStation4WindowsNativeProfile_TypeDefinitionIndex = 37621;

	class PlayStation4WindowsNativeProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_PLAYSTATION4WINDOWSNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_PLAYSTATION4WINDOWSNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
