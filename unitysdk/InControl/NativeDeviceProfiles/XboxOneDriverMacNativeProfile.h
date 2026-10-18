#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_XBOXONEDRIVERMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1BA07020)
#define INCONTROL_NATIVEDEVICEPROFILES_XBOXONEDRIVERMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA08360)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int XboxOneDriverMacNativeProfile_TypeDefinitionIndex = 41273;

	class XboxOneDriverMacNativeProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_XBOXONEDRIVERMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_XBOXONEDRIVERMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
