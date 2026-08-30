#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ElfRestaurant/ElfRestaurantView.h"

namespace RPG::Client::LittleGame::ElfRestaurant { class FoodDebris; }

#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTTABLEVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC3A7E0)

namespace RPG::Client::LittleGame::ElfRestaurant
{
	inline static constexpr unsigned int ElfRestaurantTableView_TypeDefinitionIndex = 76810;

	class ElfRestaurantTableView : public ::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantView
	{
	public:
		::Il2CppArray<::RPG::Client::LittleGame::ElfRestaurant::FoodDebris*>* FoodDebris; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTTABLEVIEW__CTOR_OFFSET))(this);
		}
	};
}
