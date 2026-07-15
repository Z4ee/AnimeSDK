#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FightFestCoachType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIGHTFESTCOACHSKILLROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BA7A930)
#define RPG_GAMECORE_FIGHTFESTCOACHSKILLROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA7B170)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FightFestCoachSkillRow_TypeDefinitionIndex = 12789;

	class FightFestCoachSkillRow : public ::System::Object
	{
	public:
		::System::String* FigurePath; // 0x10
		::RPG::Client::TextID UnlockDesc; // 0x18
		::RPG::Client::TextID CoachSkillName; // 0x28
		::System::UInt32 MazeBuffID; // 0x38
		::System::UInt32 SortWeight; // 0x3C
		::RPG::Client::TextID CoachSkillExtraDesc; // 0x40
		::System::UInt32 CoachItemID; // 0x50
		::RPG::GameCore::FightFestCoachType CoachType; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTCOACHSKILLROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FightFestCoachSkillRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FightFestCoachSkillRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTCOACHSKILLROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
