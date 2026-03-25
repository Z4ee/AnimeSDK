#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ConditionParam; }
namespace System { class String; }

#define RPG_GAMECORE_FIGHTFESTCHALLENGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x171CF3A0)
#define RPG_GAMECORE_FIGHTFESTCHALLENGEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x171CFBB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FightFestChallengeRow_TypeDefinitionIndex = 12121;

	class FightFestChallengeRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::ConditionParam*>* UnlockConditionList; // 0x10
		::Il2CppArray<::System::UInt32>* QuestIDList; // 0x18
		::System::String* FigurePath; // 0x20
		::System::String* OriginalFigurePath; // 0x28
		::Il2CppArray<::System::UInt32>* BattleTargetList; // 0x30
		::Il2CppArray<::System::UInt32>* SpecialAvatarList; // 0x38
		::System::String* TabIconPath; // 0x40
		::RPG::Client::TextID UnlockTips; // 0x48
		::System::UInt32 TutorialID; // 0x58
		::System::UInt32 GroupID; // 0x5C
		::RPG::Client::TextID ChallengeName; // 0x60
		::System::UInt32 EventID; // 0x70
		::System::UInt32 QuestGroupID; // 0x74
		::RPG::Client::TextID TabName; // 0x78
		::RPG::Client::TextID OriginalStageName; // 0x88
		::System::UInt32 UnlockSubMussionID; // 0x98
		::System::UInt32 AvatarInfoID; // 0x9C
		::System::UInt32 ChallengeID; // 0xA0
		::RPG::Client::TextID StoryDesc; // 0xA8
		::System::UInt32 UnlockSubMissionID; // 0xB8
		::System::UInt32 EnvironmentBuffID; // 0xBC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTCHALLENGEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::FightFestChallengeRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FightFestChallengeRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTCHALLENGEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
