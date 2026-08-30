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

#define RPG_GAMECORE_RAIDCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D381510)
#define RPG_GAMECORE_RAIDCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D382A50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RaidConfigRow_TypeDefinitionIndex = 14427;

	class RaidConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::RaidRecoverType>* RecoverType; // 0x10
		::System::String* EntrancePageBGImagePath; // 0x18
		::Il2CppArray<::System::UInt32>* RaidTargetID; // 0x20
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* DamageType; // 0x28
		::Il2CppArray<::RPG::GameCore::FixPoint>* BuffParamList; // 0x30
		::Il2CppArray<::System::UInt32>* TeamLimitIDList; // 0x38
		::Il2CppArray<::System::UInt32>* TrialAvatarList; // 0x40
		::Il2CppArray<::System::UInt32>* UnlockWorldLevel; // 0x48
		::Il2CppArray<::System::UInt32>* RewardList; // 0x50
		::Il2CppArray<::System::UInt32>* MonsterList; // 0x58
		::Il2CppArray<::System::UInt32>* LimitIDList; // 0x60
		::Il2CppArray<::RPG::GameCore::RaidTagType>* RaidTagList; // 0x68
		::Il2CppArray<::System::UInt32>* MainMissionIDList; // 0x70
		::Il2CppArray<::System::UInt32>* MonsterHideList; // 0x78
		::System::UInt32 MainMissionIDAfter; // 0x80
		::System::UInt32 LockCaptainAvatarID; // 0x84
		::RPG::GameCore::RaidTeamType TeamType; // 0x88
		::System::UInt32 RaidID; // 0x8C
		::RPG::Client::TextID RaidDesc; // 0x90
		::System::UInt32 HardLevel; // 0xA0
		::RPG::GameCore::RaidEnterType EnterType; // 0xA4
		::System::UInt32 DisplayEventID; // 0xA8
		::RPG::Client::TextID RaidName; // 0xB0
		::RPG::Client::TextID BuffDesc; // 0xC0
		::System::UInt32 MainMissionIDBefore; // 0xD0
		::System::Boolean IsHiddenAreaMap; // 0xD4
		::System::Boolean IsEntryByProp; // 0xD5
		::System::Boolean AutoObtainDamageType; // 0xD6
		::System::Boolean SkipRewardOnFinish; // 0xD7
		::System::Int32 RecommendLevel; // 0xD8
		::RPG::GameCore::RaidConfigType Type; // 0xDC
		::System::UInt32 FinishEntranceID; // 0xE0
		::System::Boolean SkipJoinLineup; // 0xE4
		::System::Boolean LockCaptain; // 0xE5
		::System::Boolean IsShowMonsterSummon; // 0xE6
		::System::UInt32 MappingInfoID; // 0xE8
		::System::UInt32 DifficultyAdjustmentType; // 0xEC

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
