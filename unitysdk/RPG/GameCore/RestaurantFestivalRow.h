#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RESTAURANTFESTIVALROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D022260)
#define RPG_GAMECORE_RESTAURANTFESTIVALROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D022750)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RestaurantFestivalRow_TypeDefinitionIndex = 10967;

	class RestaurantFestivalRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* MaterialList; // 0x10
		::Il2CppArray<::System::UInt32>* TagList; // 0x18
		::Il2CppArray<::System::UInt32>* FOList; // 0x20
		::System::Boolean IsShowToast; // 0x28
		::System::UInt32 FestivalID; // 0x2C
		::RPG::Client::TextID Title; // 0x30
		::RPG::Client::TextID Detail; // 0x40
		::RPG::Client::TextID Toast; // 0x50
		::System::Single PriceIncrease; // 0x60
		::System::UInt32 CustomerUpNumber; // 0x64
		::RPG::Client::TextID Name; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTFESTIVALROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RestaurantFestivalRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RestaurantFestivalRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTFESTIVALROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
