#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_EIGHTBITDOSFC30WINDOWSNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x15B915A0)
#define INCONTROL_NATIVEDEVICEPROFILES_EIGHTBITDOSFC30WINDOWSNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x15B92100)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int EightBitdoSFC30WindowsNativeProfile_TypeDefinitionIndex = 31884;

	class EightBitdoSFC30WindowsNativeProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_EIGHTBITDOSFC30WINDOWSNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_EIGHTBITDOSFC30WINDOWSNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
