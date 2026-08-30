#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUETOURNEXPREWARDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D41B2E0)
#define RPG_GAMECORE_ROGUETOURNEXPREWARDROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D41B460)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournExpRewardRow_TypeDefinitionIndex = 14812;

	class RogueTournExpRewardRow : public ::System::Object
	{
	public:
		::System::UInt32 Exp; // 0x10
		::System::UInt32 MainTournID; // 0x14
		::System::UInt32 Level; // 0x18
		::System::UInt32 RewardID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNEXPREWARDROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueTournExpRewardRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournExpRewardRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNEXPREWARDROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
