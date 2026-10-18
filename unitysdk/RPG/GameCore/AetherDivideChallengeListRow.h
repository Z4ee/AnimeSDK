#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AetherDivideChallengeType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_AETHERDIVIDECHALLENGELISTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3D22E0)
#define RPG_GAMECORE_AETHERDIVIDECHALLENGELISTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3D2830)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AetherDivideChallengeListRow_TypeDefinitionIndex = 10914;

	class AetherDivideChallengeListRow : public ::System::Object
	{
	public:
		::System::String* OpponentImagePath; // 0x10
		::System::String* VersusImagePath; // 0x18
		::System::String* OpponentPrefabPath; // 0x20
		::System::String* OpponentImageIconPath; // 0x28
		::RPG::Client::TextID Signature; // 0x30
		::RPG::GameCore::AetherDivideChallengeType ChallengeType; // 0x40
		::System::UInt32 GroupID; // 0x44
		::System::UInt32 ID; // 0x48
		::System::UInt32 MazeBuffID; // 0x4C
		::RPG::Client::TextID OpponentName; // 0x50
		::System::UInt32 EventID; // 0x60
		::System::UInt32 RewardID; // 0x64
		::System::UInt32 OpponentStrength; // 0x68
		::System::UInt32 BattleAreaID; // 0x6C
		::System::UInt32 Rank; // 0x70
		::System::UInt32 MissionID; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDECHALLENGELISTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AetherDivideChallengeListRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AetherDivideChallengeListRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDECHALLENGELISTROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
