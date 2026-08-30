#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_B51RACING_B51RACINGQTEPERFORMANCECONFIG_GET_FALLINGQTEPRESSTOSTANDARDTIME_OFFSET UNITYSDK_OFFSET(0xC895E60)
#define RPG_CLIENT_B51RACING_B51RACINGQTEPERFORMANCECONFIG_GET_LAUNCHQTEPRESSTOSTANDARDTIME_OFFSET UNITYSDK_OFFSET(0xC895E10)
#define RPG_CLIENT_B51RACING_B51RACINGQTEPERFORMANCECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xC895EB0)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingQTEPerformanceConfig_TypeDefinitionIndex = 80559;

	class B51RacingQTEPerformanceConfig : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single _launchQtePressToStandardTime; // 0x18
		::System::Single _fallingQtePressToStandardTime; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGQTEPERFORMANCECONFIG__CTOR_OFFSET))(this);
		}

		::System::Single get_LaunchQtePressToStandardTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGQTEPERFORMANCECONFIG_GET_LAUNCHQTEPRESSTOSTANDARDTIME_OFFSET))(this);
		}

		::System::Single get_FallingQtePressToStandardTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGQTEPERFORMANCECONFIG_GET_FALLINGQTEPRESSTOSTANDARDTIME_OFFSET))(this);
		}
	};
}
