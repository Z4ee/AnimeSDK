#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_BUFFALOCLASSICMACUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0xC094E50)
#define INCONTROL_UNITYDEVICEPROFILES_BUFFALOCLASSICMACUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0xC095800)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int BuffaloClassicMacUnityProfile_TypeDefinitionIndex = 39712;

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
