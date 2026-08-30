#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::Client { class RoadRashGameModifier_MatchLevelAIConfig_ProgressKeyframe; }

#define RPG_CLIENT_ROADRASHGAMEMODIFIER_MATCHLEVELAICONFIG_METHOD_2_CD286B0D837E8DF5_OFFSET UNITYSDK_OFFSET(0x1D31B170)
#define RPG_CLIENT_ROADRASHGAMEMODIFIER_MATCHLEVELAICONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D31BBA0)

namespace RPG::Client
{
	inline static constexpr unsigned int RoadRashGameModifier_MatchLevelAIConfig_TypeDefinitionIndex = 10302;

	class RoadRashGameModifier_MatchLevelAIConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean IsLeader; // 0x10
		::RPG::GameCore::FixPoint MinSpeedMultiple; // 0x18
		::RPG::GameCore::FixPoint MaxSpeedMultiple; // 0x20
		::RPG::GameCore::FixPoint OpeningSpeedRatio; // 0x28
		::RPG::GameCore::FixPoint TargetLeadingDistance; // 0x30
		::RPG::GameCore::FixPoint GiveUpLeadingProgress; // 0x38
		::Il2CppArray<::RPG::Client::RoadRashGameModifier_MatchLevelAIConfig_ProgressKeyframe*>* TargetLeadingDistanceProgression; // 0x40
		::RPG::GameCore::FixPoint TargetFollowDistance; // 0x48
		::RPG::GameCore::FixPoint MidAheadSpeedRatio; // 0x50
		::RPG::GameCore::FixPoint MidBehindDoNothingWeight; // 0x58
		::RPG::GameCore::FixPoint MidBehindSpeedUpWeight; // 0x60
		::RPG::GameCore::FixPoint MidBehindBuffWeight; // 0x68
		::RPG::GameCore::FixPoint MidBehindSpeedRatio; // 0x70
		::RPG::GameCore::FixPoint OvertakenRecoveryRatio; // 0x78
		::RPG::GameCore::FixPoint DriftOvertakeChance; // 0x80
		::RPG::GameCore::FixPoint DriftChance; // 0x88
		::RPG::GameCore::FixPoint SprintAheadRatio; // 0x90
		::RPG::GameCore::FixPoint SprintBehindRatio; // 0x98
		::RPG::GameCore::FixPoint ChaseMinSpeedMultiple; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEMODIFIER_MATCHLEVELAICONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_CD286B0D837E8DF5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::RoadRashGameModifier_MatchLevelAIConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::RoadRashGameModifier_MatchLevelAIConfig*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEMODIFIER_MATCHLEVELAICONFIG_METHOD_2_CD286B0D837E8DF5_OFFSET))(a1, a2);
		}
	};
}
