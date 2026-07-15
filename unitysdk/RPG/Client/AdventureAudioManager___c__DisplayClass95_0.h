#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AdventureAudioManager; }
namespace RPG::Client { class AdventureModule; }
namespace RPG::GameCore { class AdventureCharacterDataComponent; }
namespace RPG::GameCore { class GameEntity; }

#define RPG_CLIENT_ADVENTUREAUDIOMANAGER___C__DISPLAYCLASS95_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18AB5430)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER___C__DISPLAYCLASS95_0___ONPLAYERLOCKNEWTARGET_B__0_OFFSET UNITYSDK_OFFSET(0x18AB6980)

namespace RPG::Client
{
	inline static constexpr unsigned int AdventureAudioManager___c__DisplayClass95_0_TypeDefinitionIndex = 57770;

	class AdventureAudioManager___c__DisplayClass95_0 : public ::System::Object
	{
	public:
		::RPG::Client::AdventureModule* advModule; // 0x10
		::RPG::GameCore::GameEntity* lockTarget; // 0x18
		::RPG::GameCore::AdventureCharacterDataComponent* characterData; // 0x20
		::RPG::Client::AdventureAudioManager* __4__this; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER___C__DISPLAYCLASS95_0__CTOR_OFFSET))(this);
		}

		::System::Void __OnPlayerLockNewTarget_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER___C__DISPLAYCLASS95_0___ONPLAYERLOCKNEWTARGET_B__0_OFFSET))(this);
		}
	};
}
