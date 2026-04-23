#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CameraFightStateCommonConfig.h"

namespace RPG::Client { class CameraFightStateOrbitCruiseConfigData; }

#define RPG_CLIENT_CAMERAFIGHTSTATEORBITCRUISECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x9F1DB80)

namespace RPG::Client
{
	inline static constexpr unsigned int CameraFightStateOrbitCruiseConfig_TypeDefinitionIndex = 64126;

	class CameraFightStateOrbitCruiseConfig : public ::RPG::Client::CameraFightStateCommonConfig
	{
	public:
		::RPG::Client::CameraFightStateOrbitCruiseConfigData* ConfigData; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAFIGHTSTATEORBITCRUISECONFIG__CTOR_OFFSET))(this);
		}
	};
}
