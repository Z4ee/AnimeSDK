#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RESTAURANTFACILITYUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DB99490)
#define RPG_GAMECORE_RESTAURANTFACILITYUPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB99650)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RestaurantFacilityUpRow_TypeDefinitionIndex = 11323;

	class RestaurantFacilityUpRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* AbilityIDList; // 0x10
		::System::UInt32 UpgradePrice; // 0x18
		::System::UInt32 FacilityID; // 0x1C
		::System::UInt32 Level; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTFACILITYUPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RestaurantFacilityUpRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RestaurantFacilityUpRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTFACILITYUPROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
