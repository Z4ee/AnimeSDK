#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ElfBehaviorStateContentItem; }

#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_DELAYBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0xA699790)

namespace RPG::Client::LittleGame::ElfRestaurant
{
	inline static constexpr unsigned int ElfRestaurantAIService_DelayBehavior_TypeDefinitionIndex = 70953;

	class ElfRestaurantAIService_DelayBehavior : public ::System::Object
	{
	public:
		::RPG::GameCore::ElfBehaviorStateContentItem* Behavior; // 0x10
		::System::Single Delay; // 0x18
		::System::Int32 EntityID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTAISERVICE_DELAYBEHAVIOR__CTOR_OFFSET))(this);
		}
	};
}
