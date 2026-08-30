#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/RoadRash/EAIBehindBehavior.h"
#include "unitysdk/RPG/Client/LittleGame/RoadRash/EAICarState.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client::LittleGame::RoadRash
{
	inline static constexpr unsigned int AICarRuntimeState_TypeDefinitionIndex = 41288;

	struct alignas(4) AICarRuntimeState
	{
		::RPG::Client::LittleGame::RoadRash::EAICarState State; // 0x10
		::System::Single Timer; // 0x14
		::System::Single BehaviorCooldownTimer; // 0x18
		::RPG::Client::LittleGame::RoadRash::EAIBehindBehavior BehindBehavior; // 0x1C
		::System::Single BuffTimer; // 0x20
		::System::Single BuffSpeedBoost; // 0x24
		::System::Boolean WasAheadLastFrame; // 0x28
		::System::Boolean TutorialSpeedOverrideActive; // 0x29
		::System::Boolean MatchSpeedOverrideActive; // 0x2A
		::System::Single OvertakenConfirmTimer; // 0x2C
		::System::Boolean LaneOffsetHoldActive; // 0x30
		::System::Boolean HighSpeedChaseActive; // 0x31
		::System::Single SmoothedTargetSpeed; // 0x34
		::System::Boolean DesiredRoadOffsetOverrideActive; // 0x38
		::System::Single DesiredRoadOffsetOverride; // 0x3C
		::System::Boolean DesiredDistanceOverrideActive; // 0x40
		::System::Single DesiredSignedDistanceOverride; // 0x44
		::System::Single DesiredDistanceOverridePlayerAdvance; // 0x48
	};
}
