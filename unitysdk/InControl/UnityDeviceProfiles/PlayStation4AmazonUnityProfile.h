#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION4AMAZONUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1B60EBB0)
#define INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION4AMAZONUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B60FE20)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int PlayStation4AmazonUnityProfile_TypeDefinitionIndex = 39637;

	class PlayStation4AmazonUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION4AMAZONUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION4AMAZONUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
