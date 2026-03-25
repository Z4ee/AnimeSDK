#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RecordType.h"
#include "unitysdk/RPG/GameCore/ShowType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ACHIEVEMENTDATAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16E957B0)
#define RPG_GAMECORE_ACHIEVEMENTDATAROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16E95F00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AchievementDataRow_TypeDefinitionIndex = 10218;

	class AchievementDataRow : public ::System::Object
	{
	public:
		::System::String* PSTrophyID; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x18
		::System::String* Rarity; // 0x20
		::System::UInt32 ShowParamInt1; // 0x28
		::RPG::GameCore::RecordType RecordType; // 0x2C
		::RPG::Client::TextID AchievementTitle; // 0x30
		::System::UInt32 SeriesID; // 0x40
		::System::UInt32 LinearQuestID; // 0x44
		::RPG::Client::TextID AchievementDescPS; // 0x48
		::RPG::Client::TextID HideAchievementDesc; // 0x58
		::RPG::Client::TextID AchievementTitlePS; // 0x68
		::RPG::GameCore::ShowType ShowType; // 0x78
		::System::UInt32 QuestID; // 0x7C
		::System::UInt32 Advance; // 0x80
		::System::UInt32 AchievementID; // 0x84
		::RPG::Client::TextID RecordText; // 0x88
		::RPG::Client::TextID AchievementDesc; // 0x98
		::System::UInt32 Priority; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACHIEVEMENTDATAROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::AchievementDataRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AchievementDataRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACHIEVEMENTDATAROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
