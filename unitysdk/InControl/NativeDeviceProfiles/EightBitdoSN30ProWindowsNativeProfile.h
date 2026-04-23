#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_EIGHTBITDOSN30PROWINDOWSNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1718FBD0)
#define INCONTROL_NATIVEDEVICEPROFILES_EIGHTBITDOSN30PROWINDOWSNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x17191090)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int EightBitdoSN30ProWindowsNativeProfile_TypeDefinitionIndex = 37605;

	class EightBitdoSN30ProWindowsNativeProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_EIGHTBITDOSN30PROWINDOWSNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_EIGHTBITDOSN30PROWINDOWSNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
