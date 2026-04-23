#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FANTASTICSTORYBATTLEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x188C9C50)
#define RPG_GAMECORE_FANTASTICSTORYBATTLEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x188CA5C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FantasticStoryBattleRow_TypeDefinitionIndex = 10958;

	class FantasticStoryBattleRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* SpecialAvatarIDList; // 0x10
		::Il2CppArray<::System::UInt32>* RecommendAvatar; // 0x18
		::Il2CppArray<::System::UInt32>* AvailableBuffSlotID; // 0x20
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* RecommendNature; // 0x28
		::Il2CppArray<::System::UInt32>* QuestList; // 0x30
		::Il2CppArray<::System::UInt32>* TextJoinIDListChange; // 0x38
		::System::String* FigurePath; // 0x40
		::Il2CppArray<::System::UInt32>* TextJoinIDList; // 0x48
		::Il2CppArray<::System::UInt32>* DisplayMonsterList; // 0x50
		::RPG::Client::TextID BookContext; // 0x58
		::RPG::Client::TextID Name; // 0x68
		::System::UInt32 TurnLimit; // 0x78
		::System::UInt32 BattleAreaID; // 0x7C
		::System::UInt32 BattleAreaGroupID; // 0x80
		::System::UInt32 PlaneID; // 0x84
		::System::UInt32 EnvironmentBuffID; // 0x88
		::System::UInt32 FinishQuest; // 0x8C
		::System::UInt32 PreBattleID; // 0x90
		::System::UInt32 UnlockChapterID; // 0x94
		::RPG::Client::TextID BookTitle; // 0x98
		::System::UInt32 BattleID; // 0xA8
		::System::UInt32 EventID; // 0xAC
		::RPG::Client::TextID BookContextChange; // 0xB0
		::System::UInt32 FloorID; // 0xC0
		::System::UInt32 ActivityModuleID; // 0xC4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FANTASTICSTORYBATTLEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::FantasticStoryBattleRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FantasticStoryBattleRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FANTASTICSTORYBATTLEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
