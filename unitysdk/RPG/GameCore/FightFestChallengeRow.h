#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ConditionParam; }
namespace System { class String; }

#define RPG_GAMECORE_FIGHTFESTCHALLENGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BA79900)
#define RPG_GAMECORE_FIGHTFESTCHALLENGEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA7A0F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FightFestChallengeRow_TypeDefinitionIndex = 12784;

	class FightFestChallengeRow : public ::System::Object
	{
	public:
		::System::String* FigurePath; // 0x10
		::Il2CppArray<::System::UInt32>* SpecialAvatarList; // 0x18
		::Il2CppArray<::System::UInt32>* QuestIDList; // 0x20
		::Il2CppArray<::System::UInt32>* BattleTargetList; // 0x28
		::System::String* TabIconPath; // 0x30
		::Il2CppArray<::RPG::GameCore::ConditionParam*>* UnlockConditionList; // 0x38
		::System::String* OriginalFigurePath; // 0x40
		::System::UInt32 UnlockSubMussionID; // 0x48
		::System::UInt32 EventID; // 0x4C
		::RPG::Client::TextID ChallengeName; // 0x50
		::System::UInt32 GroupID; // 0x60
		::System::UInt32 ChallengeID; // 0x64
		::RPG::Client::TextID OriginalStageName; // 0x68
		::System::UInt32 UnlockSubMissionID; // 0x78
		::System::UInt32 AvatarInfoID; // 0x7C
		::RPG::Client::TextID StoryDesc; // 0x80
		::RPG::Client::TextID TabName; // 0x90
		::RPG::Client::TextID UnlockTips; // 0xA0
		::System::UInt32 QuestGroupID; // 0xB0
		::System::UInt32 TutorialID; // 0xB4
		::System::UInt32 EnvironmentBuffID; // 0xB8

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
