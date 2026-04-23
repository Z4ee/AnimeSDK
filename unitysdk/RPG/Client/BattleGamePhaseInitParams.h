#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePhaseType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class Map; }
namespace RPG::GameCore { class BattleAreaReferenceInfo; }
namespace RPG::GameCore { class BattleLineupData; }
namespace System { class String; }

#define RPG_CLIENT_BATTLEGAMEPHASEINITPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x9E5E780)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleGamePhaseInitParams_TypeDefinitionIndex = 56235;

	class BattleGamePhaseInitParams : public ::System::Object
	{
	public:
		::System::String* BattleSceneName; // 0x10
		::System::Object* ExtraData; // 0x18
		::RPG::Client::Map* ADVMap; // 0x20
		::RPG::GameCore::BattleAreaReferenceInfo* BattleAreaInfo; // 0x28
		::RPG::GameCore::BattleLineupData* LineupData; // 0x30
		::System::UInt32 BattleID; // 0x38
		::System::Boolean AutoBattleAtStart; // 0x3C
		::System::Boolean IsClientBattle; // 0x3D
		::System::Boolean EncryptTime; // 0x3E
		::System::Boolean Simulate; // 0x3F
		::UnityEngine::Vector3 CoordinatePos; // 0x40
		::System::UInt32 PlanID; // 0x4C
		::RPG::Client::GamePhaseType FromPhaseType; // 0x50
		::System::UInt32 FloorID; // 0x54
		::System::Boolean DirectKillBattle; // 0x58
		::System::Boolean IsFromRestart; // 0x59
		::System::Boolean TriggerBattleFromDevPage; // 0x5A
		::System::Boolean IsForceLoadScene; // 0x5B
		::System::Boolean IsShowBattleUI; // 0x5C
		::System::UInt32 RoundsLimit; // 0x60
		::System::Int32 LogicRandomSeed; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPHASEINITPARAMS__CTOR_OFFSET))(this);
		}
	};
}
