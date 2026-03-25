#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CameraFightStateCommonConfig.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPG_CLIENT_CAMERAFIGHTSTATESELECTSERVANTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x925A1D0)

namespace RPG::Client
{
	inline static constexpr unsigned int CameraFightStateSelectServantConfig_TypeDefinitionIndex = 56881;

	class CameraFightStateSelectServantConfig : public ::RPG::Client::CameraFightStateCommonConfig
	{
	public:
		::UnityEngine::Vector3 FollowOffset; // 0x20
		::UnityEngine::Vector3 ChooseFriendTargetMaxDeflection; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAFIGHTSTATESELECTSERVANTCONFIG__CTOR_OFFSET))(this);
		}
	};
}
