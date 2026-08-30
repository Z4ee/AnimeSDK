#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AdventureBattleResult.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/System/Object.h"

class Class_2_2CF600F518D344A2;
namespace EnviromentSystem { class EnviromentProfile; }
namespace RPG::Client { class Map; }
namespace System { class String; }

#define RPG_CLIENT_ADVENTUREPHASEINITPARAMS_CLEARPLAYERSTARTPOSITION_OFFSET UNITYSDK_OFFSET(0xC7030A0)
#define RPG_CLIENT_ADVENTUREPHASEINITPARAMS_SETUPENTERMAPTRIGGERSTORY_OFFSET UNITYSDK_OFFSET(0xC7030E0)
#define RPG_CLIENT_ADVENTUREPHASEINITPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0xC703080)

namespace RPG::Client
{
	inline static constexpr unsigned int AdventurePhaseInitParams_TypeDefinitionIndex = 60267;

	class AdventurePhaseInitParams : public ::System::Object
	{
	public:
		::RPG::Client::Map* Map; // 0x10
		::Class_2_2CF600F518D344A2* StageCache; // 0x18
		::EnviromentSystem::EnviromentProfile* DefaultEnvProfile; // 0x20
		::System::String* EnterFrom; // 0x28
		::System::Boolean IsFromBattle; // 0x30
		::System::Boolean IsFromSwitchMap; // 0x31
		::System::Boolean LoadMapStageOnly; // 0x32
		::RPG::Client::AdventureBattleResult BattleResult; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEINITPARAMS__CTOR_OFFSET))(this);
		}

		::System::Void ClearPlayerStartPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEINITPARAMS_CLEARPLAYERSTARTPOSITION_OFFSET))(this);
		}

		::System::Void SetupEnterMapTriggerStory(::System::UInt32 a1, ::RPG::GameCore::ELevelPerformanceType a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::ELevelPerformanceType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEINITPARAMS_SETUPENTERMAPTRIGGERSTORY_OFFSET))(this, a1, a2);
		}
	};
}
