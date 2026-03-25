#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CITYSHOPREWARDLISTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x170B0AC0)
#define RPG_GAMECORE_CITYSHOPREWARDLISTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x170B11A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CityShopRewardListRow_TypeDefinitionIndex = 11909;

	class CityShopRewardListRow : public ::System::Object
	{
	public:
		::System::UInt32 RewardID; // 0x10
		::System::UInt32 TotalItem; // 0x14
		::System::UInt32 ItemNeed; // 0x18
		::System::UInt32 GroupID; // 0x1C
		::System::UInt32 Level; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CITYSHOPREWARDLISTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::CityShopRewardListRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CityShopRewardListRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CITYSHOPREWARDLISTROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
