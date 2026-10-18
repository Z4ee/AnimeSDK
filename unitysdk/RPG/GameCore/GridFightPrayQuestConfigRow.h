#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GridFightPrayType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPRAYQUESTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D70C4A0)
#define RPG_GAMECORE_GRIDFIGHTPRAYQUESTCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D70C920)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightPrayQuestConfigRow_TypeDefinitionIndex = 13492;

	class GridFightPrayQuestConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 FinishWayID; // 0x10
		::System::UInt32 FinishBonus; // 0x14
		::RPG::GameCore::GridFightPrayType PrayType; // 0x18
		::System::UInt32 ID; // 0x1C
		::RPG::Client::TextID PrayTitle; // 0x20
		::RPG::Client::TextID PrayPriceDesc; // 0x30
		::RPG::Client::TextID PrayDesc; // 0x40
		::System::UInt32 Progress; // 0x50
		::System::UInt32 AcceptBonus; // 0x54
		::RPG::Client::TextID PrayDisPlayDesc; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPRAYQUESTCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightPrayQuestConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightPrayQuestConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPRAYQUESTCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
