#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ElfRestaurant/ElfRestaurantView.h"

#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTNPCVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0xBDEAB30)

namespace RPG::Client::LittleGame::ElfRestaurant
{
	inline static constexpr unsigned int ElfRestaurantNPCView_TypeDefinitionIndex = 71804;

	class ElfRestaurantNPCView : public ::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantView
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTNPCVIEW__CTOR_OFFSET))(this);
		}
	};
}
