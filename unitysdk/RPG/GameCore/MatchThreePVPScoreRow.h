#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MatchThreeRarityType.h"
#include "unitysdk/RPG/GameCore/MatchThreeScoreFinishType.h"
#include "unitysdk/RPG/GameCore/MatchThreeScoreType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCHTHREEPVPSCOREROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x173B3610)
#define RPG_GAMECORE_MATCHTHREEPVPSCOREROW__CTOR_OFFSET UNITYSDK_OFFSET(0x173B3EF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MatchThreePVPScoreRow_TypeDefinitionIndex = 10946;

	class MatchThreePVPScoreRow : public ::System::Object
	{
	public:
		::System::UInt32 ScoreID; // 0x10
		::RPG::GameCore::MatchThreeScoreType Type; // 0x14
		::System::UInt32 FixedScore; // 0x18
		::RPG::Client::TextID Title2; // 0x20
		::System::UInt32 Param1; // 0x30
		::System::UInt32 Param2; // 0x34
		::RPG::Client::TextID Title; // 0x38
		::RPG::GameCore::MatchThreeRarityType Rarity; // 0x48
		::RPG::GameCore::MatchThreeScoreFinishType FinishType; // 0x4C
		::RPG::Client::TextID Desc; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEPVPSCOREROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MatchThreePVPScoreRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MatchThreePVPScoreRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEPVPSCOREROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
