#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_BUFFALOCLASSICAMAZONUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x15C29E10)
#define INCONTROL_UNITYDEVICEPROFILES_BUFFALOCLASSICAMAZONUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x15C2A7C0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int BuffaloClassicAmazonUnityProfile_TypeDefinitionIndex = 31511;

	class BuffaloClassicAmazonUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_BUFFALOCLASSICAMAZONUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_BUFFALOCLASSICAMAZONUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
