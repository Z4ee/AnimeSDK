#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_EIGHTBITDONES30PROBTMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x15B8B250)
#define INCONTROL_NATIVEDEVICEPROFILES_EIGHTBITDONES30PROBTMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x15B8C720)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int EightBitdoNES30ProBTMacNativeProfile_TypeDefinitionIndex = 31838;

	class EightBitdoNES30ProBTMacNativeProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_EIGHTBITDONES30PROBTMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_EIGHTBITDONES30PROBTMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
