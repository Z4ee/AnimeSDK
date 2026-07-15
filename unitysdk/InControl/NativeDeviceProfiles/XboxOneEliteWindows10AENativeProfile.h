#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_XBOXONEELITEWINDOWS10AENATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x132EB350)
#define INCONTROL_NATIVEDEVICEPROFILES_XBOXONEELITEWINDOWS10AENATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x132EC510)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int XboxOneEliteWindows10AENativeProfile_TypeDefinitionIndex = 39172;

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
