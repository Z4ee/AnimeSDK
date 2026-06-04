#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_HELIOBUSCHALLENGESTAGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x198262E0)
#define RPG_GAMECORE_HELIOBUSCHALLENGESTAGEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19826850)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HeliobusChallengeStageRow_TypeDefinitionIndex = 13115;

	class HeliobusChallengeStageRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* BattleTargetList; // 0x10
		::Il2CppArray<::System::UInt32>* HeliobusSkillRecList; // 0x18
		::Il2CppArray<::System::UInt32>* MonsterList; // 0x20
		::System::UInt32 BattleAreaID; // 0x28
		::RPG::Client::TextID ChallengeDesc; // 0x30
		::RPG::Client::TextID ChallengeName; // 0x40
		::System::UInt32 RewardID; // 0x50
		::System::UInt32 BattleAreaGroupID; // 0x54
		::System::UInt32 EventID; // 0x58
		::System::UInt32 FloorID; // 0x5C
		::System::UInt32 HeliobusMazeBuff; // 0x60
		::System::UInt32 HeliobusChallengeHard; // 0x64
		::System::UInt32 ChallengeID; // 0x68
		::System::UInt32 PreChallengeID; // 0x6C
		::System::UInt32 UnlockPhase; // 0x70
		::System::UInt32 PlaneID; // 0x74

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
