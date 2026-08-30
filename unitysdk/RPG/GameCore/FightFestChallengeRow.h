#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ConditionParam; }
namespace System { class String; }

#define RPG_GAMECORE_FIGHTFESTCHALLENGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D093120)
#define RPG_GAMECORE_FIGHTFESTCHALLENGEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D093910)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FightFestChallengeRow_TypeDefinitionIndex = 13175;

	class FightFestChallengeRow : public ::System::Object
	{
	public:
		::System::String* OriginalFigurePath; // 0x10
		::Il2CppArray<::RPG::GameCore::ConditionParam*>* UnlockConditionList; // 0x18
		::System::String* FigurePath; // 0x20
		::System::String* TabIconPath; // 0x28
		::Il2CppArray<::System::UInt32>* QuestIDList; // 0x30
		::Il2CppArray<::System::UInt32>* SpecialAvatarList; // 0x38
		::Il2CppArray<::System::UInt32>* BattleTargetList; // 0x40
		::System::UInt32 UnlockSubMussionID; // 0x48
		::System::UInt32 UnlockSubMissionID; // 0x4C
		::System::UInt32 AvatarInfoID; // 0x50
		::System::UInt32 EnvironmentBuffID; // 0x54
		::RPG::Client::TextID UnlockTips; // 0x58
		::System::UInt32 TutorialID; // 0x68
		::RPG::Client::TextID TabName; // 0x70
		::System::UInt32 GroupID; // 0x80
		::System::UInt32 ChallengeID; // 0x84
		::RPG::Client::TextID StoryDesc; // 0x88
		::RPG::Client::TextID OriginalStageName; // 0x98
		::RPG::Client::TextID ChallengeName; // 0xA8
		::System::UInt32 EventID; // 0xB8
		::System::UInt32 QuestGroupID; // 0xBC

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
