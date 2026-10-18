#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RESTAURANTFESTIVALROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D963F60)
#define RPG_GAMECORE_RESTAURANTFESTIVALROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D964450)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RestaurantFestivalRow_TypeDefinitionIndex = 11358;

	class RestaurantFestivalRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* TagList; // 0x10
		::Il2CppArray<::System::UInt32>* MaterialList; // 0x18
		::Il2CppArray<::System::UInt32>* FOList; // 0x20
		::RPG::Client::TextID Name; // 0x28
		::RPG::Client::TextID Toast; // 0x38
		::RPG::Client::TextID Title; // 0x48
		::System::UInt32 CustomerUpNumber; // 0x58
		::System::Single PriceIncrease; // 0x5C
		::RPG::Client::TextID Detail; // 0x60
		::System::UInt32 FestivalID; // 0x70
		::System::Boolean IsShowToast; // 0x74

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
