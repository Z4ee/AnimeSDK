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

#define RPG_GAMECORE_RAIDCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D939D20)
#define RPG_GAMECORE_RAIDCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D93B260)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RaidConfigRow_TypeDefinitionIndex = 14592;

	class RaidConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* MonsterHideList; // 0x10
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* DamageType; // 0x18
		::Il2CppArray<::System::UInt32>* MonsterList; // 0x20
		::Il2CppArray<::System::UInt32>* TrialAvatarList; // 0x28
		::Il2CppArray<::System::UInt32>* MainMissionIDList; // 0x30
		::Il2CppArray<::System::UInt32>* LimitIDList; // 0x38
		::System::String* EntrancePageBGImagePath; // 0x40
		::Il2CppArray<::RPG::GameCore::RaidTagType>* RaidTagList; // 0x48
		::Il2CppArray<::System::UInt32>* UnlockWorldLevel; // 0x50
		::Il2CppArray<::System::UInt32>* RewardList; // 0x58
		::Il2CppArray<::System::UInt32>* TeamLimitIDList; // 0x60
		::Il2CppArray<::System::UInt32>* RaidTargetID; // 0x68
		::Il2CppArray<::RPG::GameCore::RaidRecoverType>* RecoverType; // 0x70
		::Il2CppArray<::RPG::GameCore::FixPoint>* BuffParamList; // 0x78
		::System::Boolean SkipRewardOnFinish; // 0x80
		::System::Boolean IsHiddenAreaMap; // 0x81
		::System::Boolean IsShowMonsterSummon; // 0x82
		::System::Boolean SkipJoinLineup; // 0x83
		::System::Int32 RecommendLevel; // 0x84
		::RPG::GameCore::RaidConfigType Type; // 0x88
		::System::UInt32 DisplayEventID; // 0x8C
		::RPG::Client::TextID RaidName; // 0x90
		::System::UInt32 RaidID; // 0xA0
		::RPG::GameCore::RaidTeamType TeamType; // 0xA4
		::System::UInt32 MainMissionIDAfter; // 0xA8
		::System::UInt32 LockCaptainAvatarID; // 0xAC
		::System::UInt32 MainMissionIDBefore; // 0xB0
		::RPG::Client::TextID RaidDesc; // 0xB8
		::System::UInt32 FinishEntranceID; // 0xC8
		::System::Boolean AutoObtainDamageType; // 0xCC
		::System::Boolean LockCaptain; // 0xCD
		::System::Boolean IsEntryByProp; // 0xCE
		::System::UInt32 HardLevel; // 0xD0
		::System::UInt32 MappingInfoID; // 0xD4
		::RPG::GameCore::RaidEnterType EnterType; // 0xD8
		::System::UInt32 DifficultyAdjustmentType; // 0xDC
		::RPG::Client::TextID BuffDesc; // 0xE0

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
