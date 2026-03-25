#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FightFestCoachType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIGHTFESTCOACHSKILLROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x171D04B0)
#define RPG_GAMECORE_FIGHTFESTCOACHSKILLROW__CTOR_OFFSET UNITYSDK_OFFSET(0x171D0CD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FightFestCoachSkillRow_TypeDefinitionIndex = 12127;

	class FightFestCoachSkillRow : public ::System::Object
	{
	public:
		::System::String* FigurePath; // 0x10
		::System::UInt32 CoachItemID; // 0x18
		::RPG::GameCore::FightFestCoachType CoachType; // 0x1C
		::System::UInt32 MazeBuffID; // 0x20
		::System::UInt32 SortWeight; // 0x24
		::RPG::Client::TextID UnlockDesc; // 0x28
		::RPG::Client::TextID CoachSkillExtraDesc; // 0x38
		::RPG::Client::TextID CoachSkillName; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTCOACHSKILLROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::FightFestCoachSkillRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FightFestCoachSkillRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTCOACHSKILLROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
