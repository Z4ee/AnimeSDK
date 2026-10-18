#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ScoreRaceType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIGHTFESTSCORERACEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D677E40)
#define RPG_GAMECORE_FIGHTFESTSCORERACEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D678440)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FightFestScoreRaceRow_TypeDefinitionIndex = 13275;

	class FightFestScoreRaceRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* EventIDList; // 0x10
		::System::String* RaceBgFigurePath; // 0x18
		::System::String* DetailImgPath; // 0x20
		::System::String* TutorialImgPath; // 0x28
		::System::String* ResultImgPath; // 0x30
		::System::UInt32 RedAvatarID; // 0x38
		::System::UInt32 TutorialID; // 0x3C
		::RPG::Client::TextID RaceDesc; // 0x40
		::System::UInt32 RewardID; // 0x50
		::System::UInt32 RewardScore; // 0x54
		::System::UInt32 BlueAvatarID; // 0x58
		::RPG::GameCore::ScoreRaceType ScoreRaceType; // 0x5C
		::System::UInt32 PhaseID; // 0x60
		::RPG::Client::TextID StageName; // 0x68
		::System::UInt32 EventID; // 0x78
		::System::UInt32 ScoreRaceID; // 0x7C
		::System::UInt32 TakeMainMissionID; // 0x80
		::System::UInt32 SortWeight; // 0x84

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTSCORERACEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FightFestScoreRaceRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FightFestScoreRaceRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTSCORERACEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
