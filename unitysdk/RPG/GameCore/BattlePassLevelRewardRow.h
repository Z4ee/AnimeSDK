#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BATTLEPASSLEVELREWARDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x194D2300)
#define RPG_GAMECORE_BATTLEPASSLEVELREWARDROW__CTOR_OFFSET UNITYSDK_OFFSET(0x194D32E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattlePassLevelRewardRow_TypeDefinitionIndex = 12252;

	class BattlePassLevelRewardRow : public ::System::Object
	{
	public:
		::System::UInt32 FreeReward; // 0x10
		::System::UInt32 PremiumFixedReward2; // 0x14
		::System::UInt32 PremiumFixedReward1; // 0x18
		::System::Boolean SpeicalPoint; // 0x1C
		::System::UInt32 Level; // 0x20
		::System::UInt32 PremiumOptional; // 0x24
		::System::UInt32 GroupID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPASSLEVELREWARDROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattlePassLevelRewardRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattlePassLevelRewardRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPASSLEVELREWARDROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
