#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/IdleLiveTeamSlotLevelUpRewardType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_IDLELIVEAVATARUPGRADEREWARDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A0E1F0)
#define RPG_GAMECORE_IDLELIVEAVATARUPGRADEREWARDROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18A0E330)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveAvatarUpgradeRewardRow_TypeDefinitionIndex = 11158;

	class IdleLiveAvatarUpgradeRewardRow : public ::System::Object
	{
	public:
		::System::UInt32 RewardID; // 0x10
		::RPG::GameCore::IdleLiveTeamSlotLevelUpRewardType Type; // 0x14
		::System::UInt32 Level; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEAVATARUPGRADEREWARDROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::IdleLiveAvatarUpgradeRewardRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IdleLiveAvatarUpgradeRewardRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEAVATARUPGRADEREWARDROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
