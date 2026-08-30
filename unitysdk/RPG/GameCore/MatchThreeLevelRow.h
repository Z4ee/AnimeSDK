#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MATCHTHREELEVELROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D269620)
#define RPG_GAMECORE_MATCHTHREELEVELROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D26A290)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MatchThreeLevelRow_TypeDefinitionIndex = 11874;

	class MatchThreeLevelRow : public ::System::Object
	{
	public:
		::System::String* LevelImage; // 0x10
		::Il2CppArray<::System::UInt32>* VSTalkList; // 0x18
		::Il2CppArray<::System::UInt32>* EnvironmentID; // 0x20
		::RPG::Client::TextID LevelName; // 0x28
		::RPG::Client::TextID LoseDesc; // 0x38
		::RPG::Client::TextID VictoryDesc; // 0x48
		::RPG::Client::TextID MissionDescription; // 0x58
		::System::UInt32 PlayerID; // 0x68
		::System::UInt32 GoMissionCondition; // 0x6C
		::System::UInt32 UnlockID; // 0x70
		::System::UInt32 LevelMission; // 0x74
		::System::UInt32 RewardID; // 0x78
		::System::UInt32 Mode; // 0x7C
		::System::UInt32 OpponentBirdID; // 0x80
		::System::UInt32 PlayerBirdID; // 0x84
		::System::UInt32 LevelID; // 0x88
		::System::UInt32 HPmax; // 0x8C
		::RPG::Client::TextID LevelDescription; // 0x90
		::System::UInt32 OpponentID; // 0xA0
		::System::UInt32 TurnStep; // 0xA4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREELEVELROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MatchThreeLevelRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MatchThreeLevelRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREELEVELROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
