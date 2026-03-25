#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_XBOXWIRELESSMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x15BF9A10)
#define INCONTROL_NATIVEDEVICEPROFILES_XBOXWIRELESSMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x15BFADB0)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int XboxWirelessMacNativeProfile_TypeDefinitionIndex = 31861;

	class XboxWirelessMacNativeProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_XBOXWIRELESSMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_XBOXWIRELESSMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
