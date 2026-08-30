#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_CLIENT_ROADRASHGAMEMODIFIER_MATCHLEVELAIGLOBALPARAMS_METHOD_2_CD9FF74771B432D3_OFFSET UNITYSDK_OFFSET(0x1CD5CEF0)
#define RPG_CLIENT_ROADRASHGAMEMODIFIER_MATCHLEVELAIGLOBALPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD5EC00)

namespace RPG::Client
{
	inline static constexpr unsigned int RoadRashGameModifier_MatchLevelAIGlobalParams_TypeDefinitionIndex = 10303;

	class RoadRashGameModifier_MatchLevelAIGlobalParams : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::FixPoint AheadEnterDistance; // 0x10
		::RPG::GameCore::FixPoint AheadExitDistance; // 0x18
		::RPG::GameCore::FixPoint LeadDistanceDecayMin; // 0x20
		::RPG::GameCore::FixPoint OvertakeProtectionDuration; // 0x28
		::RPG::GameCore::FixPoint OvertakeProtectionSpeedRatio; // 0x30
		::RPG::GameCore::FixPoint OvertakeProtectionMinLeadDistance; // 0x38
		::RPG::GameCore::FixPoint OvertakenConfirmDuration; // 0x40
		::RPG::GameCore::FixPoint OvertakenSpeedRatio; // 0x48
		::RPG::GameCore::FixPoint OvertakenProtectionDuration; // 0x50
		::RPG::GameCore::FixPoint BehindBehaviorCooldown; // 0x58
		::RPG::GameCore::FixPoint BehindBuffDuration; // 0x60
		::RPG::GameCore::FixPoint BehindBuffSpeedBoost; // 0x68
		::RPG::GameCore::FixPoint DriftCurvatureThreshold; // 0x70
		::RPG::GameCore::FixPoint DriftMinDistance; // 0x78
		::RPG::GameCore::FixPoint DriftMaxDistance; // 0x80
		::RPG::GameCore::FixPoint DriftCooldown; // 0x88
		::RPG::GameCore::FixPoint SpeedAdjSmoothDuration; // 0x90
		::RPG::GameCore::FixPoint SpeedAdjMaxRatePerSec; // 0x98
		::RPG::GameCore::FixPoint SpeedGainPerMeter; // 0xA0
		::RPG::GameCore::FixPoint MinAISpeedRatio; // 0xA8
		::RPG::GameCore::FixPoint DelayChaseTime; // 0xB0
		::RPG::GameCore::FixPoint OvertakenEnterDistance; // 0xB8
		::RPG::GameCore::FixPoint ChaseDelayTime; // 0xC0
		::RPG::GameCore::FixPoint HighSpeedChaseSpeedAdjRate; // 0xC8
		::System::String* LaunchModifierName; // 0xD0
		::RPG::GameCore::FixPoint DriftLookAheadDistance; // 0xD8
		::RPG::GameCore::FixPoint DriftDetectDistance; // 0xE0
		::RPG::GameCore::FixPoint DriftReleaseAngleThreshold; // 0xE8
		::RPG::GameCore::FixPoint DriftMaxHoldTime; // 0xF0
		::RPG::GameCore::FixPoint DriftMinHoldTime; // 0xF8
		::RPG::GameCore::FixPoint DriftMinSpeed; // 0x100
		::RPG::GameCore::FixPoint SprintMinSpeedMultiple; // 0x108

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEMODIFIER_MATCHLEVELAIGLOBALPARAMS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_CD9FF74771B432D3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::RoadRashGameModifier_MatchLevelAIGlobalParams*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::RoadRashGameModifier_MatchLevelAIGlobalParams*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEMODIFIER_MATCHLEVELAIGLOBALPARAMS_METHOD_2_CD9FF74771B432D3_OFFSET))(a1, a2);
		}
	};
}
