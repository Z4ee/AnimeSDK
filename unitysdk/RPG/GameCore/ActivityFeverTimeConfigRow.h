#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYFEVERTIMECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x193E5C80)
#define RPG_GAMECORE_ACTIVITYFEVERTIMECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x193E69D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityFeverTimeConfigRow_TypeDefinitionIndex = 11082;

	class ActivityFeverTimeConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* SpecialAvatarList; // 0x10
		::Il2CppArray<::System::UInt32>* WaveMonsterList_3; // 0x18
		::Il2CppArray<::System::UInt32>* WaveMonsterList_1; // 0x20
		::Il2CppArray<::System::UInt32>* P3MazeBuffID; // 0x28
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* RecommadNature; // 0x30
		::Il2CppArray<::System::UInt32>* P1AvailableBuffList; // 0x38
		::Il2CppArray<::System::UInt32>* WaveMonsterList_2; // 0x40
		::System::String* ImagePath; // 0x48
		::Il2CppArray<::System::UInt32>* MonsterList; // 0x50
		::Il2CppArray<::System::UInt32>* P2AvailableBuffList; // 0x58
		::RPG::Client::TextID StageName; // 0x60
		::RPG::Client::TextID LevelDes2; // 0x70
		::RPG::Client::TextID LevelSPDes; // 0x80
		::System::UInt32 UIEnterBattleAreaID; // 0x90
		::System::UInt32 UnlockID; // 0x94
		::System::UInt32 ExtraEffectID; // 0x98
		::System::UInt32 QuestGroupID; // 0x9C
		::RPG::Client::TextID LevelDes1; // 0xA0
		::System::UInt32 FeverTimeID; // 0xB0
		::System::UInt32 EventID; // 0xB4
		::System::UInt32 TutorialGuideGroupID; // 0xB8
		::System::UInt32 ActivityModuleID; // 0xBC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFEVERTIMECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActivityFeverTimeConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityFeverTimeConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFEVERTIMECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
