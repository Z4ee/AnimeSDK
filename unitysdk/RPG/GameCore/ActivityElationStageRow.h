#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ConditionParam; }
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYELATIONSTAGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D326CB0)
#define RPG_GAMECORE_ACTIVITYELATIONSTAGEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3273C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityElationStageRow_TypeDefinitionIndex = 11321;

	class ActivityElationStageRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ModifiedAvatarIDList; // 0x10
		::Il2CppArray<::System::UInt32>* SpecialAvatarList; // 0x18
		::Il2CppArray<::System::UInt32>* AvailableAvatarList; // 0x20
		::System::String* ImagePath; // 0x28
		::RPG::GameCore::ConditionParam* UnlockCondition; // 0x30
		::Il2CppArray<::System::UInt32>* GiftBoxLevel; // 0x38
		::Il2CppArray<::System::UInt32>* MonsterList; // 0x40
		::Il2CppArray<::System::UInt32>* BattleTargetList; // 0x48
		::System::UInt32 NewModifiedAvatarID; // 0x50
		::System::UInt32 UIEnterBattleAreaID; // 0x54
		::System::UInt32 EventID; // 0x58
		::RPG::Client::TextID LevelDes_In_Down; // 0x60
		::System::UInt32 IsModifiedAvatarFixed; // 0x70
		::System::UInt32 TutorialGuideGroupID; // 0x74
		::System::UInt32 ID; // 0x78
		::System::UInt32 PerfectWave; // 0x7C
		::RPG::Client::TextID LevelDes_Out; // 0x80
		::RPG::Client::TextID LevelDes_In; // 0x90
		::RPG::Client::TextID StageName; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYELATIONSTAGEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActivityElationStageRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityElationStageRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYELATIONSTAGEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
