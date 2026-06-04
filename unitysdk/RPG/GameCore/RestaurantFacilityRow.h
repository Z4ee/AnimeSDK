#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RestaurantFacilityType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RESTAURANTFACILITYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19AD5610)
#define RPG_GAMECORE_RESTAURANTFACILITYROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19AD5800)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RestaurantFacilityRow_TypeDefinitionIndex = 10896;

	class RestaurantFacilityRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* UnlockIDList; // 0x10
		::RPG::GameCore::RestaurantFacilityType Type; // 0x18
		::System::UInt32 FacilityID; // 0x1C
		::RPG::Client::TextID Name; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTFACILITYROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RestaurantFacilityRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RestaurantFacilityRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTFACILITYROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
