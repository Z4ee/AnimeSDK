#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePhaseType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class Map; }
namespace RPG::GameCore { class BattleAreaReferenceInfo; }
namespace RPG::GameCore { class BattleLineupData; }
namespace System { class String; }

#define RPG_CLIENT_BATTLEGAMEPHASEINITPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x91B8A60)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleGamePhaseInitParams_TypeDefinitionIndex = 49438;

	class BattleGamePhaseInitParams : public ::System::Object
	{
	public:
		::RPG::GameCore::BattleAreaReferenceInfo* BattleAreaInfo; // 0x10
		::RPG::GameCore::BattleLineupData* LineupData; // 0x18
		::RPG::Client::Map* ADVMap; // 0x20
		::System::String* BattleSceneName; // 0x28
		::System::Object* ExtraData; // 0x30
		::System::Boolean IsForceLoadScene; // 0x38
		::System::Boolean IsFromRestart; // 0x39
		::System::Boolean Simulate; // 0x3A
		::UnityEngine::Vector3 CoordinatePos; // 0x3C
		::System::Boolean IsClientBattle; // 0x48
		::System::Boolean IsShowBattleUI; // 0x49
		::System::Int32 LogicRandomSeed; // 0x4C
		::System::UInt32 RoundsLimit; // 0x50
		::System::UInt32 FloorID; // 0x54
		::System::UInt32 PlanID; // 0x58
		::System::UInt32 BattleID; // 0x5C
		::System::Boolean TriggerBattleFromDevPage; // 0x60
		::System::Boolean EncryptTime; // 0x61
		::System::Boolean DirectKillBattle; // 0x62
		::System::Boolean AutoBattleAtStart; // 0x63
		::RPG::Client::GamePhaseType FromPhaseType; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPHASEINITPARAMS__CTOR_OFFSET))(this);
		}
	};
}
