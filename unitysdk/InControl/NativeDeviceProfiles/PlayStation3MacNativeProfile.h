#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_PLAYSTATION3MACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1B5313B0)
#define INCONTROL_NATIVEDEVICEPROFILES_PLAYSTATION3MACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B532620)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int PlayStation3MacNativeProfile_TypeDefinitionIndex = 39966;

	class PlayStation3MacNativeProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_PLAYSTATION3MACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_PLAYSTATION3MACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
