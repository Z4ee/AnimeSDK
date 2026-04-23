#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ConditionParam; }
namespace System { class String; }

#define RPG_GAMECORE_FIGHTFESTCHALLENGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x188DCB70)
#define RPG_GAMECORE_FIGHTFESTCHALLENGEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x188DD380)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FightFestChallengeRow_TypeDefinitionIndex = 12554;

	class FightFestChallengeRow : public ::System::Object
	{
	public:
		::System::String* OriginalFigurePath; // 0x10
		::System::String* FigurePath; // 0x18
		::Il2CppArray<::System::UInt32>* BattleTargetList; // 0x20
		::Il2CppArray<::System::UInt32>* QuestIDList; // 0x28
		::Il2CppArray<::System::UInt32>* SpecialAvatarList; // 0x30
		::System::String* TabIconPath; // 0x38
		::Il2CppArray<::RPG::GameCore::ConditionParam*>* UnlockConditionList; // 0x40
		::System::UInt32 ChallengeID; // 0x48
		::System::UInt32 UnlockSubMussionID; // 0x4C
		::RPG::Client::TextID TabName; // 0x50
		::System::UInt32 GroupID; // 0x60
		::System::UInt32 UnlockSubMissionID; // 0x64
		::RPG::Client::TextID UnlockTips; // 0x68
		::System::UInt32 EnvironmentBuffID; // 0x78
		::System::UInt32 QuestGroupID; // 0x7C
		::System::UInt32 AvatarInfoID; // 0x80
		::System::UInt32 EventID; // 0x84
		::System::UInt32 TutorialID; // 0x88
		::RPG::Client::TextID StoryDesc; // 0x90
		::RPG::Client::TextID ChallengeName; // 0xA0
		::RPG::Client::TextID OriginalStageName; // 0xB0

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
