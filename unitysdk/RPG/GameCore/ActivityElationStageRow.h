#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ConditionParam; }
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYELATIONSTAGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1860B070)
#define RPG_GAMECORE_ACTIVITYELATIONSTAGEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1860B7B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityElationStageRow_TypeDefinitionIndex = 10825;

	class ActivityElationStageRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* AvailableAvatarList; // 0x10
		::Il2CppArray<::System::UInt32>* BattleTargetList; // 0x18
		::Il2CppArray<::System::UInt32>* ModifiedAvatarIDList; // 0x20
		::Il2CppArray<::System::UInt32>* GiftBoxLevel; // 0x28
		::Il2CppArray<::System::UInt32>* SpecialAvatarList; // 0x30
		::Il2CppArray<::System::UInt32>* MonsterList; // 0x38
		::RPG::GameCore::ConditionParam* UnlockCondition; // 0x40
		::System::String* ImagePath; // 0x48
		::System::UInt32 NewModifiedAvatarID; // 0x50
		::System::UInt32 EventID; // 0x54
		::System::UInt32 IsModifiedAvatarFixed; // 0x58
		::System::UInt32 TutorialGuideGroupID; // 0x5C
		::System::UInt32 ID; // 0x60
		::System::UInt32 PerfectWave; // 0x64
		::RPG::Client::TextID LevelDes_In_Down; // 0x68
		::RPG::Client::TextID LevelDes_Out; // 0x78
		::RPG::Client::TextID LevelDes_In; // 0x88
		::RPG::Client::TextID StageName; // 0x98
		::System::UInt32 UIEnterBattleAreaID; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYELATIONSTAGEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ActivityElationStageRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityElationStageRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYELATIONSTAGEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
