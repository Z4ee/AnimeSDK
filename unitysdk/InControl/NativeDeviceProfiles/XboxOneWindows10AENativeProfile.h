#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_XBOXONEWINDOWS10AENATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x18024F60)
#define INCONTROL_NATIVEDEVICEPROFILES_XBOXONEWINDOWS10AENATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x18026210)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int XboxOneWindows10AENativeProfile_TypeDefinitionIndex = 38366;

	class XboxOneWindows10AENativeProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_XBOXONEWINDOWS10AENATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_XBOXONEWINDOWS10AENATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
