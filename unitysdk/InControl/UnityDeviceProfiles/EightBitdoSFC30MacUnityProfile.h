#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_EIGHTBITDOSFC30MACUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x15C3AE90)
#define INCONTROL_UNITYDEVICEPROFILES_EIGHTBITDOSFC30MACUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x15C3BA20)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int EightBitdoSFC30MacUnityProfile_TypeDefinitionIndex = 31595;

	class EightBitdoSFC30MacUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_EIGHTBITDOSFC30MACUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_EIGHTBITDOSFC30MACUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
