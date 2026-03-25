#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AdventureBattleResult.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/System/Object.h"

namespace EnviromentSystem { class EnviromentProfile; }
namespace RPG::Client { class Map; }
namespace RPG::Client { class Stage; }
namespace System { class String; }

#define RPG_CLIENT_ADVENTUREPHASEINITPARAMS_CLEARPLAYERSTARTPOSITION_OFFSET UNITYSDK_OFFSET(0x906EB70)
#define RPG_CLIENT_ADVENTUREPHASEINITPARAMS_SETUPENTERMAPTRIGGERSTORY_OFFSET UNITYSDK_OFFSET(0x906EBB0)
#define RPG_CLIENT_ADVENTUREPHASEINITPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x906EB60)

namespace RPG::Client
{
	inline static constexpr unsigned int AdventurePhaseInitParams_TypeDefinitionIndex = 48711;

	class AdventurePhaseInitParams : public ::System::Object
	{
	public:
		::System::String* EnterFrom; // 0x10
		::RPG::Client::Map* Map; // 0x18
		::EnviromentSystem::EnviromentProfile* DefaultEnvProfile; // 0x20
		::RPG::Client::Stage* StageCache; // 0x28
		::RPG::Client::AdventureBattleResult BattleResult; // 0x30
		::System::Boolean IsFromSwitchMap; // 0x34
		::System::Boolean LoadMapStageOnly; // 0x35
		::System::Boolean IsFromBattle; // 0x36

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
