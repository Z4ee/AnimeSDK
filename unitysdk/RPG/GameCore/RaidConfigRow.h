#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RaidConfigType.h"
#include "unitysdk/RPG/GameCore/RaidEnterType.h"
#include "unitysdk/RPG/GameCore/RaidRecoverType.h"
#include "unitysdk/RPG/GameCore/RaidTagType.h"
#include "unitysdk/RPG/GameCore/RaidTeamType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_RAIDCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18C85710)
#define RPG_GAMECORE_RAIDCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18C86CF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RaidConfigRow_TypeDefinitionIndex = 13794;

	class RaidConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* BuffParamList; // 0x10
		::Il2CppArray<::System::UInt32>* UnlockWorldLevel; // 0x18
		::Il2CppArray<::System::UInt32>* MonsterList; // 0x20
		::Il2CppArray<::System::UInt32>* TrialAvatarList; // 0x28
		::System::String* EntrancePageBGImagePath; // 0x30
		::Il2CppArray<::RPG::GameCore::RaidTagType>* RaidTagList; // 0x38
		::Il2CppArray<::RPG::GameCore::RaidRecoverType>* RecoverType; // 0x40
		::Il2CppArray<::System::UInt32>* MainMissionIDList; // 0x48
		::Il2CppArray<::System::UInt32>* MonsterHideList; // 0x50
		::Il2CppArray<::System::UInt32>* TeamLimitIDList; // 0x58
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* DamageType; // 0x60
		::Il2CppArray<::System::UInt32>* RaidTargetID; // 0x68
		::Il2CppArray<::System::UInt32>* RewardList; // 0x70
		::Il2CppArray<::System::UInt32>* LimitIDList; // 0x78
		::System::UInt32 MainMissionIDAfter; // 0x80
		::RPG::GameCore::RaidConfigType Type; // 0x84
		::RPG::Client::TextID RaidName; // 0x88
		::RPG::Client::TextID BuffDesc; // 0x98
		::System::UInt32 HardLevel; // 0xA8
		::System::UInt32 FinishEntranceID; // 0xAC
		::System::UInt32 MainMissionIDBefore; // 0xB0
		::System::UInt32 DisplayEventID; // 0xB4
		::System::UInt32 RaidID; // 0xB8
		::System::UInt32 LockCaptainAvatarID; // 0xBC
		::System::Boolean LockCaptain; // 0xC0
		::System::Boolean IsEntryByProp; // 0xC1
		::System::Boolean SkipJoinLineup; // 0xC2
		::System::Boolean SkipRewardOnFinish; // 0xC3
		::System::Int32 RecommendLevel; // 0xC4
		::System::Boolean IsShowMonsterSummon; // 0xC8
		::System::Boolean IsHiddenAreaMap; // 0xC9
		::System::Boolean AutoObtainDamageType; // 0xCA
		::System::UInt32 MappingInfoID; // 0xCC
		::RPG::GameCore::RaidEnterType EnterType; // 0xD0
		::RPG::Client::TextID RaidDesc; // 0xD8
		::System::UInt32 DifficultyAdjustmentType; // 0xE8
		::RPG::GameCore::RaidTeamType TeamType; // 0xEC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RAIDCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RaidConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RaidConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RAIDCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
