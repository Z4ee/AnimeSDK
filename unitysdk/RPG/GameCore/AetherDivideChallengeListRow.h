#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AetherDivideChallengeType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_AETHERDIVIDECHALLENGELISTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16F5F520)
#define RPG_GAMECORE_AETHERDIVIDECHALLENGELISTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16F5FA70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AetherDivideChallengeListRow_TypeDefinitionIndex = 10244;

	class AetherDivideChallengeListRow : public ::System::Object
	{
	public:
		::System::String* OpponentImageIconPath; // 0x10
		::System::String* OpponentImagePath; // 0x18
		::System::String* VersusImagePath; // 0x20
		::System::String* OpponentPrefabPath; // 0x28
		::RPG::Client::TextID Signature; // 0x30
		::System::UInt32 ID; // 0x40
		::System::UInt32 EventID; // 0x44
		::System::UInt32 OpponentStrength; // 0x48
		::System::UInt32 GroupID; // 0x4C
		::System::UInt32 Rank; // 0x50
		::RPG::GameCore::AetherDivideChallengeType ChallengeType; // 0x54
		::System::UInt32 BattleAreaID; // 0x58
		::System::UInt32 MazeBuffID; // 0x5C
		::RPG::Client::TextID OpponentName; // 0x60
		::System::UInt32 MissionID; // 0x70
		::System::UInt32 RewardID; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDECHALLENGELISTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::AetherDivideChallengeListRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AetherDivideChallengeListRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDECHALLENGELISTROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
