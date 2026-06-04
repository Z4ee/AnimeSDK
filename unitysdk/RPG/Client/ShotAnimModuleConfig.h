#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CameraModuleConfigBase.h"
#include "unitysdk/RPG/Client/CameraModuleType.h"

namespace RPG::Client { class ShotAnimMovementData; }

#define RPG_CLIENT_SHOTANIMMODULECONFIG_METHOD_4_2BF4648671111A7E_OFFSET UNITYSDK_OFFSET(0xC8C0950)
#define RPG_CLIENT_SHOTANIMMODULECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xC8C09A0)

namespace RPG::Client
{
	inline static constexpr unsigned int ShotAnimModuleConfig_TypeDefinitionIndex = 65150;

	class ShotAnimModuleConfig : public ::RPG::Client::CameraModuleConfigBase
	{
	public:
		::RPG::Client::ShotAnimMovementData* DefaultShotAnimMovementData; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHOTANIMMODULECONFIG__CTOR_OFFSET))(this);
		}

		::RPG::Client::CameraModuleType Method_4_2BF4648671111A7E()
		{
			return ((::RPG::Client::CameraModuleType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHOTANIMMODULECONFIG_METHOD_4_2BF4648671111A7E_OFFSET))(this);
		}
	};
}
