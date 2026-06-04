#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_PLAYSTATION4WINDOWSNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x17FF77C0)
#define INCONTROL_NATIVEDEVICEPROFILES_PLAYSTATION4WINDOWSNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x17FF8A30)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int PlayStation4WindowsNativeProfile_TypeDefinitionIndex = 38353;

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
