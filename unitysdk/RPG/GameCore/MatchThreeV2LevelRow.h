#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MatchThreeV2FirstRoleType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MATCHTHREEV2LEVELROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D26F0F0)
#define RPG_GAMECORE_MATCHTHREEV2LEVELROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D26F810)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MatchThreeV2LevelRow_TypeDefinitionIndex = 11909;

	class MatchThreeV2LevelRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* EnvironmentIDList; // 0x10
		::Il2CppArray<::System::UInt32>* RecommendBattleItemList; // 0x18
		::Il2CppArray<::System::UInt32>* RecommendBirdList; // 0x20
		::System::String* LevelImage; // 0x28
		::Il2CppArray<::System::UInt32>* SpecialRuleIDList; // 0x30
		::Il2CppArray<::System::UInt32>* VSTalk; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* OpponentBattleItemMap; // 0x40
		::System::UInt32 PlayerBirdID; // 0x48
		::System::UInt32 OpponentBirdID; // 0x4C
		::System::UInt32 OpponentID; // 0x50
		::System::UInt32 PlayerID; // 0x54
		::RPG::Client::TextID VictoryDesc; // 0x58
		::RPG::Client::TextID LevelName; // 0x68
		::System::UInt32 TurnStep; // 0x78
		::System::UInt32 MaxRatioPowerDiff; // 0x7C
		::System::UInt32 LevelID; // 0x80
		::RPG::GameCore::MatchThreeV2FirstRoleType FirstType; // 0x84
		::System::UInt32 PreSubmission; // 0x88
		::System::UInt32 PreLevel; // 0x8C
		::RPG::Client::TextID LoseDesc; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEV2LEVELROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MatchThreeV2LevelRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MatchThreeV2LevelRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEV2LEVELROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
