#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_HELIOBUSCHALLENGESTAGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x189F3770)
#define RPG_GAMECORE_HELIOBUSCHALLENGESTAGEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x189F3CF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HeliobusChallengeStageRow_TypeDefinitionIndex = 13032;

	class HeliobusChallengeStageRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* MonsterList; // 0x10
		::Il2CppArray<::System::UInt32>* BattleTargetList; // 0x18
		::Il2CppArray<::System::UInt32>* HeliobusSkillRecList; // 0x20
		::System::UInt32 UnlockPhase; // 0x28
		::System::UInt32 ChallengeID; // 0x2C
		::System::UInt32 PreChallengeID; // 0x30
		::System::UInt32 PlaneID; // 0x34
		::System::UInt32 HeliobusChallengeHard; // 0x38
		::System::UInt32 FloorID; // 0x3C
		::System::UInt32 BattleAreaGroupID; // 0x40
		::System::UInt32 EventID; // 0x44
		::System::UInt32 HeliobusMazeBuff; // 0x48
		::RPG::Client::TextID ChallengeName; // 0x50
		::RPG::Client::TextID ChallengeDesc; // 0x60
		::System::UInt32 RewardID; // 0x70
		::System::UInt32 BattleAreaID; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSCHALLENGESTAGEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::HeliobusChallengeStageRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HeliobusChallengeStageRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSCHALLENGESTAGEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
