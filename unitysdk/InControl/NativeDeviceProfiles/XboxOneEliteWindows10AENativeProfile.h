#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_XBOXONEELITEWINDOWS10AENATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x171E6870)
#define INCONTROL_NATIVEDEVICEPROFILES_XBOXONEELITEWINDOWS10AENATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x171E7E30)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int XboxOneEliteWindows10AENativeProfile_TypeDefinitionIndex = 37632;

	class XboxOneEliteWindows10AENativeProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_XBOXONEELITEWINDOWS10AENATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_XBOXONEELITEWINDOWS10AENATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
