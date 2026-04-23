#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_AIRFLOPS3WINDOWSNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x171806A0)
#define INCONTROL_NATIVEDEVICEPROFILES_AIRFLOPS3WINDOWSNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x17181BD0)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int AirFloPS3WindowsNativeProfile_TypeDefinitionIndex = 37600;

	class AirFloPS3WindowsNativeProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_AIRFLOPS3WINDOWSNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_AIRFLOPS3WINDOWSNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
