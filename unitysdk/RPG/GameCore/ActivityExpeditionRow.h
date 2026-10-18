#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ActivityExpeditionRank.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ACTIVITYEXPEDITIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D35BC90)
#define RPG_GAMECORE_ACTIVITYEXPEDITIONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D35CFB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityExpeditionRow_TypeDefinitionIndex = 11459;

	class ActivityExpeditionRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::AvatarBaseType>* BonusBaseTypeList; // 0x10
		::System::UInt32 RewardID; // 0x18
		::System::UInt32 Grade3ExtraRewardID; // 0x1C
		::RPG::Client::TextID Name; // 0x20
		::System::UInt32 ExpeditionID; // 0x30
		::System::UInt32 Grade1ExtraRewardID; // 0x34
		::RPG::GameCore::ActivityExpeditionRank ExpeditionRank; // 0x38
		::System::UInt32 Duration; // 0x3C
		::RPG::Client::TextID AssignDesc; // 0x40
		::RPG::Client::TextID AssignerName; // 0x50
		::System::UInt32 Grade2ExtraRewardID; // 0x60
		::System::UInt32 ExpeditionTag; // 0x64
		::System::UInt32 AvatarNumMin; // 0x68
		::System::UInt32 AvatarNumMax; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEXPEDITIONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActivityExpeditionRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityExpeditionRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEXPEDITIONROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
