#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHALLENGEMAZECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B713550)
#define RPG_GAMECORE_CHALLENGEMAZECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B714900)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChallengeMazeConfigRow_TypeDefinitionIndex = 12472;

	class ChallengeMazeConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* MonsterID1; // 0x10
		::Il2CppArray<::System::UInt32>* ConfigList1; // 0x18
		::Il2CppArray<::System::UInt32>* ChallengeTargetID; // 0x20
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* DamageType2; // 0x28
		::Il2CppArray<::System::UInt32>* EventIDList2; // 0x30
		::Il2CppArray<::System::UInt32>* MonsterID2; // 0x38
		::Il2CppArray<::System::UInt32>* EventIDList1; // 0x40
		::Il2CppArray<::System::UInt32>* NpcMonsterIDList1; // 0x48
		::Il2CppArray<::System::UInt32>* ConfigList2; // 0x50
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* DamageType1; // 0x58
		::Il2CppArray<::System::UInt32>* NpcMonsterIDList2; // 0x60
		::System::UInt32 MapEntranceID2; // 0x68
		::System::UInt32 MazeGroupID2; // 0x6C
		::System::UInt32 ID; // 0x70
		::System::UInt32 MapEntranceID; // 0x74
		::System::UInt32 ChallengeCountDown; // 0x78
		::RPG::Client::TextID Name; // 0x80
		::System::UInt32 GroupID; // 0x90
		::System::UInt32 PreChallengeMazeID; // 0x94
		::System::UInt32 PreLevel; // 0x98
		::System::UInt32 StageNum; // 0x9C
		::System::UInt32 MazeGroupID1; // 0xA0
		::System::UInt32 MazeBuffID; // 0xA4
		::System::UInt32 Floor; // 0xA8
		::System::UInt32 RewardID; // 0xAC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEMAZECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChallengeMazeConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChallengeMazeConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEMAZECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
