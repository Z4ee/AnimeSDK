#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AetherDivideChallengeType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_AETHERDIVIDECHALLENGELISTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18681800)
#define RPG_GAMECORE_AETHERDIVIDECHALLENGELISTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18681D50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AetherDivideChallengeListRow_TypeDefinitionIndex = 10469;

	class AetherDivideChallengeListRow : public ::System::Object
	{
	public:
		::System::String* OpponentImageIconPath; // 0x10
		::System::String* OpponentImagePath; // 0x18
		::System::String* VersusImagePath; // 0x20
		::System::String* OpponentPrefabPath; // 0x28
		::System::UInt32 EventID; // 0x30
		::RPG::GameCore::AetherDivideChallengeType ChallengeType; // 0x34
		::RPG::Client::TextID Signature; // 0x38
		::System::UInt32 MazeBuffID; // 0x48
		::System::UInt32 ID; // 0x4C
		::System::UInt32 OpponentStrength; // 0x50
		::System::UInt32 MissionID; // 0x54
		::System::UInt32 RewardID; // 0x58
		::System::UInt32 BattleAreaID; // 0x5C
		::System::UInt32 Rank; // 0x60
		::System::UInt32 GroupID; // 0x64
		::RPG::Client::TextID OpponentName; // 0x68

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
