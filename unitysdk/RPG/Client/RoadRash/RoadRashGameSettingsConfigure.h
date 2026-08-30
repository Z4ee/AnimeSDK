#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RoadRash/RoadRashGameSettingsConfigure_BoundaryImpactEffectConfig.h"
#include "unitysdk/RPG/Client/RoadRash/RoadRashGameSettingsConfigure_FallingLandingQTEConfig.h"
#include "unitysdk/RPG/Client/RoadRash/RoadRashGameSettingsConfigure_ImpactEffectConfig.h"
#include "unitysdk/RPG/Client/RoadRash/RoadRashGameSettingsConfigure_SlamLateralImpactConfig.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace RPG::Client::RoadRash { class MonoRoadRashGameAccelerationRing; }
namespace RPG::Client::RoadRash { class MonoRoadRashGameCar; }
namespace RPG::Client::RoadRash { class RoadRashGameSettingsConfigure_AICarConfig; }
namespace RPG::Client::RoadRash { class RoadRashGameSettingsConfigure_RoadRashTREventDetectorConfig; }

#define RPG_CLIENT_ROADRASH_ROADRASHGAMESETTINGSCONFIGURE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC6B550)

namespace RPG::Client::RoadRash
{
	inline static constexpr unsigned int RoadRashGameSettingsConfigure_TypeDefinitionIndex = 75479;

	class RoadRashGameSettingsConfigure : public ::UnityEngine::ScriptableObject
	{
	public:
		::RPG::Client::RoadRash::MonoRoadRashGameCar* CarTemplate; // 0x18
		::RPG::Client::RoadRash::MonoRoadRashGameAccelerationRing* AccelerationRingTemplate; // 0x20
		::RPG::Client::RoadRash::RoadRashGameSettingsConfigure_ImpactEffectConfig LightImpactConfig; // 0x28
		::RPG::Client::RoadRash::RoadRashGameSettingsConfigure_SlamLateralImpactConfig HeavyImpactConfig; // 0x60
		::RPG::Client::RoadRash::RoadRashGameSettingsConfigure_SlamLateralImpactConfig EnhanceImpactConfig; // 0x78
		::RPG::Client::RoadRash::RoadRashGameSettingsConfigure_BoundaryImpactEffectConfig BoundaryImpactConfig; // 0x90
		::RPG::Client::RoadRash::RoadRashGameSettingsConfigure_FallingLandingQTEConfig FallingLandingConfig; // 0xB8
		::RPG::Client::RoadRash::RoadRashGameSettingsConfigure_RoadRashTREventDetectorConfig* TREventDetectorConfig; // 0xC8
		::RPG::Client::RoadRash::RoadRashGameSettingsConfigure_AICarConfig* AIConfig; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_ROADRASHGAMESETTINGSCONFIGURE__CTOR_OFFSET))(this);
		}
	};
}
