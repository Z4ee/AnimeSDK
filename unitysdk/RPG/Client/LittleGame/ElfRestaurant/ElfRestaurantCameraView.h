#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ElfRestaurant/ElfRestaurantView.h"

namespace Cinemachine { class CinemachineVirtualCamera; }

#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTCAMERAVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0xBDEAAF0)

namespace RPG::Client::LittleGame::ElfRestaurant
{
	inline static constexpr unsigned int ElfRestaurantCameraView_TypeDefinitionIndex = 71801;

	class ElfRestaurantCameraView : public ::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantView
	{
	public:
		::Cinemachine::CinemachineVirtualCamera* VirtualCamera; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTCAMERAVIEW__CTOR_OFFSET))(this);
		}
	};
}
