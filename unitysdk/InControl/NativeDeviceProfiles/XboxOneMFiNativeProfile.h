#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_XBOXONEMFINATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1496C8F0)
#define INCONTROL_NATIVEDEVICEPROFILES_XBOXONEMFINATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1496DBD0)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int XboxOneMFiNativeProfile_TypeDefinitionIndex = 39954;

	class XboxOneMFiNativeProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_XBOXONEMFINATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_XBOXONEMFINATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
