#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ElfRestaurant/ElfRestaurantNPCView.h"

#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTCUSTOMERVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0xBDEAB10)

namespace RPG::Client::LittleGame::ElfRestaurant
{
	inline static constexpr unsigned int ElfRestaurantCustomerView_TypeDefinitionIndex = 71802;

	class ElfRestaurantCustomerView : public ::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantNPCView
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTCUSTOMERVIEW__CTOR_OFFSET))(this);
		}
	};
}
