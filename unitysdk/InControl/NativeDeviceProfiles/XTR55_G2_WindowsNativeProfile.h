#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_XTR55_G2_WINDOWSNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1B557D00)
#define INCONTROL_NATIVEDEVICEPROFILES_XTR55_G2_WINDOWSNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B557DC0)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int XTR55_G2_WindowsNativeProfile_TypeDefinitionIndex = 40027;

	class XTR55_G2_WindowsNativeProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_XTR55_G2_WINDOWSNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_XTR55_G2_WINDOWSNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
