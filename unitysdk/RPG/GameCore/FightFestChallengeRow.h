#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ConditionParam; }
namespace System { class String; }

#define RPG_GAMECORE_FIGHTFESTCHALLENGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x197195F0)
#define RPG_GAMECORE_FIGHTFESTCHALLENGEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19719DE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FightFestChallengeRow_TypeDefinitionIndex = 12647;

	class FightFestChallengeRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* QuestIDList; // 0x10
		::System::String* TabIconPath; // 0x18
		::Il2CppArray<::RPG::GameCore::ConditionParam*>* UnlockConditionList; // 0x20
		::Il2CppArray<::System::UInt32>* BattleTargetList; // 0x28
		::System::String* OriginalFigurePath; // 0x30
		::System::String* FigurePath; // 0x38
		::Il2CppArray<::System::UInt32>* SpecialAvatarList; // 0x40
		::System::UInt32 ChallengeID; // 0x48
		::RPG::Client::TextID UnlockTips; // 0x50
		::System::UInt32 QuestGroupID; // 0x60
		::System::UInt32 TutorialID; // 0x64
		::System::UInt32 UnlockSubMussionID; // 0x68
		::System::UInt32 EnvironmentBuffID; // 0x6C
		::RPG::Client::TextID TabName; // 0x70
		::RPG::Client::TextID OriginalStageName; // 0x80
		::System::UInt32 GroupID; // 0x90
		::System::UInt32 EventID; // 0x94
		::RPG::Client::TextID ChallengeName; // 0x98
		::System::UInt32 AvatarInfoID; // 0xA8
		::System::UInt32 UnlockSubMissionID; // 0xAC
		::RPG::Client::TextID StoryDesc; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTCHALLENGEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FightFestChallengeRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FightFestChallengeRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTCHALLENGEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
