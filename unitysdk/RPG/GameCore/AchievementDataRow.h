#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RecordType.h"
#include "unitysdk/RPG/GameCore/ShowType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ACHIEVEMENTDATAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D311DD0)
#define RPG_GAMECORE_ACHIEVEMENTDATAROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D312520)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AchievementDataRow_TypeDefinitionIndex = 10889;

	class AchievementDataRow : public ::System::Object
	{
	public:
		::System::String* Rarity; // 0x10
		::System::String* PSTrophyID; // 0x18
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x20
		::RPG::Client::TextID AchievementTitle; // 0x28
		::System::UInt32 SeriesID; // 0x38
		::RPG::Client::TextID HideAchievementDesc; // 0x40
		::RPG::Client::TextID AchievementDescPS; // 0x50
		::System::UInt32 ShowParamInt1; // 0x60
		::System::UInt32 Priority; // 0x64
		::System::UInt32 QuestID; // 0x68
		::System::UInt32 Advance; // 0x6C
		::System::UInt32 AchievementID; // 0x70
		::RPG::GameCore::ShowType ShowType; // 0x74
		::RPG::Client::TextID AchievementTitlePS; // 0x78
		::System::UInt32 LinearQuestID; // 0x88
		::RPG::GameCore::RecordType RecordType; // 0x8C
		::RPG::Client::TextID RecordText; // 0x90
		::RPG::Client::TextID AchievementDesc; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACHIEVEMENTDATAROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AchievementDataRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AchievementDataRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACHIEVEMENTDATAROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
