#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_EIGHTBITDOSFC30WINDOWSUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0xC0A32C0)
#define INCONTROL_UNITYDEVICEPROFILES_EIGHTBITDOSFC30WINDOWSUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0xC0A3BD0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int EightBitdoSFC30WindowsUnityProfile_TypeDefinitionIndex = 39767;

	class EightBitdoSFC30WindowsUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_EIGHTBITDOSFC30WINDOWSUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_EIGHTBITDOSFC30WINDOWSUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
