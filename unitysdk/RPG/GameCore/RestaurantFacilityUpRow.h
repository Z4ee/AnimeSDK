#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RESTAURANTFACILITYUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x175A5250)
#define RPG_GAMECORE_RESTAURANTFACILITYUPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x175A5420)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RestaurantFacilityUpRow_TypeDefinitionIndex = 10591;

	class RestaurantFacilityUpRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* AbilityIDList; // 0x10
		::System::UInt32 FacilityID; // 0x18
		::System::UInt32 Level; // 0x1C
		::System::UInt32 UpgradePrice; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTFACILITYUPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RestaurantFacilityUpRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RestaurantFacilityUpRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTFACILITYUPROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
