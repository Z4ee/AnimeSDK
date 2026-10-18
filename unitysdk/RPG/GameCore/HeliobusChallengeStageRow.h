#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_HELIOBUSCHALLENGESTAGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D730530)
#define RPG_GAMECORE_HELIOBUSCHALLENGESTAGEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D730AA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HeliobusChallengeStageRow_TypeDefinitionIndex = 13761;

	class HeliobusChallengeStageRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* BattleTargetList; // 0x10
		::Il2CppArray<::System::UInt32>* HeliobusSkillRecList; // 0x18
		::Il2CppArray<::System::UInt32>* MonsterList; // 0x20
		::System::UInt32 PlaneID; // 0x28
		::System::UInt32 EventID; // 0x2C
		::System::UInt32 FloorID; // 0x30
		::System::UInt32 RewardID; // 0x34
		::System::UInt32 UnlockPhase; // 0x38
		::System::UInt32 BattleAreaGroupID; // 0x3C
		::System::UInt32 BattleAreaID; // 0x40
		::RPG::Client::TextID ChallengeName; // 0x48
		::System::UInt32 HeliobusChallengeHard; // 0x58
		::System::UInt32 PreChallengeID; // 0x5C
		::RPG::Client::TextID ChallengeDesc; // 0x60
		::System::UInt32 ChallengeID; // 0x70
		::System::UInt32 HeliobusMazeBuff; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSCHALLENGESTAGEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HeliobusChallengeStageRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HeliobusChallengeStageRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSCHALLENGESTAGEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
