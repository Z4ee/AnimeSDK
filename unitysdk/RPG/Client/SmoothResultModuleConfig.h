#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CameraModuleConfigBase.h"
#include "unitysdk/RPG/Client/CameraModuleType.h"

#define RPG_CLIENT_SMOOTHRESULTMODULECONFIG_METHOD_4_2BF4648671111A7E_OFFSET UNITYSDK_OFFSET(0x18906B20)
#define RPG_CLIENT_SMOOTHRESULTMODULECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18906B70)

namespace RPG::Client
{
	inline static constexpr unsigned int SmoothResultModuleConfig_TypeDefinitionIndex = 66559;

	class SmoothResultModuleConfig : public ::RPG::Client::CameraModuleConfigBase
	{
	public:
		::System::Boolean Enable; // 0x18
		::System::Boolean UseBattleAreaY; // 0x19
		::System::Single MinDistanceYToStageCollider; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SMOOTHRESULTMODULECONFIG__CTOR_OFFSET))(this);
		}

		::RPG::Client::CameraModuleType Method_4_2BF4648671111A7E()
		{
			return ((::RPG::Client::CameraModuleType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SMOOTHRESULTMODULECONFIG_METHOD_4_2BF4648671111A7E_OFFSET))(this);
		}
	};
}
