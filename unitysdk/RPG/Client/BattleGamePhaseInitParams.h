#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePhaseType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class Map; }
namespace RPG::GameCore { class BattleAreaReferenceInfo; }
namespace RPG::GameCore { class BattleLineupData; }
namespace System { class String; }

#define RPG_CLIENT_BATTLEGAMEPHASEINITPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0xC918870)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleGamePhaseInitParams_TypeDefinitionIndex = 61071;

	class BattleGamePhaseInitParams : public ::System::Object
	{
	public:
		::System::Object* ExtraData; // 0x10
		::RPG::GameCore::BattleAreaReferenceInfo* BattleAreaInfo; // 0x18
		::RPG::Client::Map* ADVMap; // 0x20
		::RPG::GameCore::BattleLineupData* LineupData; // 0x28
		::System::String* BattleSceneName; // 0x30
		::System::Int32 RestartCount; // 0x38
		::System::UInt32 RoundsLimit; // 0x3C
		::System::UInt32 PlanID; // 0x40
		::System::Int32 LogicRandomSeed; // 0x44
		::System::Boolean Simulate; // 0x48
		::System::Boolean IsForceLoadScene; // 0x49
		::System::UInt32 BattleID; // 0x4C
		::System::UInt32 FloorID; // 0x50
		::RPG::Client::GamePhaseType FromPhaseType; // 0x54
		::System::Boolean IsShowBattleUI; // 0x58
		::System::Boolean DirectKillBattle; // 0x59
		::System::Boolean TriggerBattleFromDevPage; // 0x5A
		::System::Boolean IsClientBattle; // 0x5B
		::System::Boolean AutoBattleAtStart; // 0x5C
		::System::Boolean EncryptTime; // 0x5D
		::System::Boolean IsFromRestart; // 0x5E
		::UnityEngine::Vector3 CoordinatePos; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPHASEINITPARAMS__CTOR_OFFSET))(this);
		}
	};
}
