#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ElfRestaurant/ElfRestaurantNPCView.h"

namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTWAITERVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC3AC00)

namespace RPG::Client::LittleGame::ElfRestaurant
{
	inline static constexpr unsigned int ElfRestaurantWaiterView_TypeDefinitionIndex = 76812;

	class ElfRestaurantWaiterView : public ::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantNPCView
	{
	public:
		::UnityEngine::Transform* CarryAttachPoint; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTWAITERVIEW__CTOR_OFFSET))(this);
		}
	};
}
