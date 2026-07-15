#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_HELIOBUSREWARDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B67EFF0)
#define RPG_GAMECORE_HELIOBUSREWARDROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B67F5E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HeliobusRewardRow_TypeDefinitionIndex = 13255;

	class HeliobusRewardRow : public ::System::Object
	{
	public:
		::System::UInt32 Level; // 0x10
		::System::UInt32 IncomeTarget; // 0x14
		::System::UInt32 RewardQuestID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSREWARDROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HeliobusRewardRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HeliobusRewardRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSREWARDROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
