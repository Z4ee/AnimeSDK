#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePhaseType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class Map; }
namespace RPG::GameCore { class BattleAreaReferenceInfo; }
namespace RPG::GameCore { class BattleLineupData; }
namespace System { class String; }

#define RPG_CLIENT_BATTLEGAMEPHASEINITPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0xC8353C0)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleGamePhaseInitParams_TypeDefinitionIndex = 60974;

	class BattleGamePhaseInitParams : public ::System::Object
	{
	public:
		::RPG::Client::Map* ADVMap; // 0x10
		::RPG::GameCore::BattleLineupData* LineupData; // 0x18
		::System::Object* ExtraData; // 0x20
		::RPG::GameCore::BattleAreaReferenceInfo* BattleAreaInfo; // 0x28
		::System::String* BattleSceneName; // 0x30
		::System::Int32 RestartCount; // 0x38
		::System::UInt32 FloorID; // 0x3C
		::UnityEngine::Vector3 CoordinatePos; // 0x40
		::System::UInt32 RoundsLimit; // 0x4C
		::System::Boolean TriggerBattleFromDevPage; // 0x50
		::System::Boolean AutoBattleAtStart; // 0x51
		::System::Boolean IsShowBattleUI; // 0x52
		::System::Boolean DirectKillBattle; // 0x53
		::RPG::Client::GamePhaseType FromPhaseType; // 0x54
		::System::Int32 LogicRandomSeed; // 0x58
		::System::UInt32 BattleID; // 0x5C
		::System::UInt32 PlanID; // 0x60
		::System::Boolean EncryptTime; // 0x64
		::System::Boolean IsForceLoadScene; // 0x65
		::System::Boolean IsClientBattle; // 0x66
		::System::Boolean IsFromRestart; // 0x67
		::System::Boolean Simulate; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPHASEINITPARAMS__CTOR_OFFSET))(this);
		}
	};
}
