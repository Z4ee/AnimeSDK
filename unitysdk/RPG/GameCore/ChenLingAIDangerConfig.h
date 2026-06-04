#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHENLINGAIDANGERCONFIG_METHOD_2_1DB79E4B1F9C125E_OFFSET UNITYSDK_OFFSET(0x19619FB0)
#define RPG_GAMECORE_CHENLINGAIDANGERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1961A190)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingAIDangerConfig_TypeDefinitionIndex = 14922;

	class ChenLingAIDangerConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single BlockingObstacleDetectionRange; // 0x10
		::System::Single BlockingPathMargin; // 0x14
		::System::Single StaticObstacleDangerMultiplier; // 0x18
		::System::Single CollisionAheadFactor; // 0x1C
		::System::Single CollisionSafetyMargin; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGAIDANGERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_1DB79E4B1F9C125E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingAIDangerConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingAIDangerConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGAIDANGERCONFIG_METHOD_2_1DB79E4B1F9C125E_OFFSET))(a1, a2);
		}
	};
}
