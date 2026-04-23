#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AdventureBattleResult.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/System/Object.h"

class Class_2_BA06A5BD139A4E18;
namespace EnviromentSystem { class EnviromentProfile; }
namespace RPG::Client { class Map; }
namespace System { class String; }

#define RPG_CLIENT_ADVENTUREPHASEINITPARAMS_CLEARPLAYERSTARTPOSITION_OFFSET UNITYSDK_OFFSET(0x9CCBBD0)
#define RPG_CLIENT_ADVENTUREPHASEINITPARAMS_SETUPENTERMAPTRIGGERSTORY_OFFSET UNITYSDK_OFFSET(0x9CCBC10)
#define RPG_CLIENT_ADVENTUREPHASEINITPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x9CCBBC0)

namespace RPG::Client
{
	inline static constexpr unsigned int AdventurePhaseInitParams_TypeDefinitionIndex = 55460;

	class AdventurePhaseInitParams : public ::System::Object
	{
	public:
		::RPG::Client::Map* Map; // 0x10
		::System::String* EnterFrom; // 0x18
		::Class_2_BA06A5BD139A4E18* StageCache; // 0x20
		::EnviromentSystem::EnviromentProfile* DefaultEnvProfile; // 0x28
		::RPG::Client::AdventureBattleResult BattleResult; // 0x30
		::System::Boolean IsFromBattle; // 0x34
		::System::Boolean IsFromSwitchMap; // 0x35
		::System::Boolean LoadMapStageOnly; // 0x36

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEINITPARAMS__CTOR_OFFSET))(this);
		}

		::System::Void ClearPlayerStartPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEINITPARAMS_CLEARPLAYERSTARTPOSITION_OFFSET))(this);
		}

		::System::Void SetupEnterMapTriggerStory(::System::UInt32 performanceID, ::RPG::GameCore::ELevelPerformanceType performanceType)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::ELevelPerformanceType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEINITPARAMS_SETUPENTERMAPTRIGGERSTORY_OFFSET))(this, performanceID, performanceType);
		}
	};
}
