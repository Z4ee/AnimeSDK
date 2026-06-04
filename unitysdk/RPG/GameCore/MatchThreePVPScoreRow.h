#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MatchThreeRarityType.h"
#include "unitysdk/RPG/GameCore/MatchThreeScoreFinishType.h"
#include "unitysdk/RPG/GameCore/MatchThreeScoreType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCHTHREEPVPSCOREROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x198F1E30)
#define RPG_GAMECORE_MATCHTHREEPVPSCOREROW__CTOR_OFFSET UNITYSDK_OFFSET(0x198F2770)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MatchThreePVPScoreRow_TypeDefinitionIndex = 11397;

	class MatchThreePVPScoreRow : public ::System::Object
	{
	public:
		::System::UInt32 Param2; // 0x10
		::RPG::GameCore::MatchThreeRarityType Rarity; // 0x14
		::RPG::GameCore::MatchThreeScoreType Type; // 0x18
		::System::UInt32 Param1; // 0x1C
		::RPG::Client::TextID Title2; // 0x20
		::RPG::Client::TextID Desc; // 0x30
		::RPG::Client::TextID Title; // 0x40
		::RPG::GameCore::MatchThreeScoreFinishType FinishType; // 0x50
		::System::UInt32 FixedScore; // 0x54
		::System::UInt32 ScoreID; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEPVPSCOREROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MatchThreePVPScoreRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MatchThreePVPScoreRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEPVPSCOREROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
