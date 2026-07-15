#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"

namespace EnviromentSystem { class EnviromentProfile; }
namespace RPG::Client { class TimeSpaceCrisscrossLightsBehavior; }

#define RPG_CLIENT_TIMESPACECRISSCROSSLIGHTSMONOPLUGIN_GET_EXECUTEINPREFABINSTANCE_OFFSET UNITYSDK_OFFSET(0x1789DB90)
#define RPG_CLIENT_TIMESPACECRISSCROSSLIGHTSMONOPLUGIN_ISFORBIDFASTFADING_OFFSET UNITYSDK_OFFSET(0x1789DB50)
#define RPG_CLIENT_TIMESPACECRISSCROSSLIGHTSMONOPLUGIN_SETFADEINOUTINTENSITY_OFFSET UNITYSDK_OFFSET(0x1789DAA0)
#define RPG_CLIENT_TIMESPACECRISSCROSSLIGHTSMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1789DBA0)

namespace RPG::Client
{
	inline static constexpr unsigned int TimeSpaceCrisscrossLightsMonoPlugin_TypeDefinitionIndex = 67089;

	class TimeSpaceCrisscrossLightsMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::TimeSpaceCrisscrossLightsBehavior*>
	{
	public:
		::EnviromentSystem::EnviromentProfile* EnvProfileA; // 0x30
		::EnviromentSystem::EnviromentProfile* EnvProfileB; // 0x38
		::System::Boolean EnableTSCFog; // 0x40
		::System::Single IntensityThreshold; // 0x44
		::System::Single SizeThreshold; // 0x48
		::System::Single LightRangeReduction; // 0x4C
		::System::Boolean DisableClusterLightingOpt; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSLIGHTSMONOPLUGIN__CTOR_OFFSET))(this);
		}

		::System::Void SetFadeInOutIntensity(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSLIGHTSMONOPLUGIN_SETFADEINOUTINTENSITY_OFFSET))(this, a1);
		}

		::System::Boolean IsForbidFastFading()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSLIGHTSMONOPLUGIN_ISFORBIDFASTFADING_OFFSET))(this);
		}

		::System::Boolean get_ExecuteInPrefabInstance()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSLIGHTSMONOPLUGIN_GET_EXECUTEINPREFABINSTANCE_OFFSET))(this);
		}
	};
}
