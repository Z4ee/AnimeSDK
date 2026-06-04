#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AdventureBattleResult.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/System/Object.h"

class Class_2_2CF600F518D344A2;
namespace EnviromentSystem { class EnviromentProfile; }
namespace RPG::Client { class Map; }
namespace System { class String; }

#define RPG_CLIENT_ADVENTUREPHASEINITPARAMS_CLEARPLAYERSTARTPOSITION_OFFSET UNITYSDK_OFFSET(0xB2705F0)
#define RPG_CLIENT_ADVENTUREPHASEINITPARAMS_SETUPENTERMAPTRIGGERSTORY_OFFSET UNITYSDK_OFFSET(0xB270630)
#define RPG_CLIENT_ADVENTUREPHASEINITPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0xB2705E0)

namespace RPG::Client
{
	inline static constexpr unsigned int AdventurePhaseInitParams_TypeDefinitionIndex = 56211;

	class AdventurePhaseInitParams : public ::System::Object
	{
	public:
		::Class_2_2CF600F518D344A2* StageCache; // 0x10
		::System::String* EnterFrom; // 0x18
		::EnviromentSystem::EnviromentProfile* DefaultEnvProfile; // 0x20
		::RPG::Client::Map* Map; // 0x28
		::System::Boolean LoadMapStageOnly; // 0x30
		::System::Boolean IsFromBattle; // 0x31
		::System::Boolean IsFromSwitchMap; // 0x32
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
