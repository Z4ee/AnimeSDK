#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePhaseType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class Map; }
namespace RPG::GameCore { class BattleAreaReferenceInfo; }
namespace RPG::GameCore { class BattleLineupData; }
namespace System { class String; }

#define RPG_CLIENT_BATTLEGAMEPHASEINITPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x19F651B0)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleGamePhaseInitParams_TypeDefinitionIndex = 61071;

	class BattleGamePhaseInitParams : public ::System::Object
	{
	public:
		::RPG::GameCore::BattleLineupData* LineupData; // 0x10
		::RPG::Client::Map* ADVMap; // 0x18
		::System::String* BattleSceneName; // 0x20
		::RPG::GameCore::BattleAreaReferenceInfo* BattleAreaInfo; // 0x28
		::System::Object* ExtraData; // 0x30
		::RPG::Client::GamePhaseType FromPhaseType; // 0x38
		::System::UInt32 PlanID; // 0x3C
		::UnityEngine::Vector3 CoordinatePos; // 0x40
		::System::Boolean IsForceLoadScene; // 0x4C
		::System::Boolean DirectKillBattle; // 0x4D
		::System::Boolean IsClientBattle; // 0x4E
		::System::Boolean EncryptTime; // 0x4F
		::System::UInt32 BattleID; // 0x50
		::System::Boolean IsShowBattleUI; // 0x54
		::System::Boolean IsFromRestart; // 0x55
		::System::Boolean Simulate; // 0x56
		::System::Boolean AutoBattleAtStart; // 0x57
		::System::UInt32 RoundsLimit; // 0x58
		::System::Int32 RestartCount; // 0x5C
		::System::UInt32 FloorID; // 0x60
		::System::Int32 LogicRandomSeed; // 0x64
		::System::Boolean TriggerBattleFromDevPage; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPHASEINITPARAMS__CTOR_OFFSET))(this);
		}
	};
}
