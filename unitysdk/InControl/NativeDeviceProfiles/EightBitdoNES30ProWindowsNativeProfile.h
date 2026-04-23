#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_EIGHTBITDONES30PROWINDOWSNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1718B7B0)
#define INCONTROL_NATIVEDEVICEPROFILES_EIGHTBITDONES30PROWINDOWSNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1718CC50)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int EightBitdoNES30ProWindowsNativeProfile_TypeDefinitionIndex = 37602;

	class EightBitdoNES30ProWindowsNativeProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_EIGHTBITDONES30PROWINDOWSNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_EIGHTBITDONES30PROWINDOWSNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
