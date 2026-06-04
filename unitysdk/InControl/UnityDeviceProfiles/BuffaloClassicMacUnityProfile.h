#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_BUFFALOCLASSICMACUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1805ADD0)
#define INCONTROL_UNITYDEVICEPROFILES_BUFFALOCLASSICMACUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1805B7E0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int BuffaloClassicMacUnityProfile_TypeDefinitionIndex = 38045;

	class BuffaloClassicMacUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_BUFFALOCLASSICMACUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_BUFFALOCLASSICMACUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
