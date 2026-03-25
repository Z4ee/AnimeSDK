#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ElfRestaurant/ElfRestaurantView.h"

#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTFOODVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x99AA600)

namespace RPG::Client::LittleGame::ElfRestaurant
{
	inline static constexpr unsigned int ElfRestaurantFoodView_TypeDefinitionIndex = 62941;

	class ElfRestaurantFoodView : public ::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantView
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTFOODVIEW__CTOR_OFFSET))(this);
		}
	};
}
