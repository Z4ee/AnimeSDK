#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatStageFirstType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ACTIVITYDICECOMBATSTAGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1AAE3210)
#define RPG_GAMECORE_ACTIVITYDICECOMBATSTAGEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1AAE3620)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityDiceCombatStageRow_TypeDefinitionIndex = 10869;

	class ActivityDiceCombatStageRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* RecommendAvatarList; // 0x10
		::Il2CppArray<::System::UInt32>* DiceIDPerRare; // 0x18
		::RPG::GameCore::DiceCombatStageFirstType FirstType; // 0x20
		::System::UInt32 DiceAvatarLevel; // 0x24
		::System::UInt32 PresetID; // 0x28
		::System::UInt32 DiceCampaignID; // 0x2C
		::System::UInt32 DiceStageID; // 0x30
		::System::UInt32 IsUseDiceLuckControl; // 0x34
		::System::UInt32 AILevel; // 0x38
		::System::UInt32 HardLevel; // 0x3C
		::System::UInt32 RewardID; // 0x40
		::System::UInt32 OverWriteMaxHPLuckControl; // 0x44
		::System::UInt32 DiceAvatarID; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYDICECOMBATSTAGEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActivityDiceCombatStageRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityDiceCombatStageRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYDICECOMBATSTAGEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
