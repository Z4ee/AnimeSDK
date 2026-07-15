#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_EXPEDITIONREWARDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C06D940)
#define RPG_GAMECORE_EXPEDITIONREWARDROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1C06E050)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ExpeditionRewardRow_TypeDefinitionIndex = 12766;

	class ExpeditionRewardRow : public ::System::Object
	{
	public:
		::System::UInt32 AvatarNum; // 0x10
		::System::UInt32 RewardID; // 0x14
		::System::UInt32 ExpeditionID; // 0x18
		::System::UInt32 Duration; // 0x1C
		::System::UInt32 ExtraRewardID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONREWARDROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ExpeditionRewardRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ExpeditionRewardRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONREWARDROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
