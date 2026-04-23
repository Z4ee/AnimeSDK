#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameSmartObjectSlotGroup.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_FOODDEBRIS__CTOR_OFFSET UNITYSDK_OFFSET(0xA69B570)

namespace RPG::Client::LittleGame::ElfRestaurant
{
	inline static constexpr unsigned int FoodDebris_TypeDefinitionIndex = 70983;

	class FoodDebris : public ::System::Object
	{
	public:
		::RPG::GameCore::LittleGameSmartObjectSlotGroup SlotGroup; // 0x10
		::UnityEngine::GameObject* DebrisGameObject; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_FOODDEBRIS__CTOR_OFFSET))(this);
		}
	};
}
