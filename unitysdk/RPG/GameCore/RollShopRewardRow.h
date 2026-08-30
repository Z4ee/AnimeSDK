#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROLLSHOPREWARDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D493FC0)
#define RPG_GAMECORE_ROLLSHOPREWARDROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4940B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RollShopRewardRow_TypeDefinitionIndex = 14915;

	class RollShopRewardRow : public ::System::Object
	{
	public:
		::System::UInt32 RewardID; // 0x10
		::System::UInt32 GroupID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROLLSHOPREWARDROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RollShopRewardRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RollShopRewardRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROLLSHOPREWARDROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
