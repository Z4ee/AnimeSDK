#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_EIGHTBITDONES30PROUSBMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x18EA0790)
#define INCONTROL_NATIVEDEVICEPROFILES_EIGHTBITDONES30PROUSBMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x18EA1850)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int EightBitdoNES30ProUSBMacNativeProfile_TypeDefinitionIndex = 39958;

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
