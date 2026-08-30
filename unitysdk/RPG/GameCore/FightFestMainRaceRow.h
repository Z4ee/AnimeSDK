#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIGHTFESTMAINRACEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E0D5770)
#define RPG_GAMECORE_FIGHTFESTMAINRACEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0D5FE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FightFestMainRaceRow_TypeDefinitionIndex = 13166;

	class FightFestMainRaceRow : public ::System::Object
	{
	public:
		::System::String* RaceBgFigurePath; // 0x10
		::System::UInt32 RewardID; // 0x18
		::RPG::Client::TextID StageName; // 0x20
		::System::UInt32 BlueAvatarID; // 0x30
		::System::UInt32 TutorialID; // 0x34
		::System::UInt32 FightPhaseID; // 0x38
		::System::UInt32 MainRaceID; // 0x3C
		::System::UInt32 RedAvatarID; // 0x40
		::System::UInt32 EventID; // 0x44
		::RPG::Client::TextID StageEndDesc; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTMAINRACEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FightFestMainRaceRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FightFestMainRaceRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTMAINRACEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
