#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_EIGHTBITDONES30PROWINDOWSNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x17FD0B10)
#define INCONTROL_NATIVEDEVICEPROFILES_EIGHTBITDONES30PROWINDOWSNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x17FD1C10)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int EightBitdoNES30ProWindowsNativeProfile_TypeDefinitionIndex = 38334;

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
