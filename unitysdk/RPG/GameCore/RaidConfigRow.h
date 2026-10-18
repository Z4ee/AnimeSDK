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

#define RPG_GAMECORE_RAIDCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D967690)
#define RPG_GAMECORE_RAIDCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D968BD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RaidConfigRow_TypeDefinitionIndex = 14592;

	class RaidConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* RewardList; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* BuffParamList; // 0x18
		::Il2CppArray<::RPG::GameCore::RaidTagType>* RaidTagList; // 0x20
		::System::String* EntrancePageBGImagePath; // 0x28
		::Il2CppArray<::System::UInt32>* MainMissionIDList; // 0x30
		::Il2CppArray<::System::UInt32>* UnlockWorldLevel; // 0x38
		::Il2CppArray<::System::UInt32>* MonsterHideList; // 0x40
		::Il2CppArray<::System::UInt32>* MonsterList; // 0x48
		::Il2CppArray<::System::UInt32>* RaidTargetID; // 0x50
		::Il2CppArray<::System::UInt32>* LimitIDList; // 0x58
		::Il2CppArray<::System::UInt32>* TeamLimitIDList; // 0x60
		::Il2CppArray<::System::UInt32>* TrialAvatarList; // 0x68
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* DamageType; // 0x70
		::Il2CppArray<::RPG::GameCore::RaidRecoverType>* RecoverType; // 0x78
		::System::UInt32 LockCaptainAvatarID; // 0x80
		::System::Int32 RecommendLevel; // 0x84
		::System::UInt32 MainMissionIDAfter; // 0x88
		::System::UInt32 HardLevel; // 0x8C
		::RPG::Client::TextID RaidName; // 0x90
		::RPG::Client::TextID BuffDesc; // 0xA0
		::RPG::GameCore::RaidConfigType Type; // 0xB0
		::System::UInt32 MappingInfoID; // 0xB4
		::RPG::Client::TextID RaidDesc; // 0xB8
		::RPG::GameCore::RaidTeamType TeamType; // 0xC8
		::System::UInt32 MainMissionIDBefore; // 0xCC
		::System::UInt32 DisplayEventID; // 0xD0
		::System::Boolean IsShowMonsterSummon; // 0xD4
		::System::Boolean LockCaptain; // 0xD5
		::System::Boolean SkipJoinLineup; // 0xD6
		::System::Boolean IsEntryByProp; // 0xD7
		::System::UInt32 DifficultyAdjustmentType; // 0xD8
		::System::UInt32 RaidID; // 0xDC
		::RPG::GameCore::RaidEnterType EnterType; // 0xE0
		::System::Boolean IsHiddenAreaMap; // 0xE4
		::System::Boolean SkipRewardOnFinish; // 0xE5
		::System::Boolean AutoObtainDamageType; // 0xE6
		::System::UInt32 FinishEntranceID; // 0xE8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RAIDCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RaidConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RaidConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RAIDCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
