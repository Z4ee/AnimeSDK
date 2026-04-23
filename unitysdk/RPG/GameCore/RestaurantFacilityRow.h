#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RestaurantFacilityType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RESTAURANTFACILITYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18CB0D80)
#define RPG_GAMECORE_RESTAURANTFACILITYROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18CB0F80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RestaurantFacilityRow_TypeDefinitionIndex = 10842;

	class RestaurantFacilityRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* UnlockIDList; // 0x10
		::RPG::Client::TextID Name; // 0x18
		::System::UInt32 FacilityID; // 0x28
		::RPG::GameCore::RestaurantFacilityType Type; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTFACILITYROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RestaurantFacilityRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RestaurantFacilityRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTFACILITYROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
