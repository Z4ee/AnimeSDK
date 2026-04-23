#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ETimelineControlGameCharacterMoveDirection.h"
#include "unitysdk/RPG/Client/LittleGame/ETimelineControlGameLevelFloorPoint.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_54AE1C44DE8123D2;

#define RPG_CLIENT_LITTLEGAME_TIMELINECONTROLGAMECHARACTERMOVEMENTPATH__CTOR_OFFSET UNITYSDK_OFFSET(0x17EF8960)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int TimelineControlGameCharacterMovementPath_TypeDefinitionIndex = 38745;

	class TimelineControlGameCharacterMovementPath : public ::System::Object
	{
	public:
		::Class_2_54AE1C44DE8123D2* MoveBaseEntity; // 0x10
		::System::Boolean IsFalling; // 0x18
		::System::Single MoveTime; // 0x1C
		::System::Single CostTime; // 0x20
		::UnityEngine::Vector3 DirectionVector; // 0x24
		::RPG::Client::LittleGame::ETimelineControlGameCharacterMoveDirection Direction; // 0x30
		::UnityEngine::Vector3 SourceOffset; // 0x34
		::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint TargetPoint; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_TIMELINECONTROLGAMECHARACTERMOVEMENTPATH__CTOR_OFFSET))(this);
		}
	};
}
