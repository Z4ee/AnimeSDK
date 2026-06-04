#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_EIGHTBITDONES30PROUSBMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x17FCF900)
#define INCONTROL_NATIVEDEVICEPROFILES_EIGHTBITDONES30PROUSBMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x17FD0A20)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int EightBitdoNES30ProUSBMacNativeProfile_TypeDefinitionIndex = 38291;

	class EightBitdoNES30ProUSBMacNativeProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_EIGHTBITDONES30PROUSBMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_EIGHTBITDONES30PROUSBMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
