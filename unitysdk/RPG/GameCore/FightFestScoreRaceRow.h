#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ScoreRaceType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIGHTFESTSCORERACEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x171D3DF0)
#define RPG_GAMECORE_FIGHTFESTSCORERACEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x171D43F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FightFestScoreRaceRow_TypeDefinitionIndex = 12115;

	class FightFestScoreRaceRow : public ::System::Object
	{
	public:
		::System::String* DetailImgPath; // 0x10
		::System::String* TutorialImgPath; // 0x18
		::System::String* RaceBgFigurePath; // 0x20
		::System::String* ResultImgPath; // 0x28
		::Il2CppArray<::System::UInt32>* EventIDList; // 0x30
		::System::UInt32 RedAvatarID; // 0x38
		::System::UInt32 BlueAvatarID; // 0x3C
		::System::UInt32 TakeMainMissionID; // 0x40
		::System::UInt32 SortWeight; // 0x44
		::System::UInt32 ScoreRaceID; // 0x48
		::System::UInt32 PhaseID; // 0x4C
		::System::UInt32 RewardID; // 0x50
		::System::UInt32 TutorialID; // 0x54
		::RPG::GameCore::ScoreRaceType ScoreRaceType; // 0x58
		::System::UInt32 EventID; // 0x5C
		::System::UInt32 RewardScore; // 0x60
		::RPG::Client::TextID RaceDesc; // 0x68
		::RPG::Client::TextID StageName; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTSCORERACEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::FightFestScoreRaceRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FightFestScoreRaceRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTSCORERACEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
